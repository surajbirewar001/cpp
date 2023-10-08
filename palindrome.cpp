#include<iostream>

using namespace std;

int main()
{
    int n,rem,sum=0,temp;
    

    cout<<"Enter the NUmber= "<<endl;
    cin>>n;
    temp=n;

    while(n>0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(temp==sum)
    cout<<"Number is palindrome ";
    else
    cout<<"Number is not palindrome ";

    return 0;

}