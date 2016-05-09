#include <stdlib.h>
#include <stdio.h>
#include "rb.h"

int		words_len(char *array, char delim)
{
  static int	i = 0;
  int		len;

  len = 0;
  while (array[i] != '\0')
    {
      if (array[i] == delim)
	return (len);
      i = i + 1;
      len = len + 1;
    }
  return (len);
}

char		**rb_str_to_wordtab(char *array, char delim)
{
  int		word;
  char		**tab;
  int		col;
  int		lin;
  int		i;

  word = count_words_delim(array, delim);
  tab = rb_malloc(sizeof(char *) * (word + 1));
  col = 0;
  lin = 0;
  i = 0;
  while (lin < word)
    {
      tab[lin] = rb_malloc(sizeof(char) * (words_len(array, delim) + 1));
      while (array[i] != delim && array[i] != '\0')
	tab[lin][col++] = array[i++];
      while (array[i] == delim)
	i = i + 1;
      tab[lin][col] = '\0';
      lin = lin + 1;
      col = 0;
    }
  tab[lin] = NULL;
  return (tab);
}
