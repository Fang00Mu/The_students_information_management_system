#include <stdio.h>
#include "header/headerlist.h"
#include "header/header.h"

void print_data(Linklist linklist)
{
    printf("打印出学生信息(学号 密码 姓名 年龄 性别 语文 数学 英语 班级)：\n");
    print_linklist(linklist, print_rule);

    return;
}