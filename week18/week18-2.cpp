//week18-2.cpp C++
//#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> a(10);
	for(int i=0;i<10;i++){
		//scanf("%d",a[i])
		cin >> a[i];
	}
	sort(a.rbegin(),a.rend() );
	for(int i=0;i<10;i++){
		//printf("%d ",a[i]);
		cout << a[i] << ' ';
	}
}
