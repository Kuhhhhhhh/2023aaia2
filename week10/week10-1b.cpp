//LeetCode 1137.N-th Tribonacci Number
//0 1 1 2 7 13 24...�аݲ�n�������׬O�h��?
//C++�n�p�� class Solution{ �Mpublic: ����ʨ�
class Solution {
public:
    int tribonacci(int n) {
        int a[40] = {0,1,1};//�e3�ѥ��ǳƦn�A�᭱37���S�g�A�N���O0
        for(int i=3;i<=n;i++){
            a[i] = a[i-1] + a[i-2] + a[i-3];//�e3���ۥ[ �o��s����
    }
    return a[n];//���׭n��X��n��
    }
};
