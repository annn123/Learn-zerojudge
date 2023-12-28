#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a[4];
        for(int j=0;j<4;j++){
            cin>>a[j];
        }
        if(a[3]-a[2]==a[2]-a[1]){
            a[4]=a[3]+a[3]-a[2];
        }else{
            a[4]=a[3]*a[3]/a[2];
        }
        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;
        
    }

    return 0;
}