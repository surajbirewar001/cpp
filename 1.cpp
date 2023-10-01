// Find factors of a number
#include <iostream>
using namespace std;
int main()
{
    int number,i=1;
    do{
    cout<<"enter a number";
    cin>>number;
    }while(number<0);
    while(i<=number)
    {
        if(number%i==0)
        {
            cout<<'\t'<< i ;
        }
        i++;
    }
    return 0;
}