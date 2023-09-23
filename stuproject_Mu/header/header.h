#include "headerbase.h"

// 初始化数据
int init_data(Linklist linklist);
// 写入文件
void save_file(Linklist linklist);
// 打印学生数据
void print_data(Linklist linklist);
// 添加学生信息
void add_data(Linklist linklist);
void add_dataxx(Linklist linklist, Type* pdata);
// 删除学生信息
void delete_data(Linklist linklist);
void delete_dataxx(Linklist linklist);
// 查找学生信息
void find_data(Linklist linklist);
void find_dataxx(Linklist linklist);
// 修改学生信息
void change_data(Linklist linklist);
void change_dataxx(Linklist linklist);
// 排序学生信息
void sort_data(Linklist linklist);
// 管理员登录检查
int admin_check();
int student_check();

//计算总分
int calculateTotal(Type* stu_score);


// 菜单
void sort_menu();
void remove_menu();
void change_menu();
void find_menu();
void add_menu();
void student_menu();
void admin_menu();
void begin_menu();

// 打印规则
void print_rule(const Type* pdata);
// 输入规则
int scanf_rule(Type *pdata);
// 比较规则（按id），相等返回0，否则返回1
int comp_rule_byid(const Type *pldata, const Type *prdata);
// 比较规则（按pwd），相等返回0，否则返回1
int comp_rule_bypwd(const Type *pldata, const Type *prdata);
// 比较规则（按name），相等返回0，否则返回1
int comp_rule_byname(const Type *pldata, const Type *prdata);
// 比较规则（按age），相等返回0，否则返回1
int comp_rule_byage(const Type *pldata, const Type *prdata);
// 比较规则（按sex），相等返回0，否则返回1
int comp_rule_bysex(const Type *pldata, const Type *prdata);
// 比较规则（按class），相等返回0，否则返回1
int comp_rule_byscore(const Type *pldata, const Type *prdata);
// 比较规则（按id），相等返回0，否则返回1
int comp_rule_byclass(const Type *pldata, const Type *prdata);


