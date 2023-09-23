#include <stdio.h>
#include <stdlib.h>
#include "../header/headerlist.h"

// 3.删除节点（a.尾部删除）
void pop_linklist(Linklist linklist)
{
    // 1.定位到链表尾结点的前一个节点处
    while (NULL != linklist->next)
    {
        if (NULL == linklist->next->next)
        {
            break;
        }
        linklist = linklist->next;
    }

    // 空链表
    if (NULL == linklist->next)
    {
        printf("空链表：\n");
        return;
    }

    // 2.定义一个节点指针指向要删除的尾结点
    Node *prmv_node = linklist->next;

    // 3.删除尾部节点
    linklist->next = NULL;
    free(prmv_node);
    prmv_node = NULL;

    return;
}

// 3.删除节点（b.根据值任意位置删除节点）
void remove_linklistbyvalue(Linklist linklist, const Type* value, t_PCOMPRULE pfunc)
{
    // 1.定位到要删除节点的前一个节点
    while (NULL != linklist->next)
    {
        if(0 == pfunc(value, &linklist->next->data))
        {
            break;
        }
 
        linklist = linklist->next;
    }

    // 遍历整个链表，没找到要删除的节点（含空链表）
    if (NULL == linklist->next)
    {
        printf("没找到要删除的位置：\n");
        return;
    }

    // 2.定义一个指针指向要删除的节点
    Node *prmv_node = linklist->next;

    // 3.删除节点
    linklist->next = prmv_node->next;
    free(prmv_node);
    prmv_node = NULL;
    printf("删除成功\n");

    return;
}

