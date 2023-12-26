#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int arr[]={0,1,0,2,1,3,0,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    int p_max[n];
    p_max[0]=arr[0];

    for(int i=1;i<n;i++)
    {
        p_max[i]=max(p_max[i-1],arr[i]);
    }

    int r_max[n];
    r_max[n-1]=arr[n-1];

    for(int i=n-2;i>=0;i--)
    {
        r_max[i]=max(r_max[i+1],arr[i]);
    }

    int ans=0;

    for(int i=1;i<n-1;i++)
    {
        // if(arr[i]<=r_max[i+1] and arr[i]<=p_max[i-1])
        // {
        // int temp=min(p_max[i-1],r_max[i+1]);
        // ans=ans+temp-arr[i];
        // }

        int deciding_h=min(p_max[i-1],r_max[i+1]);
        if(deciding_h>arr[i])
        {
            ans=ans+(deciding_h-arr[i]);
        }
    }
    cout<<ans;
}