#2000. Reverse Prefix of Word
#�n��word��,ch�r��(�]�t)���e����,�ϹL��
#����O�����ch�bword�̬O�ĴX�Ӧ�m
class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        for i in range(len(word)):#���I1:��r��
            if word[i]==ch: #���r���F,�o�ɭ�i�ܭ��n
                #���I2:��word[0]...word[i]�r�ϹL��
                return word[i::-1] + word[i+1:]#python ���S��d��g�k
        #�Y�S����������,�N�O�䤣��C�N��Ӫ��r�^��
        return word
