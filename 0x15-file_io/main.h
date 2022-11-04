#ifndef MAIN_H
#define MAIN_H
#define SIZE 1024
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
#endif
