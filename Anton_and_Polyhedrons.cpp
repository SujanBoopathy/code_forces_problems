#include<iostream>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    string str;
    for(int i=0;i<n;i++){
        cin>>str;
        if(str=="Tetrahedron"){
            c+=4;
        }
        else if(str=="Cube"){
            c+=6;
        }
        else if(str=="Octahedron"){
            c+=8;
        }
        else if(str=="Dodecahedron"){
            c+=12;
        }
        else if(str=="Icosahedron"){
            c+=20;
        }
        else{
            c+=0;
        }
    }
    cout<<c<<endl;
    return 0;
    

}
