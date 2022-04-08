#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s%2==0){
            s=(s/2)-1;
        }
        else{
            s=s/2;
        }
        cout<<s<<endl;
    }
    return 0;
}