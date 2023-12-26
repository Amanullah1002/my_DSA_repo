//Rotate array right by 1 unit
#include<iostream>
using namespace std;


int main()
{
    int arr[]={5,0,1,4,2};
    int n =sizeof(arr)/sizeof(arr[0]);
    int temp=arr[n-1];

    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    return 0;
}
