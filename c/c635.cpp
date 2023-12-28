#include <iostream>
using namespace std;
int main()
{
    int n,b,a[100];
    while(cin>>n){
        b=n;
        for(int c=0;c<n;c++){
            cin>>a[c];
        }
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(a[j]<a[j+1]) swap(a[j],a[j+1]);
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]==a[i+i]){
            b=b-1;    
            }
            cout<<a[i]<<" ";
        }
    
    }
}
