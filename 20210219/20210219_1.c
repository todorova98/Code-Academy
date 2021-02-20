#include <stdio.h>
#include <string.h>
struct tagPaper
{
    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAuthor[64];
    char m_szSubject[256];
};
int main()
{
    struct tagPaper stPaper;
    stPaper.m_nBookId = 123456;
    strcpy(stPaper.m_szTitle, "Paper title");
    strcpy(stPaper.m_szAuthor, "Autor");
    strcpy(stPaper.m_szSubject, "paper subject");
    printf("Paper id : %d\n", stPaper.m_nBookId);
    printf("Paper title : %s\n", stPaper.m_szTitle);
    printf("Paper author : %s\n", stPaper.m_szAuthor);
    printf("Paper subject : %s\n", stPaper.m_szSubject);
    struct tagPaper book2;
    book2.m_nBookId = 101010;
    strcpy(book2.m_szTitle,"title 2");
    strcpy(book2.m_szAuthor,"author2");
    strcpy(book2.m_szSubject,"book2's subject");
    printf("Paper id : %d\n", book2.m_nBookId);
    printf("Paper title : %s\n", book2.m_szTitle);
    printf("Paper author : %s\n", book2.m_szAuthor);
    printf("Paper subject : %s\n", book2.m_szSubject);
    struct tagPaper book3={1234,"Title 3", "Author 3", "Subject 3"};
    printf("Paper id : %d\n", book3.m_nBookId);
    printf("Paper title : %s\n", book3.m_szTitle);
    printf("Paper author : %s\n", book3.m_szAuthor);
    printf("Paper subject : %s\n", book3.m_szSubject);
    struct tagPaper book4={.m_szAuthor="author4",.m_szSubject="Subject4",.m_nBookId=444,.m_szTitle="title4"};
    
    return 0;
}
