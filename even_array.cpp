#include<iostream>
using namespace std;
int main(){
    int n;
    int a[1000];
    cin>>n;
    while(n--){
        int size,odd=0,even=0;
        cin>>size;
        for(int i=0;i<size;i++){
            cin>>a[i];
        }
        for(int i=0;i<size;i++){
            if(i%2!=a[i]%2){
                if(a[i]%2==0) even++;
                else odd++;
            }
        }
        if(odd!=even)
            cout<<-1<<endl;
        else
            cout<<even<<endl;

    }
    return 0;
}