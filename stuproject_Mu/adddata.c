#include <stdio.h>
#include "header/headerlist.h"
#include "header/header.h"

void add_dataxx(Linklist linklist, Type* pdata)
{
    static Type data = {};

    printf("请输入学生信息(学号 密码 姓名 年龄 性别 语文分数 数学分数 英语分数  班级)：\n");
    scanf("%d %s %s %d %c %f %f %f %d",
          &(pdata->id), pdata->pwd, pdata->name,
          &(pdata->age), &(pdata->sex), 
          &(pdata->chinese_score),&(pdata->math_score),&(pdata->english_score),
          &(pdata->class));

if (pdata->chinese_score < 0 || pdata->chinese_score > 100 ||
        pdata->math_score < 0 || pdata->math_score > 100 ||
        pdata->english_score < 0 || pdata->english_score > 100) {
        printf("输入的分数必须在0到100之间可以等于0和100\n");
        return ;
    }
   
    pdata->total = calculateTotal(pdata);
    pdata->is_valid = 1;
    
    push_linklist(linklist, pdata);

    return;
}

// 添加学生信息
void add_data(Linklist linklist)
{
    
    
    char flag = 0;
    while (1)
    {
        Type data = {};// 创建一个局部变量来存储键盘输入的一条学生信息
        add_dataxx(linklist, &data);
        printf("是否继续添加学生信息（y或者Y是继续添加，否则退出添加：)\n");
        fflush(stdin);
        scanf("%c", &flag);
        switch (flag)
        {
        case 'y':
        case 'Y':
            /*printf("请输入学生信息(学号 密码 姓名 年龄 性别 语文分数 数学分数 英语分数  班级)：\n");
            scanf("%d %s %s %d %c %f %f %f %d",
                  &data.id, data.pwd, data.name,
                  &data.age, &data.sex, 
                  &data.chinese_score , &data.math_score , &data.english_score,
                  &data.class);

            if (data.chinese_score  < 0 || data.chinese_score  > 100 ||
        data.math_score < 0 || data.math_score > 100 ||
        data.english_score < 0 || data.english_score > 100) 
        {
        printf("输入的分数必须在0到100之间可以等于0和100\n");
        return add_dataxx(linklist, &data);
        }*/
         continue;
           
            push_linklist(linklist, &data);
            break;
        default:
            printf("退出添加学生信息\n");
            push_linklist(linklist, &data);
            save_file(linklist);
            return;
        }
    }

    return;
}