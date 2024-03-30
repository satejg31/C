/*
 *
 *      @ AUTHOR : SATEJ UPENDRA GANJI
 *      @ DATE : 25/03/2024
 *      @ PURPOSE : CLIENT SIDE IMPLEMENTATION OF THE STRING DATA TYPE IN C
 *
 */


#include <stdio.h>
#include <stdlib.h>

#include "my_string.h"

int main(void)
{	
	string_t *p_str1 = NULL;
	string_t *p_str2 = NULL;
	string_t *p_str3 = NULL;
	string_t *p_str4 = NULL;
	string_t *p_str5 = NULL;
	string_t *p_str6 = NULL;
	string_t *p_str7 = NULL;

	len_t string_len = 0;
	size_t index = 0;

	p_str1 = create_string("Hello Myself Satej Ganji");
	show_string(p_str1, "Showing str1 : ");
	print_delimiter_line();

	string_len = string_length(p_str1);
	printf("The Length of the String str1 = %ld\n", string_len);
	
	print_delimiter_line();
	p_str2 = create_empty_string();
	show_string(p_str2, "Showing str2 (Empty String) : ");
	print_delimiter_line();

	string_copy(p_str2, "Interpretation of String copy");
	show_string(p_str2, "Showing str2 after string_copy() : ");
	print_delimiter_line();
	
	p_str3 = create_empty_string();
	const char* string = "Hello World !!";
	string_ncopy(p_str3, string, 5);
	printf("Copying 5 characters from the string : %s\n", string);
	show_string(p_str3, "Showing str3 after string_ncopy() : ");
	
	print_delimiter_line();

	p_str4 = create_string("Hello1");
	p_str5 = create_string("_Hello2");
	show_string(p_str4, "Showing str4 :");
	show_string(p_str5, "Showing str5 :");

	string_concat(p_str4, p_str5);
	show_string(p_str4, "Showing str4 after concating it with str5 : ");	
	print_delimiter_line();

	string_nconcat(p_str4, p_str5, 3);
	show_string(p_str4, "Showing str4 after concating 3 characters from str5 : ");
	print_delimiter_line();
	
	p_str6 = create_string("Hello");
	p_str7 = create_string("Hello");
	show_string(p_str6, "Showing str6 : ");
	show_string(p_str7, "Showing str7 : ");
	string_compare(p_str6, p_str7);
	print_delimiter_line();
	
	string_replace(p_str6, "HEllo");
	string_replace(p_str7, "HEllooi");
	show_string(p_str6, "Showing str6 : ");
	show_string(p_str7, "Showing str7 : ");
	string_compare(p_str6, p_str7);
	print_delimiter_line();

	string_replace(p_str6, "Hello");
	string_replace(p_str7, "HEllo");
	show_string(p_str6, "Showing str6 : ");
	show_string(p_str7, "Showing str7 : ");
	string_compare(p_str6, p_str7);
	print_delimiter_line();

	string_replace(p_str6, "Hello");
	string_replace(p_str7, "World");
	show_string(p_str6, "Showing str6 : ");
	show_string(p_str7, "Showing str7 : ");
	string_ncompare(p_str6, p_str7, 2);
	print_delimiter_line();
	
	string_replace(p_str6, "Hello");
	string_replace(p_str7, "ABrld");
	show_string(p_str6, "Showing str6 : ");
	show_string(p_str7, "Showing str7 : ");
	string_ncompare(p_str6, p_str7, 2);
	print_delimiter_line();
	
	string_replace(p_str6, "Hello");
	string_replace(p_str7, "Help");
	show_string(p_str6, "Showing str6 : ");
	show_string(p_str7, "Showing str7 : ");
	string_ncompare(p_str6, p_str7, 2);
	print_delimiter_line();	

	show_string(p_str1, "Checking for the presence of character 'M' in the string : ");
	index = string_chr(p_str1, 'M');
	if(index == -1)
		printf("Character not found in the given string!\n");
	else
		printf("Character found at index %ld\n", index);
	print_delimiter_line();
	
	index = 0;
	show_string(p_str1, "Checking for the presence of character 'Z' in the string : ");
	index = string_chr(p_str1, 'Z');
        if(index == -1)
                printf("Character not found in the given string!\n");
        else
                printf("Character found at index %ld\n", index);
	print_delimiter_line();

	index = 0;	
	show_string(p_str1, "Checking for the presence of character 'e' in the string : ");
	index = string_lastchr(p_str1, 'e');
        if(index == -1)
                printf("Character not found in the given string!\n");
        else
                printf("Character last found at index %ld\n", index);
	print_delimiter_line();
	
	index = 0;	
	show_string(p_str1, "Checking for the presence of character 'q' in the string : ");
	index = string_lastchr(p_str1, 'q');
        if(index == -1)
                printf("Character not found in the given string!\n");
        else
                printf("Character last found at index %ld\n", index);
	print_delimiter_line();


	destroy_string(&p_str3);
	destroy_string(&p_str2);
	destroy_string(&p_str1);
	exit(EXIT_SUCCESS);
}

