#include<iostream>
#include<vector>
using namespace std;
vector<int> isPrime(int no,vector<int>&ans)
{
    int count=0;
     
    for(int i=1;i<no;i++)
    {
        if(no%i==0)
        {
            count++;
        }
        if(count==2)
        {
            
            break;
        }
    }
    if(count==1)
    {
        ans.push_back(no);
    }

   return ans;
    
}
int main()
{
    int no=3;
   // int count=0;
    vector<int>ans;
    for(int i=1;i<=no;i++)
    {
        isPrime(i,ans);
    }

     cout<<"Printing the Vector"<<endl;
    for(auto i : ans)
    {
        cout<<i<<" ";
    }
    
    return 0;
}