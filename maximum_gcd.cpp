#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0) return b;
    if(b==0) return a;
    if(a==b) return a;
    if(a>b) return gcd(a-b,b);
    return gcd(a,b-a);

}
int main(){
    int n,m=0;
    cin>>n;
    while(n--){
        int s;
        cin>>s;
        for(int i=1;i<=s;i++){
            for(int j=i+1;j<=s;j++){
                m=max(m,gcd(i,j));
            }
        }
        cout<<m<<endl;
    }
    return 0;
}