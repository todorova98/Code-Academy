/*Задача 14. Използвайки предишното упражнение, опишете структурите и
прототипите на функциите в отделен заглавен файл с разширение *.h, a
телата на функциите в един или няколко *.c сорс файлове.*/
struct worker{
    int id;
    char name[10];
    char middleName[10];
    char lastName[10];
    char job[10];
    int years;
    double salary;
    struct worker *boss;
};
/*нямам функции*/