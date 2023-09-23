#include "headerbase.h"

// 空链表(1.不带头节点（头指针的值为NULL);2.带头节点（头节点的指针域为NULL))
// 带头结点的单向链表
// 1.创建链表（创建只有头节点的空链表）
// 2.增加节点（a.往尾部添加；b.根据值任意位置插入节点）
// 3.删除节点（a.尾部删除；b.根据值任意位置删除节点）
// 4.查找节点（根据值任意位置查找节点）
// 5.修改节点（根据值任意位置修改节点）
// 6.链表排序（a.交换链表中节点里面的数据域的值；b.交换节点）
// 7.链表遍历（打印出链表中所有节点的值（不包含头结点））
// 8.链表清空（清空链表中所有节点（不包含头结点））
// 9.链表销毁（销毁链表中所有节点（包含头结点））
// 警告：用完destroy_linklist之后，不能再使用链表的所有任何操作
// 10.获取链表长度（不含头节点）

// 1.创建链表（创建只有头节点的空链表）
Node *create_linklist();
// 2.增加节点（a.往尾部添加）
void push_linklist(Linklist linklist, const Type* value);
// 2.增加节点（b.根据值任意位置插入节点）
// void insert_linklistbyvalue(Linklist linklist, Type value, Type newvalue);
// 3.删除节点（a.尾部删除）
// void pop_linklist(Linklist linklist);
// 3.删除节点（b.根据值任意位置删除节点）
void remove_linklistbyvalue(Linklist linklist, const Type* value, t_PCOMPRULE pfunc);
// 4.查找节点（根据值任意位置查找节点）
const Type* find_linklistbyevalue(Linklist linklist, const Type* value, t_PCOMPRULE pfunc);
// 5.修改节点（根据值任意位置修改节点）
Type* change_linklistbyevalue(Linklist linklist, const Type* value, t_PCOMPRULE pfunc);
// // 6.链表排序（a.交换链表中节点里面的数据域的值）
// void sort_Listbyvalue(Linklist linklist);
// 6.链表排序（b.交换节点）
void sort_listbynode(Linklist linklist, t_PCOMPRULE pfunc);
// 7.链表遍历（打印出链表中所有节点的值（不包含头结点））
void print_linklist(Linklist linklist, t_PPRINTRULE pfunc);
// 8.链表清空（清空链表中所有节点（不包含头结点））
void clear_linklist(Linklist linklist);
// // 9.链表销毁（销毁链表中所有节点（包含头结点））
// // 警告：用完destroy_linklist之后，不能再使用链表的所有任何操作
// void destroy_linklist(Linklist* linklist);
// // 10.获取链表长度（不含头节点）
// int length_linklist(Linklist linklist);
//check the id id valid
Node* find_node_by_id(Linklist linklist, int id);

