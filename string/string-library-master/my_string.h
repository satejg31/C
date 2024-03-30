/*
 *
 * 	@ AUTHOR : SATEJ UPENDRA GANJI
 * 	@ DATE : 19/03/2024
 *	@ PURPOSE : HEADER FILE FOR THE STRING LIBRARY IMPLEMENTATION HEADER FILE
 *
 */

#ifndef _MY_STRING_H 
#define _MY_STRING_H

#define SUCCESS 	1
#define FAILURE 	0

typedef struct my_string string_t;
typedef int status_t;
typedef size_t len_t;

struct my_string
{
	char *string;
};

string_t *create_string(const char* init_string_value);
string_t *create_empty_string(void);
status_t string_copy(string_t *p_str, const char* string_value);
status_t string_ncopy(string_t *p_str, const char *string_value, size_t num_chars);
status_t string_concat(string_t *p_str1, string_t *p_str2);
status_t string_nconcat(string_t *p_str1, string_t *p_str2, size_t num_chars);
u_int8_t string_compare(string_t *p_str1, string_t *p_str2);
u_int8_t string_ncompare(string_t *p_str1, string_t *p_str2, size_t num_chars);
status_t string_replace(string_t *p_str1, const char *replace_string);
size_t string_chr(string_t *p_str, char character);
size_t string_lastchr(string_t *p_str, char character);

size_t string_length(string_t *p_str);
void print_delimiter_line(void);

void show_string(string_t *p_str, const char* msg);
status_t destroy_string(string_t **pp_str);

status_t __str_copy(char* destination_string, const char *source_string);
len_t __str_length(const char *string);
status_t __str_replace(char *destination_string, const char *source_string);
void *xmalloc(size_t size_in_bytes);

#endif 	/* _MY_STRING_H */

