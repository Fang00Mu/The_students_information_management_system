#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../header/headerlist.h"

// 2.增加节点（a.往尾部添加）
void push_linklist(Linklist linklist, const Type* value)
{
    if(0 == linklist)
    {
        printf("错误的链表");
    }

     Node* existing_node = find_node_by_id(linklist, value->id);
    if (existing_node != NULL) {
        printf("学号已存在\n");
        return;
    }
    
    // 1.定位到链表尾结点
    while (NULL != linklist->next)
    {
        linklist = linklist->next;
    }

    // 2.创建一个新节点
    Node *pnew_node = (Node *)calloc(1, sizeof(Node));
    if (NULL == pnew_node)
    {
        printf("创建新节点失败\n");
        return;
    }
    pnew_node->data = *value; // 给新节点数据域赋值为data
    pnew_node->next = NULL;  // 给新节点指针域赋值为NULL
   
    //strcpy( pnew_node->data.total = data.chinese + math + english;)

    // 3.尾部插入新节点
    linklist->next = pnew_node;

    return;
}

// 2.增加节点（b.根据值任意位置插入节点）
// void insert_linklistbyvalue(Linklist linklist, const Type* value, const Type* newvalue)
// {
//     // 1.定位到要插入节点的前一个节点
//     while (NULL != linklist->next)
//     {
//         if (value == linklist->next->data)
//         {
//             break;
//         }
//         linklist = linklist->next;
//     }

//     // 遍历整个链表，没找到要插入的节点位置（包含空链表）
//     if (NULL == linklist->next)
//     {
//         printf("没找到要插入的位置：\n");
//         return;
//     }

//     // 2.创建一个新节点
//     Node *pnew_node = (Node *)calloc(1, sizeof(Node));
//     if (NULL == pnew_node)
//     {
//         printf("创建新节点失败\n");
//         return;
//     }
//     pnew_node->data = newvalue; // 给新节点数据域赋值为data
//     pnew_node->next = NULL;     // 给新节点指针域赋值为NULL

//     // 3.插入新节点
//     pnew_node->next = linklist->next;
//     linklist->next = pnew_node;

//     return;
// }
