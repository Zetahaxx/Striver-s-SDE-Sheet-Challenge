#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>>line;
    for(int i=0;i<=n-1;++i)
    {
        vector<long long int>v;
        for(int j=0;j<1;++j)
        long long int temp=pow(11,i);
        
        
        line[i].resize(i+1);
        
        line[i].push_back(temp);
    }
    return line;
}
