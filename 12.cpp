//  Find the count of a digit in a given positive integer.
#include <iostream>
using namespace std;
int main() {
    int number,count=0,rem,digit,temp;
    do{
    cout<<"enter a number";
    cin>>number;
    }while(number<0);
    temp=number;
    cout<<"enter a digit to count";
    cin>>digit;
    while(number>0)
    {
      rem=number%10;
      if(digit==rem)
      {
          count++;
      }
      number=number/10;
    }
    cout<<"count of digit "<<digit<<" in "<<temp<<" is "<<count;
    return 0;
}