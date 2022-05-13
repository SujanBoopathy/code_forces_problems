#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int total,a,b;
        cin>>total;
        a=total/3;
        b=a*2;
        if(a+b==total)
            cout<<a<<b/2<<endl;
        else{
            while(a+b != total && a-b >=2)
                a+=2;
            while(a+b!= total )
                a++;
            cout<<a<<b/2<<endl;
        }
    }
    return 0;
}