#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct quote quotes;
struct quote
{
	char quote[100];
	char author[100];
	struct quote *next;
};

#endif /* MAIN_H */
