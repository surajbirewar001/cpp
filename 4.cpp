#include <iostream>
using namespace std;
int main()
{
    int number1,temp=0,number2;
    do{
    cout<<"enter two numbers";
    cin>>number1>>number2;
    }while(number1<0 || number2<0);
    while(number1<=number2)
    {
        int i=2;
        while(i<number1)
        {
            if(number1%i==0)
            {
                temp=0;
                break;
            }
            else
            {
                temp=1;
            }
            i++;
        }
        
        if(temp==1)
        {
            cout<<'\t'<<number1;
        }
        number1++;
    }
    return 0;
}