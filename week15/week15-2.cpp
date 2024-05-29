///week15-2.cpp 了解字母對應的值
#include <stdio.h>
int main()
{
    if('A'==65) printf("真的耶! A就是65\n");
    printf("A的值是%d 數字65對應%c\n",'A',65);
    printf("B的值是%d 數字66對應%c\n",'B');
    printf("C的值是%d 數字67對應%c\n",'C');
    printf("Z的值是%d 數字90對應%c\n",'Z');
    printf("\n");
    printf("A的值是%d 數字65對應%c\n",'a',65);
    printf("B的值是%d 數字66對應%c\n",'b',98);
    printf("C的值是%d 數字67對應%c\n",'c',99);
    printf("Z的值是%d 數字90對應%c\n",'z',122);
}
