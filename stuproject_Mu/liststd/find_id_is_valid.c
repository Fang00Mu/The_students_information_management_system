#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../header/headerlist.h"

Node* find_node_by_id(Linklist linklist, int id)
{
    Node* current = linklist->next;
    while (current != NULL) {
        if (current->data.id == id) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}