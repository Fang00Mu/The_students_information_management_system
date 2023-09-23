#ifndef _HEADER_BASE
#define _HEADER_BASE

/* typedef struct st_score
 {
     float chinese;
     float math;   
     float english;    
     /float total ;
 } Score; */

// 1.数据域的类型（学生类型）
typedef struct st_stu
{
    int id;        // 学号
    char pwd[10];  // 密码
    char name[10]; // 姓名
    int age;       // 年龄
    char sex;      // 性别
    float chinese_score;   // 分数
    float math_score;
    float english_score;
    float total;
    int class;     // 班级
    int is_valid;
} Stu;

typedef Stu Type;
typedef void (*t_PPRINTRULE)(const Type *data);
typedef int (*t_PCOMPRULE)(const Type *pldata, const Type *prdata);

// 2.定义节点类型
typedef struct st_node
{
    Type data;
    struct st_node *next;
} Node, *Linklist;

// 3.定义学生成员选项
typedef enum e_memoption
{
    ID = 1,
    PWD,
    NAME,
    AGE,
    SEX,
    MATH_SCORE,
    ENGLISH_SCORE,
    CHINESE_SCORE,
    total ,
    CLASS
} Memoption;



#endif