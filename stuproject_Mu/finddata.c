#include <stdio.h>
#include "header/headerlist.h"
#include "header/header.h"

void find_dataxx(Linklist linklist)  //该查找发生在链表，链表和文件都能查找
{
    // 条件查找
    printf("根据学生属性(1.学号 2.密码 3.姓名 4.年龄 5.性别 6.数学分数 7.英语分数 8.语文分数 9.班级）查找\n");
    const Type* pdata = NULL;
    int find_flag = 0;
    Type data = {};
    fflush(stdin);
    scanf("%d", &find_flag);
    switch (find_flag)
    {
    case ID:
        printf("请输入学号：\n");
        fflush(stdin);
        scanf("%d", &data.id);
        pdata = find_linklistbyevalue(linklist, &data, comp_rule_byid);
        if (0 != pdata)
        {
            printf("找到学号为 %d 的学生：\n", data.id);
            print_rule(pdata);
            break;
        }
        printf("没找到学号为 %d 的学生：\n", data.id);
        break;

    case PWD:
        printf("请输入密码：\n");
        fflush(stdin);
        scanf("%s", data.pwd);
        pdata = find_linklistbyevalue(linklist, &data, comp_rule_bypwd);
        if (0 != pdata)
        {
            printf("找到密码为 %s 的学生：\n", data.pwd);
            print_rule(pdata);
            break;
        }
        printf("没找到密码为 %s 的学生：\n", data.pwd);
        break;

    case NAME:
        printf("请输入姓名：\n");
        fflush(stdin);
        scanf("%s", data.name);
        pdata = find_linklistbyevalue(linklist, &data, comp_rule_byname);
        if (0 != pdata)
        {
            printf("找到姓名为 %s 的学生：\n", data.name);
            print_rule(pdata);
            break;
        }
        printf("没找到姓名为 %s 的学生：\n", data.name);
        break;

    case AGE:
        printf("请输入年龄：\n");
        fflush(stdin);
        scanf("%d", &data.age);
        pdata = find_linklistbyevalue(linklist, &data, comp_rule_byage);
        if (0 != pdata)
        {
            printf("找到年龄为 %d 的学生：\n", data.age);
            print_rule(pdata);
            break;
        }
        printf("没找到年龄为 %d 的学生：\n", data.age);
        break;

    case SEX:
        printf("请输入性别：\n");
        fflush(stdin);
        scanf("%c", &data.sex);
        pdata = find_linklistbyevalue(linklist, &data, comp_rule_bysex);
        if (0 != pdata)
        {
            printf("找到性别为 %c 的学生：\n", data.sex);
            print_rule(pdata);
            break;
        }
        printf("没找到性别为 %c 的学生：\n", data.sex);
        break;

    case CHINESE_SCORE:
        printf("请输入语文分数：\n");
        fflush(stdin);
        scanf("%f", &data.chinese_score);
        pdata = find_linklistbyevalue(linklist, &data, comp_rule_byscore);
        if (0 != pdata)
        {
            printf("找到语文分数为 %.1f 的学生：\n", data.chinese_score);
            print_rule(pdata);
            break;
        }
        printf("没找到语文分数为 %.1f 的学生：\n", data.chinese_score);
        break;

    case MATH_SCORE:
        printf("请输入数学分数：\n");
        fflush(stdin);
        scanf("%f", &data.chinese_score);
        pdata = find_linklistbyevalue(linklist, &data, comp_rule_byscore);
        if (0 != pdata)
        {
            printf("找到数学分数为 %.1f 的学生：\n", data.math_score);
            print_rule(pdata);
            break;
        }
        printf("没找到数学分数为 %.1f 的学生：\n", data.math_score);
        break;

    case ENGLISH_SCORE:
        printf("请输入英语分数：\n");
        fflush(stdin);
        scanf("%f", &data.chinese_score);
        pdata = find_linklistbyevalue(linklist, &data, comp_rule_byscore);
        if (0 != pdata)
        {
            printf("找到英语分数为 %.1f 的学生：\n", data.english_score);
            print_rule(pdata);
            break;
        }
        printf("没找到英语分数为 %.1f 的学生：\n", data.english_score);
        break;

    case CLASS:
        printf("请输入班级：\n");
        fflush(stdin);
        scanf("%d", &data.class);
        pdata = find_linklistbyevalue(linklist, &data, comp_rule_byclass);
        if (0 != pdata)
        {
            printf("找到班级为 %d 的学生：\n", data.class);
            print_rule(pdata);
            break;
        }
        printf("没找到班级为 %d 的学生：\n", data.class);
        break;

    default:
        printf("选项错误:\n");
        break;
    }

    return;
}

void find_data(Linklist linklist)  //该查找发生在链表，链表和文件都能查找
{
    char yorn = 0;
    find_dataxx(linklist);
    while (1)
    {
        printf("是否继续查找学生(y或者Y继续查找，其它退出查找：)\n");
        fflush(stdin);
        scanf("%c", &yorn);
        switch (yorn)
        {
        case 'y':
        case 'Y':
            find_dataxx(linklist);
            break;

        default:
            printf("退出查找操作\n");
            return;
        }
    }

    return;
}