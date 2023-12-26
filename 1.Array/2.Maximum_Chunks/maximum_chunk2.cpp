//O(n2) approach
#include<iostream>
using namespace std;

bool validChunk(int i,int j,int arr[])
{
    // int cnt=0;
    // for(int k=i;k<=j;k++)
    // {
    //     if(arr[k]>=i and arr[k]<=j)
    //     {
    //         continue;
    //     }
    //     else{
    //         return false;
    //     }
    // }
    // return true;
    
    int cnt=0;
    for(int k=i;k<=j;k++)
    {
        if(arr[k]>=i and arr[k]<=j)
        {
            cnt++;
        }
    }
    if(cnt==j-i+1)
    {
        return true;
    }
    else{
        return false;
    }
}


int main()
{
    int arr[]={1,2,0,4,3,5};

    int i=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    int cnt=0;
    int j;
    while(i<n)
    {
        for(j=i;j<n;j++)
        {
            if(validChunk(i,j,arr))
            {
                break;
            }

        }
        i=j+1;
        cnt++;
    }
    cout<<cnt;
    return 0;
}