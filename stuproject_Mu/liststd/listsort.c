#include <stdio.h>
#include "../header/headerlist.h"

// // 6.链表排序（交换数据域值的算法）
// void swapData(Node *a, Node *b)
// {
//     int temp = a->data;
//     a->data = b->data;
//     b->data = temp;
// }

// // 6.链表排序（a.交换链表中节点里面的数据域的值）
// void sort_Listbyvalue(Linklist linklist)
// {
//     if (linklist == NULL || linklist->next == NULL)
//     {
//         return;
//     }

//     int swapped;
//     Node *curr;
//     Node *last = NULL;

//     do
//     {
//         swapped = 0;
//         curr = linklist;
//         while (curr->next != last)
//         {
//             if (curr->data > curr->next->data)
//             {
//                 swapData(curr, curr->next);
//                 swapped = 1;
//             }
//             curr = curr->next;
//         }

//         last = curr;
//     } while (swapped);
// }

// 6.链表排序（b.交换节点）
void sort_listbynode(Linklist linklist, t_PCOMPRULE pfunc)
{
    Linklist sorted = linklist->next;
    linklist->next = NULL;
    while (sorted != NULL)
    {
        Node *curr = sorted;
        sorted = sorted->next;
        Node *prev = linklist;
        Node *temp = linklist->next;
        // 前一个节点的值大于后一个节点的值，才做交换（升序）
        // while (temp != NULL && (curr->data > temp->data))
        while (temp != NULL && (1 == pfunc(&(curr->data), &(temp->data))))
        {
            prev = temp;       // 交换指针指向
            temp = temp->next; // 交换指针指向
        }
        curr->next = temp; // 交换指针指向
        prev->next = curr; // 交换指针指向
    }
    return;
}
