//Find min number of swaps require to bring all elements<=k together
//O(n)
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int arr[]={2,1,5,6,3};
    int k=3;
    int n =sizeof(arr)/sizeof(arr[0]);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=k)
        {
            cnt++;
        }
    }

    int ans =INT_MAX;
    int swap_var=0;
    for(int i=0;i<cnt;i++)
    {   
        if(arr[i]>k)
        {
            swap_var++;
        }
    }
    ans=min(ans,swap_var);

    for(int i=cnt;i<n;i++)
    {
        if(arr[i]>k)
        {
            swap_var++;
        }
        if(arr[i-cnt]>k)
        {
            swap_var--;
        }
        ans=min(ans,swap_var);
    }
    cout<<ans;
    return 0; 
}