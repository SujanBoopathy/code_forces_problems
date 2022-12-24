#include<iostream>
using namespace std;

int main(){
    int a=0,d=0;
    int size;
    cin>>size;
    string str;
    cin>>str;
    for(int i=0;i<size;i++){
        if(str[i]=='A') a++;
        else d++;
    }
    if(d<a){
        cout<<"Anton"<<endl;
    }
    else if(d>a){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}
