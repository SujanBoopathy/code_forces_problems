#include<iostream>
using namespace std;

int main(){
    int n,m,c=0;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    c=a[0]-1;
    for(int i=0;i<m-1;i++){
        if(a[i]>a[i+1]){
            c+=(n-a[i])+(a[i+1]-1)+1;
        }
        else{
            c+=a[i+1]-a[i];
        }
    }
    cout<<c<<endl;
    return 0;
}