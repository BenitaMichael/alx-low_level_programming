#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to POSIX stdout
 * @filename: A pointer to the file
 * @letters: The number of letters the function read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return (0)
 * if filename is NULL return (0)
 * if write fails or does not write the expected amount of bytes (0)
 *
