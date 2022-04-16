#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num,count=0,k=0;
        cin>>num;
        int a[10000];
        for(int j=1;num%10!=0;j=j*10){
            a[k]=num%10*j;
            if(num%10==0)
                break;
            num/=10;
            k++;
        }
        a[k]=num;
        cout<<k+1<<endl;
        for(int in=0;in<=k;in++){
            cout<<a[in]<<" ";
        }
        cout<<"\n\n----------------"<<endl;
    }
    return 0;
}