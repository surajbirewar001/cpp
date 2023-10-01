// Given a positive integer N, check if it is a perfect number or not.
#include <iostream>
using namespace std;
int main() {
    int number,i=1,sum=0;
    do{
    cout<<"enter a number";
    cin>>number;
    }while(number<0);
    while(i<number)
    {
        if(number%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
    if(sum==number)
    cout<<number<<" Number is Perfect";
    else
    cout<<number<<" Number is not Perfect";
    return 0;
}