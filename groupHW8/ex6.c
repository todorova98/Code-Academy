/*Задача 4. Напишете макрос с променлив брой параметри, който
извиква printf със префикс “TRACE: ”*/
#include <stdio.h>
#define MY_PRINT(...) printf("TRACE: "__VA_ARGS__)
int main(int argc, char* argv[])
{
    MY_PRINT("%s", argv[1]);
    return 0;
}
