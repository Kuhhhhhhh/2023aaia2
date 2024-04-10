#include <stdio.h>
int main ( void )
{
	int h,day=0;
	printf("請輸入蝸牛欲爬行的高度：");
	//your code ///蝸牛抬頭看,還要爬h公尺
	scanf("%d", &h);
	while(h>0){///如果還沒有爬完,還有剩
        day++;///又過了一天
		h -= 5;///往上爬5,也就是剩下h-=5變小
		if(h<0) break;///break;超過頂點
		h += 2;///沒有離開迴圈就往下下滑2公尺,距離又拉長了
	}
    printf("%d天可爬到頂端",day);
}
