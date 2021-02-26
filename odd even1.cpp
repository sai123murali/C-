#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main(){
    
    int i=0,odd=0,even=0;
    long long num;
    
    cin>>num;
    
    while(num!=0)
    {
        if(i%2==0)
        {
            even=even+num%10;
            num=num/10;
            i++;
        }
        else{
            odd=odd+num%10;
            num=num/10;
            i++;
        }
    }
    
    cout<<abs(odd-even);
}
