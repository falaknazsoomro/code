#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int num =1;

    if(num%2==0)
    cout << "the number " << num << " is Even";
    else
    cout << "the number " << num << " is Odd";

    for(int i=1;i<=20; i++)
    cout << "\n* ";
    int rows;
    cout << "Enter number of rows:";
    cin >> rows;
    getch();
    cout << "number of rows are "<< rows;
    return 0;


    
}