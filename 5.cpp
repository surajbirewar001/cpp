// find first digit
#include <iostream>
using namespace std;
int main()
{
    int number,i=1,len=0,temp,rem;
    do{
    cout<<"enter a number";
    cin>>number;
    }while(number<0);
    temp=number;
    while(number>0)
    {
        number=number/10;
        len++;
    }
    while(i<len)
    {
        temp=temp/10;
        i++;
    }
    cout<<"last digit is"<<temp;
    return 0;
}