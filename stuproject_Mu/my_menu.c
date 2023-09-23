#include <stdio.h>
#include <stdlib.h>

void begin_menu()
{   //system("cls");
    printf("******welcome to students mansgement system\n");
    printf("\t\t0.退出系统\n");
    printf("\t\t1.管理员登录\n");
    printf("\t\t2.学生登录\n");
}

void  admin_menu()
{
    //system("cls");
    printf("******管理员权限*******\n");
    printf("\t\t0:退出 \n");
    printf("\t\t1:添加 \n");
    printf("\t\t2:查找 \n");
    printf("\t\t3:修改 \n");
    printf("\t\t4:删除 \n");
    printf("\t\t5:排序 \n");
    printf("\t\t6:清空所有学生信息 \n");
    return ;
}

void student_menu()
{
    //system("cls");
    printf("******学生权限******\n");
    printf("\t\t0.退出\n");
    printf("\t\t1.查找\n");
    printf("\t\t2.修改密码\n");
    return ;
}
void add_menu()
{
    //system("cls");
    printf("******添加*****\n");
    printf("\t\t0: 退出添加功能\n");
    printf("\t\t1: enter the information of students\n");

}
void find_menu() //该查找发生在链表，链表和文件都能查找
{
    //system("cls");
    printf("******查找*****\n");
    printf("\t\t0: 退出查找功能\n");
    printf("\t\t1: 根据学号查找\n");
    printf("\t\t2: 根据姓名查找\n");
    printf("\t\t3: 根据语文分数查找\n");
    printf("\t\t4: 根据数学分数查找\n");
    printf("\t\t5: 根据英语分数查找\n");
    printf("\t\t6: 根据总分分数查找\n");
    printf("\t\t7: 查找所有学生\n");
    return ;
}

void change_menu()
{
    //system("cls");
    printf("******修改*****\n");
    printf("\t\t0:退出修改功能\n");
    printf("\t\t1:多项修改\n");
    return ;
}

void remove_menu()
{
    //system("cls");
    printf("******删除*****\n");
    printf("\t\t0:退出删除功能\n");
    printf("\t\t1:根据学号删除\n");
    printf("\t\t2:根据姓名删除\n");
    printf("\t\t3:根据语文分数删除\n");
    printf("\t\t4:根据数学分数删除\n");
    printf("\t\t5:根据英语分数删除\n");
    printf("\t\t6:根据总分分数删除\n");
    return ;
}

void sort_menu()
{
    //system("cls");
    printf("******排序*****\n");
    printf("\t\t0:退出排序功能\n");
    printf("\t\t1:根据学号升序排序\n");
    printf("\t\t2:根据姓名升序排序\n");
    printf("\t\t3:根据语文分数升序排序\n");
    printf("\t\t4:根据数学分数升序排序\n");
    printf("\t\t5:根据英语分数升序排序\n");
    printf("\t\t6:根据总分分数升序排序\n");
    return ;
}