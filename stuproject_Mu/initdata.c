#include <stdio.h>
#include "header/headerlist.h"
#include "header/header.h"

extern int g_STUMEMBER_COUNT;
const char* g_pDATA_PATH;

// 读取文件学生信息到链表
int init_data(Linklist linklist)
{
    // 创建一个文件对象指针来读取文本文件
    FILE *pfile = fopen(g_pDATA_PATH, "r");
    if (NULL == pfile)
    {
        perror("错误原因：");
        return 1;
    }

    // 创建一个局部变量来存储文件里面的一条学生信息
    Type data = {};
    // 读取文件学生信息到data内存，当一行代码比较长的时候，最好分行
    while (1)
    {
        // 文件数据一定要符合规范，只有在规范的前提下，后面做的事情才有意义
        if(g_STUMEMBER_COUNT != fscanf(pfile, "%d %s %s %d %c %f %f %f %f %d",
               &data.id, data.pwd, data.name,
               &data.age, &data.sex, 
               &data.chinese_score,&data.math_score, &data.english_score, &data.total,
               &data.class))
               {
                    break;
               }

        // 把学生信息存入到链表的数据域
        push_linklist(linklist, &data);
    }

    // 归还文件对象
    fclose(pfile);
    return 0;
}