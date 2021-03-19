#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 255 /*всяко парче е не по-дълго от 255 частици */

unsigned int N; /*брой прачета */

char **genom; /*масив от стрингове - парчетата */

void allocateMemory();

void freeMemory();

void inputData(FILE *fp);

int pieces();

void reverse(char *s);