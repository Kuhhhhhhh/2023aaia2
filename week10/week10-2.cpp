///課本第5章 函式/函數 function
/// Page 5-4
#include <stdio.h>
int myAdd(int a, int b){
    return a + b;
}
int main()
{
    int ans = myAdd(2, 3);
    printf("ans: %d\n",ans);
}
