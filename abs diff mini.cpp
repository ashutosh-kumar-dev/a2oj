#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int x,y,z;
    int q;
    cin>>q;

    int ans=0;
    for(int i=0;i<q;i++){
        cin>>x>>y>>z;

        if(abs(z-x)!=abs(z-y)){

            if(abs(z-x)<abs(z-y)) cout<<"Cat A"<<endl;
            else cout <<"Cat B"<<endl;
        }
        else cout<<"Mouse C"<<endl;
    }
}
