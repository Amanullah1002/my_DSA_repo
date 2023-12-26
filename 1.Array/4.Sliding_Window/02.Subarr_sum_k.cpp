//Print maximum sub of subarray of size k 
//O(n2)
#include<iostream>
using namespace std;

int main()
{
    int arr[]={1, 4, 2, 10, 23, 3, 1, 0, 20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;

    int sum =0;
    for(int i=0;i<k;i++)
    {
        sum+=arr[i];
    }
    cout<<sum<<" ";
    for(int i=k;i<n;i++)
    {
        sum=sum+arr[i];
        sum-=arr[i-k];
        cout<<sum<<" ";
    }
    return 0;
}