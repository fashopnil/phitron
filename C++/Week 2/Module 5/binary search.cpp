#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    vector<int>arr={2,6,8,10,12,14,15,18,19,28,30};
    int low=0;
    int high=arr.size()-1;
    int target=20;
    int ans=-1;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (arr[mid]==target)
        {
            ans=mid;
            break;
        }
        if (target>arr[mid])
        {
            low=mid+1;
        }
        else if(target<arr[mid])
        {
            high=mid-1;
        } 
    }
    cout<<ans;
    return 0;
}