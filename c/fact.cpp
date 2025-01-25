#include<iostream>
using namespace std;
int main()
{
    int no=6;
    int fact=1;
    for (int i=no;i>=1;i--)
    {
        fact=i*fact;
    }
    cout<<fact<<endl;
    return 0;
}