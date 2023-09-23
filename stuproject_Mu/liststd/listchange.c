#include <stdio.h>
#include "../header/headerlist.h"

// 5.修改节点（根据值任意位置修改节点）
Type* change_linklistbyevalue(Linklist linklist, const Type* value, t_PCOMPRULE pfunc)
{
    // 1.定位到要修改的节点位置的前一个节点
    while (NULL != linklist->next)
    {
        if (0 == pfunc(value, &(linklist->next->data)))
        {
            return &(linklist->next->data);
        }
        linklist = linklist->next;
    }

    // 2.没找到要修改的节点
    return NULL;
}