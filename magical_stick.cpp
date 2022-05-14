#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        cout<<num/2+num%2<<endl;
    }
    return 0;
}