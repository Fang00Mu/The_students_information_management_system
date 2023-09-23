#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header/header.h"
#include "header/headerlist.h"

 void student_login(Linklist linklist)
{
    int check_rst = student_check();
    if (1 == check_rst)
    {
        printf("user name is error");
        return;
    }
    else if (2 == check_rst)
    {
        printf("password is error");
        return ;
    }
    else(printf("welcome to home,user."));

    int select_flag = -1 ;
   while(1)
{
    student_menu();
    printf("enter your choise.");
    fflush(stdin);
    scanf("%d",&select_flag);

    switch (select_flag)
    {
    case 0 :
        printf("退出学生管理系统\n");
        return  ;
    case 1 :
    find_data (linklist);//该查找发生在链表，链表和文件都能查找
    break;

    case 2 :
    find_data (linklist);//修改学生密码待实现
    break;

    default:
    printf("选项错误");
        break;
    }
}
return ;
}


void admin_login(Linklist linklist)
{
    int check_rst = admin_check();
    if (1 == check_rst)
    {
        printf("用户名错误，请重新输入\n");
        return;
    }
    else if (2 == check_rst)
    {
        printf("密码错误，请重新输入\n");
        return ;
    }
     
    
    else(printf("welcome to home,user."));


    int select_flag = -1 ;
   while(1)
{
    admin_menu();
    printf("\t\t enter your choise. \n");
    fflush(stdin);
    scanf("%d",&select_flag);

    switch (select_flag)
    {
    case 0 :
        printf("\t\t退出学生管理系统\n");
        return  ;
    case 1 :
    add_data(linklist);
        break;
    case 2 :
    find_data (linklist);//该查找发生在链表，链表和文件都能查找
    break;

    case 3 :
    change_data(linklist);
    break;

    case 4 :
    delete_data (linklist);
    break;

    case 5 :
    sort_data (linklist);
    break;

    case 6 :
    clear_linklist(linklist);
    break;

    default:
    printf("选项错误");
        break;
    }
}
return ;
}
int main()
{
    Linklist linklist = create_linklist();
    init_data(linklist);

    int select_flag = -1 ;
    while (1)
    {
       begin_menu();
       printf("\t\tenter the option,please.\n");
       fflush(stdin);
       scanf("%d",&select_flag);

       switch (select_flag)
       {
       case 0 :
        printf("exit students management systen.\n");
        return 0 ;
       
       case 1 :
        admin_login(linklist);
          break;

        case 2 :
        student_login(linklist);
        break;

       default:
       printf("\t\toptions is unrecognize\n");
        break;
       }
    system ("pause");
    return 0 ;
    }
}