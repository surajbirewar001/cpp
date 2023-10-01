// Find the sum of all digit of a integer (both positive and negative).
#include <iostream>
using namespace std;
int main() {
    int number,temp,sum=0,rem;
    cout<<"enter a number";
    cin>>number;
    if(number<0)
    {
        temp=number;
        temp=temp*-2;
        temp=temp+number;
        cout<<temp;
    }
    else
    {
        temp=number;
    }
    while(temp>0)
    {
      rem=temp%10;
      sum=sum+rem;
      temp=temp/10;
    }
    cout<<'\t'<<"Sum of all digit is "<<sum;
    return 0;
}