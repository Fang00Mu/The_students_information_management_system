#include <stdio.h>
#include <string.h>
#include "header/headerlist.h"
#include "header/header.h"

// 打印规则(往屏幕上)
void print_rule(const Type *pdata)
{
    printf("%d %s %s %d %c %.1f %.1f %.1f %.1f  %d\n",
           pdata->id, pdata->pwd, pdata->name,
           pdata->age, pdata->sex, 
           pdata ->chinese_score, pdata ->math_score,pdata->english_score,pdata->total,
           pdata->class);

    return;
}

// 输入规则(从键盘上)
int scanf_rule(Type *pdata)
{
     return scanf("%d %s %s %d %c %f %f %f %d",
    
          &(pdata->id), pdata->pwd, pdata->name,
          &(pdata->age), &(pdata->sex), 
          &(pdata ->chinese_score), &(pdata -> math_score),&(pdata->english_score),
          &(pdata->class));
    
    if ( pdata->id== pdata->id)
    {
        printf("此学号已存在,请重新输入学号。\n");
        return 0 ;
    }
    
}
    

// 比较规则（按id），相等返回0，否则返回1
int comp_rule_byid(const Type *pldata, const Type *prdata)
{
    if (pldata->id > prdata->id)
    {
        return 1;
    }
    if (pldata->id < prdata->id)
    {
        return -1;
    }
    if (pldata->id == prdata->id)
    {
        return 0;
    }
    // return pldata->id != prdata->id;
}

// 比较规则（按pwd），相等返回0，否则返回1
int comp_rule_bypwd(const Type *pldata, const Type *prdata)
{
    return strcmp(pldata->pwd, prdata->pwd);
}

// 比较规则（按name），相等返回0，否则返回1
int comp_rule_byname(const Type *pldata, const Type *prdata)
{
    return strcmp(pldata->name, prdata->name);
}

// 比较规则（按age），相等返回0，否则返回1
int comp_rule_byage(const Type *pldata, const Type *prdata)
{
    if (pldata->age > prdata->age)
    {
        return 1;
    }
    if (pldata->age < prdata->age)
    {
        return -1;
    }
    if (pldata->age == prdata->age)
    {
        return 0;
    }
}

// 比较规则（按sex），相等返回0，否则返回1
int comp_rule_bysex(const Type *pldata, const Type *prdata)
{
    if (pldata->sex > prdata->sex)
    {
        return 1;
    }
    if (pldata->sex < prdata->sex)
    {
        return -1;
    }
    if (pldata->sex == prdata->sex)
    {
        return 0;
    }
}

// 比较规则（按class），相等返回0，否则返回1
int comp_rule_byscore(const Type* pldata, const Type* prdata)
{
    if (pldata->chinese_score > prdata->chinese_score)
    {
        return 1;
    }
    if (pldata->chinese_score < prdata->chinese_score)
    {
        return -1;
    }
    if (pldata->chinese_score == prdata->chinese_score)

    if (pldata->math_score > prdata->math_score)
    {
        return 1;
    }
    if (pldata->math_score < prdata->math_score)
    {
        return -1;
    }
    if (pldata->math_score == prdata->math_score)

    if (pldata->english_score > prdata->english_score)
    {
        return 1;
    }
    if (pldata->english_score < prdata->english_score)
    {
        return -1;
    }
    if (pldata->english_score == prdata->english_score)


    {
        return 0;
    }
}

// 比较规则（按id），相等返回0，否则返回1
int comp_rule_byclass(const Type *pldata, const Type *prdata)
{
    if (pldata->class > prdata->class)
    {
        return 1;
    }
    if (pldata->class < prdata->class)
    {
        return -1;
    }
    if (pldata->class == prdata->class)
    {
        return 0;
    }
}
