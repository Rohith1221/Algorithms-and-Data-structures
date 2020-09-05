#include<stdio.h>                //max and min in subtree of given node in infinite BST
#include<stdlib.h>
int main()
{
    int t;                   // t is number of test cases
    scanf("%d",&t);
    while(t-->0)
    {
        int n;
        scanf("%d",&n);      // n is node value
        int count=1;
        int p=n;
        while((p&1)==0)
        {
            count*=2;
            p>>=1;
        }
        printf("%d %d\n",(n-count+1),(n+count-1));
    }
    return 0;
}
