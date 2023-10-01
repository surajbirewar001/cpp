//efficient way to find first digit
#include <iostream>
using namespace std;
int main()
{
    int number;
    do{
    cout<<"enter a number";
    cin>>number;
    }while(number<0);
    while(number>=10)
    {
        number=number/10;
    }
    cout<<number;
    return 0;
}