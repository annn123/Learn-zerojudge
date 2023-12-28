#include <iostream>

using namespace std;

int main()
{
    int M,D,S;
    cin>>M>>D;
    S=(M*2+D)%3;
    if (S==2){
        cout<<"大吉";
    }else if(S==1){
        cout<<"吉";
    }else{
        cout<<"普通";
    }
        
    return 0;
}