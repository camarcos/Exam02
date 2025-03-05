#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if(begin_list == NULL || *begin_list == NULL)
        return(0);
    t_list *aux = *begin_list;
    if(cmp(aux->data, data_ref) == 0)
    {
        *begin_list = aux->next;
        free(aux);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    else
        ft_list_remove_if(&aux->next, data_ref,cmp);
}

// Write a function called ft_list_remove_if that removes from the
// passed list any element the data of which is "equal" to the reference data.

// It will be declared as follows :

// void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

// cmp takes two void* and returns 0 when both parameters are equal.

// You have to use the ft_list.h file, which will contain:

// $>cat ft_list.h
// typedef struct      s_list
// {
//     struct s_list   *next;
//     void            *data;
// }                   t_list;
