#include <iostream>

using namespace std;

int main()
{
    int n,a[1000];
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        for(int b=0;b<n-1;b++){
                for(int j=0;j<n-1-b;j++){
                    if(a[j]>a[j+1]) swap(a[j],a[j+1]);
                }
            }
        for(int f=0;f<=n-1;f++){
            cout<<a[f]<<" ";
        }cout<<endl;
    }
   
}
