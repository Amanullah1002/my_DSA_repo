//Sum of all sub array

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr{1,2,3};
    int n=arr.size();
    int sum =0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+arr[j];
            cout<<sum<<" ";
            ans+=sum;
        }
    }
    cout<<"Sum : "<<ans;
    return 0;
}