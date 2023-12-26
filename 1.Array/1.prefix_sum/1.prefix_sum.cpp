#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int prefix_s[size];
    prefix_s[0]=arr[0];
    for(int i=1;i<size;i++)
    {
        prefix_s[i]=prefix_s[i-1]+arr[i];
    }
    cout<<"prefix Array is \n";
    for(auto it : prefix_s)
    {
        cout<<it<<" ";
    }
    return 0;
}