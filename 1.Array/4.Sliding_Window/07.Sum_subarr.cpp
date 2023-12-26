//Sum of all sub array 
//O(n)
//Reverse look up in 1 D arr

#include<iostream>
using namespace std;
#define MOD 1000000007
#define ll long long

int main()
{

    ll ans=0;
    int arr[]={1,2,3};

    int n= sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++)
    {
        ans=ans+((arr[i])%MOD*(i+1)%MOD*(n-i)%MOD)%MOD;
    }
    cout<<ans;
    return 0;
}