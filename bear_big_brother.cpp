#include<iostream>
using namespace std;

int main(){
    int m,n;
    int count=0;
    cin>>m>>n;

    while(true){
        if(m>n)
            break;
        m=m*3;
        n=n*2;
        count++;
    }
    cout<<count<<endl;
    return 0;
}