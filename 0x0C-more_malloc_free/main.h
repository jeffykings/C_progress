#ifndef MAIN_H
#define MAIN_H
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int _lenstrn(char *str);
char *con4_n_Less(char *s1, int len1, int len2);
char *con4_n_great(char *s1, int len1, int len2);
void *_calloc(unsigned int nmemb, unsigned int size);
void _0intalza(void *ptr, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void *copystrn(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
