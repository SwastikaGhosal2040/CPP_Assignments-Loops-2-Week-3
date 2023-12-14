/*WAP to print the sum of a given number and its reverse.
Sample Input : 12
Sample Output : 33 [12+21]*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int num = n;
    int lastDigit = 0;
    int reverse = 0;
    while(n>0){
        reverse*=10;
        lastDigit=n%10;
        reverse+=lastDigit;
        n/=10;
    }
    cout<<"The sum of the number "<<num<<" and its reverse "<<reverse<<" is : "<<num+reverse;
}