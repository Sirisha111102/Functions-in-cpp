#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void change(int n,int arr[])
{
    arr[0]=10;
}
int main() {
    int n=5;
    int a[5]={1,2,3,4,5};
    change(n,a);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
	return 0;
}
