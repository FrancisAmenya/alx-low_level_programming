#ifndef _MAIN_H_
#define _MAIN_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

int check_elf(unsigned char *e_ident);
void print_error(char *message);
void print_elf_header(void *header, int is_64);
void close_file(int fd);
int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
