//sum of all elements between two numbers
#include <iostream>
using namespace std;
int main()
{
    int number1,sum=0,number2;
    do{    
    cout<<"enter two numbers";
    cin>>number1>>number2;
    }while(number1<0 || number2<0);
    while(number1<=number2)
    {
        sum=sum+number1;
        number1++;
    }
    cout<<"sum="<<sum;
    return 0;
}