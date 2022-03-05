#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout<<"Enter the number:"<<endl;
    int num;
    cin>>num;
    int sum=0;
    int n=num;
    while(num>0){
        int ln=num%10;
        sum += ln*ln*ln;
        num=num/10;
    }
    if(sum==n){
        cout<<"Armstrong number\n";
    }
    else{
        cout<<"NOt an armstrong number!\n";
    }
    return 0;
}