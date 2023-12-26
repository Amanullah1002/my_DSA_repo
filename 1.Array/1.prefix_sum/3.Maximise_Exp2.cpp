#include<iostream>
// same uestion but using only one variable


#include<vector>
#include<math.h>

using namespace std;

int main()
{
    vector<int> arr{1,2,3,4,5,6,7,8,9};
    int p=1,q=2,r=3;
    int n=arr.size();
    int p_max=p*arr[0];
    int r_max[n];
    r_max[n-1]=r*arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        r_max[i]=max(r_max[i+1],r*arr[i]);
    }

    // finding  max value of whole expression
    int ans=0;
    for(int i=1;i<n-1;i++)
    {
        p_max=max(p_max,p*arr[i-1]);
        int temp=p_max+q*arr[i]+r_max[i+1];
        ans=max(ans,temp);
    }
    cout<<ans;
    return 0;
}