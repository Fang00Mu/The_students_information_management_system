#include <stdio.h>
#include <stdlib.h>
#include "../header/headerlist.h"
 
// 1.创建链表（创建只有头节点的空链表）
Node *create_linklist()
{
    // 1.创建头结点
    Node *pheader = (Node *)calloc(1, sizeof(Node));
    if (NULL == pheader)
    {
        printf("创建链表失败\n");
        return NULL;
    }
    // 2.头结点指针域指向NULL
    pheader->next = NULL;
    return pheader;
}
