long long maxSubarraySum(int arr[], int n)
{
	long long maxi=INT_MIN;
    long long max_t=0;
    
    for(int i=0;i<n;i++)
    {
        max_t=max_t+arr[i];
        
        if(max_t>maxi)
            maxi=max_t;
        if(max_t<0)
            max_t=0;
    }
    
    return maxi;
}
