#include<iostream>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int worst=a[0],best=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>best){
            best=a[i];
            c++;
        }
        if(a[i]<worst){
            worst=a[i];
            c++;
        }
    }


    cout<<c<<endl;
    return 0;
}