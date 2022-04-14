#include<iostream>
using namespace std;
int main(){
    int p,c,count=0,i=0,h=1;
    bool b=true;
    cin>>p>>c; 
    while(b){
        i++;
        h=p*i;
        if(h%10==0 || h%10==c){
            b=false;
        }
    }
    cout<<i<<endl;
    return 0;
}