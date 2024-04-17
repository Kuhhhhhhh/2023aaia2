#include <stdio.h>
int main()
{
    char line[80];
    printf("請再輸入一行英文,有空格沒關係:\n");
    gets(line);///課本6-16頁
    printf("行字是:%s\n",line);

    printf("請再輸入一行英文:\n");
    scanf("%s",line);///課本6-16頁,空格斷開
     printf("進行字是:%s\n",line);
}
