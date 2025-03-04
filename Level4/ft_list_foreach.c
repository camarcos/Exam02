#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while(begin_list)
    {
        (*f)(begin_list->data);
        begin_list = begin_list->next;
    }
}
// Écrire une fonction qui prend une liste et un pointeur sur fonction en
// paramètres, et applique la fonction à chaque élément de la liste.

// Elle devra être prototypée de la façon suivante:

// void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

// La fonction pointée par f sera utilisée comme suit:

// (*f)(list_ptr->data);

// Vous devez utiliser la structure suivante, et la rendre dans un fichier
// ft_list.h:

// typedef struct    s_list
// {
//     struct s_list *next;
//     void          *data;
// }                 t_list;