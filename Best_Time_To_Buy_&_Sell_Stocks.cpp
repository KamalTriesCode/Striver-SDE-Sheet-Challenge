#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n= prices.size();
    int r=prices[n-1];
    int p=0;
    
    for(int i=n-1;i>=0;i--)
    {
        r=max(r,prices[i]);
        p=max(p,r-prices[i]);
    }
    
    return p;
}
