#include "ft_list.h"
int ft_list_sixe(t_list *begin_list)
{
    if(begin_list == 0)
        return(0);
    else
        return(ft_list_size(1 + begin_list->next));
}

// Write a function that returns the number of elements in the linked list that's
// passed to it.

// It must be declared as follows:

// int	ft_list_size(t_list *begin_list);

// You must use the following structure, and turn it in as a file called
// ft_list.h:

// typedef struct    s_list
// {
//     struct s_list *next;
//     void          *data;
// }                 t_list;