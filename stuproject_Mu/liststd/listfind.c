#include <stdio.h>
#include "../header/headerlist.h"

// == (int float char 指针)
// 4.查找节点（根据值任意位置查找节点）
const Type* find_linklistbyevalue(Linklist linklist, const Type* value, t_PCOMPRULE pfunc)
{
    // 1.定位到要查找的节点位置的前一个节点
    while (NULL != linklist->next)
    {
        if (0 == pfunc(value, &(linklist->next->data)))
        {
            return &(linklist->next->data);
        }
        linklist = linklist->next;
    }
    // 2.没找到要查找的节点
    return NULL;
}
