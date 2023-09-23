#include <stdio.h>
#include <string.h>
#include "header/headerlist.h"
#include "header/header.h"

int admin_check()
{
    char name[10] = {};  // 用户名
    char pwd[10] = {};   // 密码
    int  name_length = 0 ;
    int pwd_length = 0 ;

    printf("输入管理员账号:");
    scanf("%s", name);

    name_length = strlen(name);
    pwd_length = strlen(pwd);

     if (3 > name_length || 9 < name_length)
    {
        printf("用户名字数在三到九之间，可以等于三和九，请重新输入\n");
        return  admin_check() ;
    }

    printf("输入管理员密码:");
    scanf("%s", pwd);
   
   pwd_length = strlen(pwd);
   
    if ( 3 > pwd_length || 9 < pwd_length )
    {
        printf("密码字数在三到九之间，可以等于三和九，请重新输入\n");
        return  admin_check() ;
    }
    
    

    if (strcmp(name, "admin") == 0)
    {
        if (strcmp(pwd, "admin") == 0)
        {
            return 0; // 0代表用户名和密码都正确
        }
        else
        {
            return 2; // 2代表用户名对，密码不对
        }
    }
    return 1; // 1代表用户名错误
}

int student_check()
{
    char name[10] = {};  // 用户名
    char pwd[10] = {};   // 密码

    printf("输入学生账号:");
    scanf("%s", name);
    printf("输入学生密码:");
    scanf("%s", pwd);

    if (strcmp(name, "student") == 0)
    {
        if (strcmp(pwd, "student") == 0)
        {
            return 0; // 0代表用户名和密码都正确
        }
        else
        {
            return 2; // 2代表用户名对，密码不对
        }
    }
    return 1; // 1代表用户名错误
}