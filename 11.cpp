#include <iostream>
using namespace std;
int main() {
    int number,count=0,temp,rem,sum=0,check;
    do{
    cout<<"enter a number";
    cin>>number;
    }while(number<0);
    temp=number;
    check=number;
    while(number>0)
    {
        number=number/10;
        count++;
    }
    number=1;
    while(temp>0)
    {
        rem=temp%10;
        int i=0;
        while(i<count)
        {
            number=number*rem;
            i++;
        }
        sum=sum+number;
        number=1;
        temp=temp/10;
    }
    if(check==sum)
    cout<<check<<" No is Armstrong";
    else
    cout<<check<<" No is not Armstrong";
    
    return 0;
}