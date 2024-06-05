#include <stdio.h>
#include <string.h>
int main()
{
	char s[100];
	scanf("%s",&s);
	int N = strlen(s);
	for(int i=0;i<N;i++)
	{
		printf("%c",s[i]);
		if((N-1-i)%3==0 && i!=N-1)printf(",");
	}
}
