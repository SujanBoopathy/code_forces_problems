#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int total,a,b;
        cin>>total;
        a=total/3;
        b=total/3;
        if(total%3==1)  a++;
        if(total%3==2)  b++;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}