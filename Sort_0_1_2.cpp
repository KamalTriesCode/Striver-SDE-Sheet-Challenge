#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int c_0=0,c_1=0,c_2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            c_0++;
        if(arr[i]==1)
            c_1++;
        if(arr[i]==2)
            c_2++;
    }

    int k=0;
    
    for(int i=0;i<c_0;i++)
        arr[k++]=0;
    for(int i=0;i<c_1;i++)
        arr[k++]=1;
    for(int i=0;i<c_2;i++)
        arr[k++]=2;
    
}
