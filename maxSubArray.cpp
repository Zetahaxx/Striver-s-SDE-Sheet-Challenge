#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long maxm=0,csm=0;
    if(n==0)
        return 0;
    else
    {
        for(int i=0;i<=n-1;++i)
    {
        csm+=arr[i];
            maxm=max(csm,maxm);
            if(csm<0)
                csm=0;
    }
    }
    return maxm;
}
