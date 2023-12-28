#include <iostream>

using namespace std;

int main()
{
    int n,cp,money,a[50][2];
    cin>>n>>money;
    money=money/1000;
    for(int i=0;i<=n;i++){
        cin<<a[i][0]<<a[i][1];
        if(a[i][1]<30){
            a[i][0]=a[i][0]+money*10;
        }else if(a[i][1]<40)
    }

    return 0;
}
