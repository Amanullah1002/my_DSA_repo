//Freuency of x in very subarray of size k;
//O(n)
#include<iostream>
using namespace std;

int main()
{
    int arr[]={2,2,1,2,4,6,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    int k=4;
    int x=2;
    int cnt=0;
    for(int i=0;i<k;i++)
    {
        if(arr[i]==x)
        {
            cnt++;
        }
    }
    cout<<cnt<<" ";
    for(int i=k;i<n;i++)
    {
        if(arr[i]==x)
        {
            cnt++;
        }
        if(arr[i-k]==x)
        {
            cnt--;
        }
        cout<<cnt<<" ";
    }

    return 0;
}