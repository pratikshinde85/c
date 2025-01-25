#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(vector<int>ans,int key)
{
    int s=0;
    int e=ans.size()-1;
    int mid=(s+e)/2;
    cout<<e<<endl;
    cout<<mid<<endl;
    while(s<=e)
    {
        if(ans[mid]==key)
        {
            return mid;
        }
        else if(ans[mid]>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return -1;
}
int main()
{
    vector<int>ans{10,20,30,40,50,60,70,80};
    int a=BinarySearch(ans,30);
    cout<<a<<endl;
    return 0;
}