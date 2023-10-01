#include <iostream>
using namespace std;
int main() {
    int number,temp,rev=0,rem;
    do{
    cout<<"enter a number";
    cin>>number;
    }while(number<0);
    temp=number;
    while(number>0)
    {
      rem=number%10;
      rev=rev*10+rem;
      number=number/10;
    }
    while(rev>0)
    {
        rem=rev%10;
        switch(rem){
            case 1:
                cout<<" One ";
                break;
            case 2:
                cout<<" Two ";
                break;
            case 3:
                cout<<" Three ";
                break;
            case 4:
                cout<<" Four ";
                break;
        case 5:
                cout<<" Five ";
                break;
        case 6:
                cout<<" Six ";
                break;
        case 7:
                cout<<" Seven ";
                break;
        case 8:
                cout<<" Eight ";
                break;
        case 9:
                cout<<" Nine ";
                break;
        case 0:
                cout<<" Zero ";
                break;
        }
        rev=rev/10;
    }
    return 0;
}