#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int worst=a[0],best=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>best){
            best=a[i];
            count++;
        }
        if(a[i]<worst){
            worst=a[i];
            count++;
        }
    }


    cout<<count<<endl;
    return 0;
}
