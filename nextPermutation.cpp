

#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n1)
{
    //  Write your code here.
    int i,j;//ind , swap
    //int n1=permutation.size();
    for(i=n1-2;i>=0;i--)
    {
        if(permutation[i]<permutation[i+1]) break;
    }
        if(i<0) reverse(permutation.begin(),permutation.end());
        else{
            for(j=n1-1;j>i;j--)
            {
            if(permutation[j]>permutation[i]) break;
            }
            swap(permutation[i],permutation[j]);
            reverse(permutation.begin()+i+1,permutation.end());
            }
        return permutation;  
}
   /* vector<int>s,res;
    for(int x:permutation)
    {
        s.push_back(x);
    }
    sort(s.begin(),s.end());
    do{
        next_permutation(s.begin(),s.end());
    }while(s<=permutation);
    return s;*/
