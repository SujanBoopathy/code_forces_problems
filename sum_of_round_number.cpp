#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[10000];
    while(n--){
        int num,rem,d=0;
        cin>>num;
        if(num>=1000){
            rem=num%1000;
            a[d++]=num-rem;
            num%=1000;
        }
        if(num>=100){
            rem=num%100;
            a[d++]=num-rem;
            num%=100;
        }
        if(num>=10){
            rem=num%10;
            a[d++]=num-rem;
            num%=10;
        }
        if(num<10 && num>0){
            a[d++]=num;
        }
        vector<int> v;
        for(int i=0;i<d;i++){
            v.push_back(a[i]);
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}