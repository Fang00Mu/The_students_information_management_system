#include <stdio.h>
#include "header/headerlist.h"
#include "header/header.h"

void sort_data(Linklist linklist)
{
    // 条件排序
    printf("根据学生属性（1.学号 2.密码 3.姓名 4.年龄 5.性别 6.分数 7.班级）排序\n");
    int sort_flag = 0;
    fflush(stdin);
    scanf("%d", &sort_flag);
    switch (sort_flag)
    {
    case ID:
        sort_listbynode(linklist, comp_rule_byid);
        break;

    case PWD:
        sort_listbynode(linklist, comp_rule_bypwd);
        break;

    case NAME:
        sort_listbynode(linklist, comp_rule_byname);
        break;

    case AGE:
        sort_listbynode(linklist, comp_rule_byage);
        break;

    case SEX:
        sort_listbynode(linklist, comp_rule_bysex);
        break;

    case CHINESE_SCORE:
        sort_listbynode(linklist, comp_rule_byscore);
        break;

    case MATH_SCORE:
        sort_listbynode(linklist, comp_rule_byscore);
        break;

    case ENGLISH_SCORE:
        sort_listbynode(linklist, comp_rule_byscore);
        break;

    case CLASS:
        sort_listbynode(linklist, comp_rule_byclass);
        break;

    default:
        printf("选项错误:\n");
        break;
    }
   
    save_file(linklist);
    return;
}