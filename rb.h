#ifndef RB_H_
# define RB_H_

#include <stdlib.h>

void		my_putchar(char c);
void		my_putstr(char *str);
int		my_strlen(char *str);
void		rb_print_err(char *str);
void		rb_xerror(char *str);
void		my_swap(int *a, int *b);
void		rb_putstr(char *str);
int		rb_strlen(char *str);
int		count_words(char *str);
int		separator(char c);
char		*rb_strlowcase(char *str);
char		*rb_strupcase(char *str);
int		rb_strisinformat(char *str, char *format);
int		my_char_is_in(char c, char *format);
int		rb_strcmp(char *str1, char *str2);
int		rb_strncmp(char *str1, char *str2, int n);
int		rb_memcmp(void *str1, void *str2, size_t n);
int		rb_string_to_int(char *str);
int		char_to_int(char c);
char		*rb_strstr(char *str, char *to_find);
void		*rb_malloc(size_t s);
void		rb_free(void *ptr);
char		*rb_strcpy(char *dest, char *scr);
char		*rb_realloc_str(char *str, size_t s);
void		rb_strset(char *ptr, int c, size_t n);
char		*rb_strcat(char *dest, char *src);
char		*rb_strdup(char *str);
int		rb_find_char(char *str, char toCmp);
int		rb_find_char_with_offset(char *str, char toCmp, int offset);
char		*rb_substr(char *str, int start, int nbChar);
int		count_digit(int d);
char		*rb_negative_to_string(int nbr);
char		*rb_int_to_string(int nbr);
int		rb_strarraylen(char **array);
void		rb_aff_params(int array_len, char **array);
int		rb_revparams(char **array);
int		rb_sort_params(char **array);
void		rb_show_word_tab(char **array);
int		count_words_delim(char *str, char delim);
int		separator_delim(char c, char delim);
char		**rb_str_to_wordtab(char *array, char delim);
int		words_len(char *array, char delim);
char		read_next_char(int fd);
char		*get_line(int fd);
char		*my_rea_cat(char *str, char buff);
void		my_cat(int fd);
char		*rb_get_var_from_env(char **env, char *varname);
int		find_my_var_env(char **env, char *varname);
char		**rb_get_system_paths(char **env);

#endif /* !RB_H_ */
