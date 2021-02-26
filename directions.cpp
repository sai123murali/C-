/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    int n;
    cin>>n;
    int x=0,y=0;
    char ch='R';
    int dist=10;
    
    while(n){
        
    switch(ch)
    {
        case 'R':
        x=x+10;
        ch='U';
        dist=dist+10;
        break;
        
        case 'U':
        y=y+dist;
        ch='L';
        dist=dist+10;
        break;
        
        case 'L':
        x=x-dist;
        ch='D';
        dist=dist+10;
        break;
        
        case 'D':
        y=y-dist;
        ch='A';
        dist=dist+10;
        break;
        
        case 'A':
        x=x+dist;
        ch='R';
        dist=dist+10;
        break;
        
    }
    n--;
    
        
    }
    
    cout<<x<<" " <<y<<endl;
    
    
}
