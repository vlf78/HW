

#include <stdio.h>

typedef struct list{
    void *address;
    size_t size;
    char comment[64];
    struct list *next;
} list;

size_t totalMemoryUsage(list *head)
{
    if(head == NULL)
        return 0;
    size_t total_size = head->size;
    list *tmp = head;
    while(tmp->next)
    {
        tmp = tmp->next;
        total_size += tmp->size;
    }
    return total_size;
}

int main(int argc, char **argv)
{

    return 0;
}

