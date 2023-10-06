#ifndef FILE_H
#define FILE_H

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>


ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _strlen(char *str);
void close_error_msg(int fd);
void err_sys_call(ssize_t bytes, char *argv, char *buffer);

#endif
