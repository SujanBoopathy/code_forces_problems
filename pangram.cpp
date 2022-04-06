#include<iostream>
using namespace std;
int main(){
    int n,f=0;
    cin>>n;
    char a[n];
    int count[256]={0};
    cin>>a;
    if(n<26){
        cout<<"NO"<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            a[i]=tolower(a[i]);
            count[a[i]]++;
        }
        for(int i=(int)'a';i<=(int)'z';i++){
            if(count[i]==0){
                f=1;
            }
        }
        if(f==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}