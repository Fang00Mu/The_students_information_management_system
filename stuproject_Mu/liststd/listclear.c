#include <stdio.h>
#include <stdlib.h>
#include "../header/headerlist.h"

// 8.链表清空（清空链表中所有节点（不包含头结点））
void clear_linklist(Linklist linklist)
{
    // 1.定义一个指针 prmv_node 指向头结点的下一个节点
    Node *prmv_node = linklist->next;

    // 2.循环删除prmv_node
    while (NULL != prmv_node)
    {
        linklist->next = prmv_node->next;
        free(prmv_node);
        prmv_node = linklist->next;
    }

    prmv_node = NULL;

    printf ("已经删除所有学生信息");
    
    return;
}