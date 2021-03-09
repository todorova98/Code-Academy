/*Задача 19:
Напишете стандартната програма за Linux cat , която приема като
аргументи от командния ред имена на файлове и изкарва съдържанието
им на стандартния изход. Ако на програмата не са подадени никакви
аргументи, то тя да изкара съдържанието подадено от стандартния вход
на стандартния изход.*/
#include <stdio.h>
#include <unistd.h> /*for STDOUT_FILENO*/
#include <stdlib.h>
#include <fcntl.h> /*for open*/

int main(int argc, char *argv[])
{
    int fd, i, ch;
    for (i = 1; i < argc; i++){ /*iterate the loop for total argument count.*/
        fd = open(argv[1], O_RDONLY); /*open the file in READONLY mode*/
        if (fd < 0){
            perror("open");
            return -1;        
        }
        while (read(fd, &ch, 1)) /*Read one byte at a time*/
            write(STDOUT_FILENO, &ch, 1); /*Write the byte on Stdout*/
        close(fd); /*close the file discriptor*/
    }
    return 0;
}
/*gcc 20210308_19.c -o cat 
  .\cat.exe 20210308_19.c*/