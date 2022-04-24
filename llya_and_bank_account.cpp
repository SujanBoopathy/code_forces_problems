#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=0){
        cout<<n<<endl;
    }
    else{
        int n1=n/10;
        int rem=n%10;
        int n2=n1/10;
        n2=n2*10+rem;
        if(n1>n2){
            cout<<n1<<endl;
        }
        else{
            cout<<n2<<endl;
        }
    }
    return 0;
}