#include<iostream>
using namespace std;
bool isPrime(int a){
    for(int i=2;i<a;i++){
        if(a%i==0)
            return false;
    }
    return true;
}
int main(){
    int n,a,b;
    cin>>n;
    a=2,b=n-2;
    while(isPrime(a) || isPrime(b)){
        a++;
        b--;
    }
    cout<<a<<" "<<b;
    return 0;
}