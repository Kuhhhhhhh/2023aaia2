//2000. Reverse Prefix of Word
//�n��word��,ch�r��(�]�t)���e����,�ϹL��
//����O�����ch�bword�̬O�ĴX�Ӧ�m
char* reversePrefix(char* word, char ch) {//�r�ꪺfor�j��
    for(int i=0;word[i]!=0;i++){//���ch�Ҧb����m
        if(word[i]==ch){
            for(int k=0;k<=i/2;k++){//�u�n�j�鰵�@�b�Y�i��������
                int temp = word[k];//��e���ϹL
                word[k] = word[i-k];
                word[i-k] = temp;

            }
            break;//����,�N���}�j��
        }

    }
    return word;
}
