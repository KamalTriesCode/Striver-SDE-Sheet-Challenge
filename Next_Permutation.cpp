vector<int> nextPermutation(vector<int> &permutation, int n)
{
    vector<int> per;
    per=permutation;
    per.resize(n);
    int idx=-1;
    
    for(int i=n-1;i>0;i--)
    {
        if(per[i]>per[i-1])
        {
            idx=i;
            break;
        }
    }
    
    if(idx==-1)
    {
        reverse(per.begin(),per.end());
    }
    
    else
    {
        int prev=idx;
        for(int i=idx+1;i<n;i++)
        {
            if(per[i]>per[idx-1] and per[i]<per[prev])
            {
                prev=i;
            }
        }
        
        swap(per[idx-1],per[prev]);
        
        reverse(per.begin()+idx,per.end());
    }
    return per;
}
