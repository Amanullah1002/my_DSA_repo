//Print maximum sub of subarray of size k 
//O(n2)
#include<iostream>
using namespace std;

int main()
{
    int arr[]={1, 4, 2, 10, 23, 3, 1, 0, 20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int ans=0;
    for(int i=0;i<n-k;i++)
    {   
        int sum =0;
        for(int j=i;j<i+k;j++)
        {
            sum=sum+arr[j];
        }
        ans=max(ans,sum);
    }
    cout<<ans;
    return 0;
}