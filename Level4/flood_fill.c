#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  typedef struct  s_point
  {
	int		x;
	int		y;
  }               t_point;

void fill(char **tab, t_point size, t_point matrix, char org, char to_fill)
{
    if(matrix.y < 0 || matrix.y >= size.y || matrix.x < 0 || matrix.x >= size.x
        || tab[matrix.y][matrix.x] != org || tab[matrix.y][matrix.x] == to_fill)
        return(0);
    tab[matrix.y][matrix.x] = to_fill;
    fill(tab, size, (t_point){matrix.x - 1, matrix.y}, org, to_fill);
    fill(tab, size, (t_point){matrix.x + 1, matrix.y}, org, to_fill);
	fill(tab, size, (t_point){matrix.x, matrix.y - 1}, org, to_fill);
	fill(tab, size, (t_point){matrix.x, matrix.y + 1}, org, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
    fill(tab, size, begin, tab[begin.y][begin.x], 'F');
}

// Write a function that takes a char ** as a 2-dimensional array of char, a
// t_point as the dimensions of this array and a t_point as the starting point.

// Starting from the given 'begin' t_point, this function fills an entire zone
// by replacing characters inside with the character 'F'. A zone is an group of
// the same character delimitated horizontally and vertically by other characters
// or the array boundry.

// The flood_fill function won't fill diagonally.

// The flood_fill function will be prototyped like this:
//   void  flood_fill(char **tab, t_point size, t_point begin);

