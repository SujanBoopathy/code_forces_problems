#include<iostream>
using namespace std;

int main(){
    int size,height,res=0;
    cin>>size>>height;

    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }

    for(int i=0;i<size;i++){
        if(a[i]<=height){
            res++;
        }
        else{
            res+=2;
        }
    }
    cout<<res<<endl;
    return 0;
}
