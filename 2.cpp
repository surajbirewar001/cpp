// reverse the number
#include <iostream>
using namespace std;
int main()
{
    int number,rem,i=0,rev;
    do{
    cout<<"enter a number";
    cin>>number;
    }while(number<0);
    while(number>0)
    {
        rem=number%10;
        i=i*10+rem;
        number=number/10;
    }
    cout<<"reverse is="<<i;
    return 0;
}