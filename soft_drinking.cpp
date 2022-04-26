#include<iostream>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    cout<<min(min((l*k)/nl,c*d),p/np)/n<<endl;
    return 0;
}