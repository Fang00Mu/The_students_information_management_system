#include <stdio.h>
#include "header/headerlist.h"
#include "header/header.h"

void delete_dataxx(Linklist linklist)
{
    // 条件删除
    printf("根据学生属性（1.学号 2.密码 3.姓名 4.年龄 5.性别 6.数学分数 7.语文分数 8.英语分数 9.班级）删除\n");
    int rmv_flag = 0;
    Type data = {};
    fflush(stdin);
    scanf("%d", &rmv_flag);
    switch (rmv_flag)
    {
    case ID:
        printf("请输入学号：\n");
        fflush(stdin);
        scanf("%d", &data.id);
        remove_linklistbyvalue(linklist, &data, comp_rule_byid);
        break;

    case PWD:
        printf("请输入密码：\n");
        fflush(stdin);
        scanf("%s", data.pwd);
        remove_linklistbyvalue(linklist, &data, comp_rule_bypwd);
        break;

    case NAME:
        printf("请输入姓名：\n");
        fflush(stdin);
        scanf("%s", data.name);
        remove_linklistbyvalue(linklist, &data, comp_rule_byname);
        break;

    case AGE:
        printf("请输入年龄：\n");
        fflush(stdin);
        scanf("%d", &data.age);
        remove_linklistbyvalue(linklist, &data, comp_rule_byage);
        break;

    case SEX:
        printf("请输入性别：\n");
        fflush(stdin);
        scanf("%c", &data.sex);
        remove_linklistbyvalue(linklist, &data, comp_rule_bysex);
        break;

    case MATH_SCORE:
        printf("请输入分数：\n");
        fflush(stdin);
        scanf("%f", &data.math_score);
        remove_linklistbyvalue(linklist, &data, comp_rule_byscore);
        break;

        case ENGLISH_SCORE:
        printf("请输入分数：\n");
        fflush(stdin);
        scanf("%f", &data.english_score);
        remove_linklistbyvalue(linklist, &data, comp_rule_byscore);
        break;

    case CHINESE_SCORE:
        printf("请输入分数：\n");
        fflush(stdin);
        scanf("%f", &data.chinese_score);
        remove_linklistbyvalue(linklist, &data, comp_rule_byscore);
        break;

    case CLASS:
        printf("请输入班级：\n");
        fflush(stdin);
        scanf("%d", &data.class);
        remove_linklistbyvalue(linklist, &data, comp_rule_byclass);
        break;

    default:
        printf("选项错误:\n");
        break;
    }

    return;
}

// 删除学生数据
void delete_data(Linklist linklist)
{
    char yorn = 0;
    delete_dataxx(linklist);
    while (1)
    {
        printf("是否继续删除学生（y或者Y继续删除，其它退出删除：）\n");
        fflush(stdin);
        scanf("%c", &yorn);
        switch (yorn)
        {
        case 'y':
        case 'Y':
            delete_dataxx(linklist);
            break;

        default:
            save_file(linklist);
            printf("退出删除操作\n");
            return;
        }
    }

    return;
}