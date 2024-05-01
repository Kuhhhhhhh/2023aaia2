//2000. Reverse Prefix of Word
//要把word裡,ch字母(包含)之前的自,反過來
//關鍵是先找到ch在word裡是第幾個位置
char* reversePrefix(char* word, char ch) {//字串的for迴圈
    for(int i=0;word[i]!=0;i++){//找到ch所在的位置
        if(word[i]==ch){
            for(int k=0;k<=i/2;k++){//只要迴圈做一半即可全部反轉
                int temp = word[k];//把前面反過
                word[k] = word[i-k];
                word[i-k] = temp;

            }
            break;//做完,就離開迴圈
        }

    }
    return word;
}
