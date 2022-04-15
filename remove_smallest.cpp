#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int size;
        cin>>size;
        int a[size];
        for(int j=0;j<size;j++){
            cin>>a[j];
        }
        sort(a,a+size);
        int index=0,f=0;
        for(int k=index+1;k<size;k++){
            if(a[k]-a[index]<=1){
                index=k;
            }
            else{
                f=1;
            }
        }
        if(f==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}