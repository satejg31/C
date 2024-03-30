/*
 *
 *      @ AUTHOR : SATEJ UPENDRA GANJI
 *      @ DATE : 25/03/2024
 *      @ PURPOSE : SERVER SIDE IMPLEMENTATION OF THE STRING DATA TYPE IN C
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "my_string.h"

string_t *create_string(const char* init_string_value)
{	
	string_t *p_str = NULL;

	len_t size = __str_length(init_string_value);
	
	p_str = xmalloc(sizeof(string_t));
	p_str->string = xmalloc(size);
	
	string_copy(p_str, init_string_value);
	return p_str;
}

string_t *create_empty_string(void)
{
	string_t *p_str = NULL;
	p_str = xmalloc(sizeof(string_t));

	return (p_str);
}

status_t string_copy(string_t *p_str, const char* string_value)
{
	if(p_str->string == NULL)
	{
		p_str->string = xmalloc(__str_length(string_value));
	}
	return (__str_copy(p_str->string, string_value));
}

status_t string_ncopy(string_t *p_str, const char* string_value, size_t num_char)
{
	u_int8_t index = 0;
	if(p_str->string == NULL)
	{
		p_str->string = xmalloc(__str_length(string_value));
	}
	
	while(index != num_char)
	{
		*(p_str->string + index) = *(string_value + index);
		index++;
	}

	p_str->string[index] = '\0';
	return (SUCCESS);
}

status_t string_concat(string_t *p_str1, string_t *p_str2)
{	
	if(p_str1->string == NULL || p_str2->string == NULL)
	{
		fprintf(stderr, "ERROR : One of the Strings is NULL.");
		return (FAILURE);
	}

	u_int8_t index1 = 0, index2 = 0;
	len_t concat_length = string_length(p_str1) + string_length(p_str2);
	char *concat_string = (char *)xmalloc(concat_length);
	
	while(p_str1->string[index1] != '\0')
		concat_string[index2++] = p_str1->string[index1++];

	index1 = 0;
	while(p_str2->string[index1] != '\0')
		concat_string[index2++] = p_str2->string[index1++];

	concat_string[index2] = '\0';
	free(p_str1->string);
	p_str1->string = concat_string;

	return (SUCCESS);
}

status_t string_nconcat(string_t *p_str1, string_t *p_str2, size_t num_chars)
{
	if(num_chars > string_length(p_str2))
	{
		fprintf(stderr, "ERROR : Please give valid input for number of character to be concatted");
		return (FAILURE);
	}
	
	u_int8_t index1 = 0, index2 = 0;
        len_t concat_length = string_length(p_str1) + num_chars;
        char *concat_string = (char *)xmalloc(concat_length);
        
        while(p_str1->string[index1] != '\0')
                concat_string[index2++] = p_str1->string[index1++];
	
	index1 = 0;
	while(index1 < num_chars)
		concat_string[index2++] = p_str2->string[index1++];

	concat_string[index2] = '\0';
	free(p_str1->string);
	p_str1->string = concat_string;

	return (SUCCESS);
}

u_int8_t string_compare(string_t *p_str1, string_t *p_str2)
{
	u_int8_t index = 0;
	if(p_str1->string == NULL || p_str2->string == NULL)
	{
		fprintf(stderr, "ERROR : One of the string is NULL");
		return (FAILURE);
	}

	while(p_str1->string[index] != '\0' || p_str2->string[index] != '\0')
	{
		if(p_str1->string[index] != p_str2->string[index])
		{
			if(p_str1->string[index] > p_str2->string[index])
			{
				printf("Strings are not equal and String1 is greater than String2\n");
				return (p_str1->string[index] - p_str2->string[index]);
			}
			else 
			{
				printf("Strings are not equal and String2 is greater than String1\n");
				return (p_str2->string[index] - p_str1->string[index]);
			}
		}

		index++;
	}
	printf("Both of the strings are equal !!!\n");
	return (0);
}

u_int8_t string_ncompare(string_t *p_str1, string_t *p_str2, size_t num_chars)
{
        u_int8_t index = 0;
        if(p_str1->string == NULL || p_str2->string == NULL)
        {
                fprintf(stderr, "ERROR : One of the string is NULL");
                return (FAILURE);
        }

        while(index <= num_chars)
        {
                if(p_str1->string[index] != p_str2->string[index])
                {
                        if(p_str1->string[index] > p_str2->string[index])
                        {
                                printf("Strings are not equal upto %ld characters and String1 is greater than String2\n", num_chars);
                                return (p_str1->string[index] - p_str2->string[index]);
                        }
                        else
                        {
                                printf("Strings are not equal upto %ld characters and String2 is greater than String1\n", num_chars);
                                return (p_str2->string[index] - p_str1->string[index]);
                        }
                }

                index++;
        }
        printf("Both of the strings are equal upto %ld characters!!!\n", num_chars);
        return (0);
}

size_t string_chr(string_t *p_str, char character)
{	
	size_t index = 0;
	while(index <= __str_length(p_str->string))
	{
		if(p_str->string[index] == character)
			return (index);
		index++;
	}
	return (-1);
}

size_t string_lastchr(string_t *p_str, char character)
{
	size_t index = 0;
	size_t ret_val = 0;
	while(index <= __str_length(p_str->string))
	{
		if(p_str->string[index] == character)
			ret_val = index;
		index++;
	}

	if(ret_val > 0)
		return (ret_val);
	else
		return (-1);
}

status_t string_replace(string_t *p_str1, const char *replace_string)
{
	return (__str_replace(p_str1->string, replace_string));
}

len_t string_length(string_t *p_str)
{
        return (__str_length(p_str->string));
}

void print_delimiter_line(void)
{
        puts("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
}

/* SHOW THE STRING */
void show_string(string_t *p_str, const char* msg)
{
	if(msg)
	{
		puts(msg);
		if(p_str->string)
			puts(p_str->string);
		else
			puts("Empty String");
	}
}

status_t destroy_string(string_t **pp_str)
{
	free((*(pp_str))->string);
	(*(pp_str))->string = NULL;

	free(*(pp_str));
	*(pp_str) = NULL;
	
	return (SUCCESS);	
}

/* STRING AUXILLARY ROUTINES */
status_t __str_copy(char* destination_string, const char* source_string)
{
	int index = 0;
	while(*(source_string + index) != '\0')
	{
		*(destination_string + index) = *(source_string + index);
		index++;
	}

	*(destination_string + index) = '\0';
	return (SUCCESS);
}

size_t __str_length(const char *string)
{
	len_t size = 0;
	while(*(string + size) != '\0')
		size++;

	return (size);
}

status_t __str_replace(char *destination_string, const char* source_string)
{
	u_int8_t index = 0;
	size_t string_length = __str_length(source_string);
	free(destination_string);
	destination_string = (char *)xmalloc(string_length);

	while(source_string[index] != '\0')
	{
		destination_string[index] = source_string[index];
		index++;
	}
	destination_string[index] = '\0';

	return (SUCCESS);
}

void *xmalloc(size_t size_in_bytes)
{
	void *p = NULL;
	p = malloc(size_in_bytes);

	if(p == NULL)
	{
		fprintf(stderr, "ERROR IN ALLOCATION OF MEMORY");
		exit(EXIT_FAILURE);
	}

	return (p);
}

