///week10-4.cpp 要看變數範圍 variable scope
#include <stdio.h>
int z = 100;///外面的global variable
void myFunc(){///我的函式
    int x = 20;///裡面的local variable 區域變數
    printf("myFunc()裡的x:%d z: %d\n",x,z);
    printf("在離開時,順手把x和z都設成0\n");
    x = 0;
    z = 0;
}

int main()///主函式
{
    int x = 10;///裡面的local variable 區域變數
    printf("main()裡的x:%d z: %d\n",x,z);
    myFunc();
    printf("main()裡的x:%d z: %d\n",x,z);
}
