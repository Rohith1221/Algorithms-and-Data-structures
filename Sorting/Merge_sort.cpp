#include<iostream>
using namespace std;
void merge(int arr[],int l,int r)
{
    int m=(r+l)/2;
    int i=l,k=l;
    int j=m+1;              //   T(n)=O(nlog(n))
    int temp[1000];         //   T(n)={  2[T(n/2)]+n    divide and conquer
    while(i<=m&&j<=r)       //            1          }
    {
        if(arr[i]<arr[j])
        temp[k++]=arr[i++];
        else
        {
            temp[k++]=arr[j++];
        }
        
    }
    while(i<=m)
    temp[k++]=arr[i++];
    while(j<=r)
    {
        temp[k++]=arr[j++];
    }
    for(i=l;i<=r;i++)
    arr[i]=temp[i];
}
void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m = (r+l)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,r);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
