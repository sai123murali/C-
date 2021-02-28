/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

bool isprime(int n)
{
    if(n<=1)
    return false;
    
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
  }  
  
 void primeno(int n)
 {
     for(int i=2;i<=n;i++)
     {
        if(isprime(i))
            cout<<i<<" ";
     }
 }
  
int main()

{
    int n;
    cin>>n;
    primeno(n);
    
}
