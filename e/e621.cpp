#include <iostream>

using namespace std;
int main()
{
    int n,c=0,a[7][3];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    }
    for(int i=0;i<n;i++){
        for(int b=a[i][0]+1;b<a[i][1];b++){
            if(b%a[i][2]!=0){
                cout<<b<<" ";c=c+1;
            }
        }if(c==0){
            cout<<"No free praking spaces."<<endl;
        }else{
            cout<<endl;
        }
    }
        

    return 0;
}
