#include<iostream>

using namespace std;

int main(){

    int n1=0,n2=1,n3,i,number;

    cout<<"enter the no of elements"<<endl;

    cin>>number;
    //cout<<n1 <<" "<<n2<<" "<<endl;

    for(i=0;i<number;i++){
    n3=n1+n2;
    cout<<n3<<" ";
    n1=n2;
    n2=n3;

    }

    return 0;

}