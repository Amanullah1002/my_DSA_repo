//O(nk)
#include<iostream>
using namespace std;


void show(int arr[], int n)
{
 cout<<"Rotated array : \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

//O(n)+ space O(n)
void method2(int arr[].int n , int k)
{
    int temp[n];

    for(int i=0;i<n;i++)
    {

        
    }


}

//O(nk)
void method1(int arr[] , int n , int k )
{
    for(int j=0;j<k;j++)
        {
            int t=arr[n-1];

            for(int i=n-1;i>0;i--)
            {
                arr[i]=arr[i-1];
            }
            arr[0]=t;
        }
        show(arr,n);
    }
int main()
{
    int arr[]={5,0,1,4,2};
    int k=14;

    int n=sizeof(arr)/sizeof(arr[0]);
    k=k%n;

    method1(arr,n,k);
   
    return 0;
}