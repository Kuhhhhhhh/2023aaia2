int maxFrequencyElements(int* nums, int numsSize) {
    int a[101] = {};//�έp�Ʀr�X�{������,�@�}�l�O0(�C�Ӱ}�C��l��,���|��0 )
    int best = 0;//�X�̦h���ƪ��Obest��
    for(int i=0; i<numsSize; i++){
        int now = nums[i];//�{�b�n�έp���Ʀr�O now
        a[now]++;//�{�b���Ʀrnow �έp�X�{������ a[now]++;�W�[1��
        if(a[now]>best) best = a[now];
    }
    int ans = 0;//���ץX�{�X��
    for(int i=0; i<numsSize; i++){//�v�@�B�znums[i]
        int now = nums[i];
        if(a[now]==best) ans++;//�p�G���X�{�����ƬObest ,�N�h1��
    }
    return ans;
}
