#include <stdio.h>
#include <stdlib.h>
#include "../header/headerlist.h"

// 9.链表销毁（销毁链表中所有节点（包含头结点））
// 警告：用完destroy_linklist之后，不能再使用链表的所有任何操作
void destroy_linklist(Linklist* linklist)
{
    // 1.定义一个指针 prmv_node 指向头结点的下一个节点
    Node *prmv_node = (*linklist)->next;

    // 2.循环删除prmv_node
    while (NULL != prmv_node)
    {
        (*linklist)->next = prmv_node->next;
        free(prmv_node);
        prmv_node = (*linklist)->next;
    }

    prmv_node = NULL;
    free(*linklist);
    *linklist = NULL;

    return;
}
