#include <stdio.h>
int main ( void )
{
	int h,day=0;
	printf("�п�J���������檺���סG");
	//your code ///�������Y��,�٭n��h����
	scanf("%d", &h);
	while(h>0){///�p�G�٨S������,�٦���
        day++;///�S�L�F�@��
		h -= 5;///���W��5,�]�N�O�ѤUh-=5�ܤp
		if(h<0) break;///break;�W�L���I
		h += 2;///�S�����}�j��N���U�U��2����,�Z���S�Ԫ��F
	}
    printf("%d�ѥi���쳻��",day);
}
