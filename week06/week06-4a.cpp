int maxFrequencyElements(int* nums, int numsSize) {
    int a[101] = {};//参璸计瞷Ω计,秨﹍琌0(–皚柑,常穦干0 )
    int best = 0;//程Ω计琌bestΩ
    for(int i=0; i<numsSize; i++){
        int now = nums[i];//瞷璶参璸计琌 now
        a[now]++;//瞷计now 参璸瞷Ω计 a[now]++;糤1Ω
        if(a[now]>best) best = a[now];
    }
    int ans = 0;
    for(int i=1; i<=100; i++){
        if(a[i]==best) ans+=a[i];//琌程氮,ê++
    }
    return ans;
}
