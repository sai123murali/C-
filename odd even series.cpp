#include<iostream>
#include<math.h>

using namespace std;

    int three(int n)
    {
        int x;
        x=pow(3,n-1);
        cout<<x;
    }
    
    int two(int n)
    {
        int x;
        x=pow(2,n-1);
        cout<<x;
    }
int main(){
    
    int n;
    cin>>n;
    
    if(n%2==0)
    {
        three(n/2);
    }
    else{
        two(n/2+1);
    }
}
