#include <stdio.h>
#include "../header/headerlist.h"

// 7.链表遍历（打印出链表中所有节点的值（不包含头结点））
void print_linklist(Linklist linklist, t_PPRINTRULE pfunc)
{
    linklist = linklist->next;
    while (NULL != linklist)
    {
        // 打印学生信息
        pfunc(&linklist->data);
        linklist = linklist->next;
    }

    return;
}
 
 