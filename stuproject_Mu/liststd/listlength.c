#include <stdio.h>
#include "../header/headerlist.h"

// 10.获取链表长度（不含头节点）
int length_linklist(Linklist linklist)
{
    int count = 0;
    while (NULL != linklist->next)
    {
        count++;
        linklist = linklist->next;
    }
 
    return count;
}
