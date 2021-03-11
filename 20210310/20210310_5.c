/*Задача 5.
Напишете функция, принтираща сигналите, които й се подават.
Обработка на сигнали signal.h (примерът работи само със сигналите на линукс)*/
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
void handleSignal(int iSignal)
{
    printf("\nHandle signal %d\n", iSignal);
}
int main()
{
    signal(SIGABRT, handleSignal); /*Abnormal termination*/
    signal(SIGFPE, handleSignal); /*Floating-point error*/
    signal(SIGILL, handleSignal); /*Illegal instruction*/
    signal(SIGINT, handleSignal); /*CTRL+C signal*/
    signal(SIGSEGV, handleSignal); /*Illegal storage access*/
    signal(SIGTERM, handleSignal); /*Termination request*/
    for (;;)
    {
        sleep(1);
    }
    return 0;
}