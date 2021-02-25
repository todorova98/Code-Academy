/*Задача 5. Напишете макрос с един параметър, който печата
съобщение, само при дефиниран макрос DEBUG. Ако DEBUG не е
дефиниран, не печата нищо.*/
#include <stdio.h>
#ifdef DEBUG
#define Print(s) printf("%s", s)
#else
#define Print(s)
#endif
int main(){
    Print("DEBUG is defined");
    return 0;
}
/*gcc -D DEBUG 20210224_5.c
 .\a.exe
 DEBUG is defined се принтира

gcc 20210224_5.c
.\a.exe
нищо не се принтира
*/ 