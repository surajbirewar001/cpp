//  Given a positive integer N, check if its palindrome or not. A palindrome number is a number that is same as its reverse.
#include <iostream>
using namespace std;
int main() {
    int number,temp,rev=0,rem;
    do{
    cout<<"enter a number";
    cin>>number;
    }while(number<0);
    temp=number;
    while(number>0)
    {
      rem=number%10;
      rev=rev*10+rem;
      number=number/10;
    }
    if(temp==rev)
    cout<<endl<<"Number is Palindrome";
    else
    cout<<endl<<"Number is not Palindrome";
    return 0;
}