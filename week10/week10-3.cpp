///課本第5章 函式/函數 function
/// Page 5-5 5-6
#include <stdio.h>
void myPrint(int a){
    for(int i=0;i<a;i++)printf("星");
    printf("\n");
}

int main()
{///主要的函式
    myPrint(5);
    myPrint(4);
    myPrint(3);
    myPrint(2);
    myPrint(1);
}
