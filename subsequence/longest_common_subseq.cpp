#include <bits/stdc++.h> 
using namespace std; 
int lcs(string x, string y, int m, int n)
{
    if(m==0||n==0)
    return 0;
    
    else if(x[m-1]==y[n-1])
    return 1+lcs(x,y,m-1,n-1);
    
    else
    {
        return max(lcs(x,y,m-1,n),lcs(x,y,m,n-1));
    }
    
}

int main()
{
    string x,y;
    getline(cin,x);
    getline(cin,y);
    int m=x.length();
    int n=y.length();
    cout<<"length of longest common sub seq :"<<lcs(x,y,m,n)<<endl;
}
