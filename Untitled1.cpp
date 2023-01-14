#include<iostream>
using namespace std;

int main(){

    int i=2;
    int x=1;
    int y=9;
    int n;
    cin>>n;
    cout<<endl<<i<<endl;

    for(int j=1; j<=n;j++){

    i=i*x+y;
    cout<<i<<endl;
    x+=2;
    y--;

    }

}
