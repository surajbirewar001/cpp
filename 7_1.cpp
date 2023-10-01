// Find the sum of all digit of a integer (both positive and negative).
#include <iostream>
using namespace std;
int main() {
    int number,temp,sum=0,rem;
    cout<<"enter a number";
    cin>>number;
    if(number<0)
    {
        number=-(number);
    }
    while(number>0)
    {
      rem=number%10;
      sum=sum+rem;
      number=number/10;
    }
    cout<<'\t'<<"Sum of all digit is "<<sum;
    return 0;
}