#include <stdio.h>
#include "header/headerlist.h"
#include "header/header.h"

// 写入文件
void save_file(Linklist linklist)
{
    FILE *pfile = fopen("res/data.txt", "w");
    if (NULL == pfile)
    {
        perror("文件打开失败原因：");
        return;
    }

    fprintf(pfile,"学号\t密码\t姓名\t年龄\t性别\t语文\t数学\t英语\t总分\t班级\n\n");

    linklist = linklist->next;
    while (NULL != linklist)
    {
        // 存储链表里面的数据到磁盘文件 fprintf(fp, "学号\t姓名\t语文\t数学\t英语\t总分\n");
        fprintf(pfile, "%d %s %s %d %c %.1f %.1f %.1f %.1f %d\n",
                linklist->data.id, linklist->data.pwd, linklist->data.name,
                linklist->data.age, linklist->data.sex, 
                linklist->data.chinese_score,linklist->data.math_score, linklist->data.english_score,
                linklist->data.total , linklist->data.class);
        linklist = linklist->next;
    }
    
    fclose(pfile);

    return;
}

// 编译错误（语法错误）
// 运行错误（逻辑错误）