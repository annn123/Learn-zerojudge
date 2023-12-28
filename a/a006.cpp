#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c;
    d=b^2-(4*a*c);
    if(d<0){
        cout<<"No real root";
    }else if(d==0){
        cout<<"Two same roots x="<<-b/(2*a);
    }else{
        cout<<"Two different roots x1="<<(-b+sqrt(d))/2*a<<"x2="<<(-b-sqrt(d))/(2*a);
    }
    return 0;
}
