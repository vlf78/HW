

#include <stdio.h>

typedef struct list{
    void *address;
    size_t size;
    char comment[64];
    struct list *next;
} list;

void *findMaxBlock(list *head)
{
    if(head == NULL)
        return NULL;
    size_t max_size = head->size;
    void *max_address = head;
    list *tmp = head;
    while(tmp->next)
    {
        tmp = tmp->next;
        if(tmp->size > max_size)
        {
            max_size = tmp->size;
            max_address = tmp->address;
        }
    }
    return max_address;
}

int main(int argc, char **argv)
{

    return 0;
}

