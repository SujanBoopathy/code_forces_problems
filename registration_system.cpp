#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string ,int> database;
    string s;

    for(int i=0;i<n;i++){
        cin>>s;
        if(database.count(s)==0){
            database[s]=1;
            cout<<"OK"<<endl;
        }
        else{
            cout<<s<<database[s]<<endl;
            database[s]+=1;            
        }
    }
    return 0;
}