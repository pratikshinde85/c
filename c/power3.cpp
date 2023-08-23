#include <iostream> 
long  power(int , int); 
 
using namespace std; 

long  power(int a,int n) 
{ 
    if(n==0)
    {
    return 1;
    } 
    else if(n==1)
    { return a;} 
    else{ 
        long r=power(a,n/2); //(10,9/2)
        if(n%2==0)
        {
        return r*r;} 
        else
        {
        return r*r*a;
        } 
    } 
} 
int main() 
{ int p,e;
    cout<<"Enter the power:";
    cin>>p;
    cout<<"Enter the exponent:";
    cin>>e;
cout<<power(p,e); 
    return 0; 
} 
