#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    vector<int> arr{1,2,3,4,5,6,7,8,9};
    int n=arr.size();
    int p_max[n];
    int r_max[n];
    int p=1,q=2,r=3;
    p_max[0]=p*arr[0];
    r_max[n-1]=r*arr[n-1];
    for(int i=1;i<n;i++)
    {
        p_max[i]=max(p_max[i-1],p*arr[i]);
    }

    for(int i=n-2;i>=0;i--)
    {
        r_max[i]=max(r_max[i+1],r*arr[i]);
    }

    // finding  max value of whole expression
    int ans=0;
    for(int i=1;i<n-1;i++)
    {
        int temp=p_max[i-1]+q*arr[i]+r_max[i+1];
        ans=max(ans,temp);
    }
    cout<<ans;
    return 0;
}