//  Find the product of all digit of a positive integer.
#include <iostream>
using namespace std;
int main() {
    int number,mul=1,rem;
    do{
    cout<<"enter a number";
    cin>>number;
    }while(number<0);
    while(number>0)
    {
      rem=number%10;
      mul=mul*rem;
      number=number/10;
    }
    cout<<'\t'<<"Sum of all digit is "<<mul;
    return 0;
}