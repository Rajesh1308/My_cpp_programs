#include<iostream>

using namespace std;
int main()
{
    int num1 {10};
    int num2 {3};
    double average {0.0};
    average = num1/num2;
    //Tye conversion (Double is converted to integer)
    cout<<"Average  : "<<average<<endl;

    //Explicit conversion of Int to double
    average = static_cast<double>(num1)/num2;
   
    cout<<"Average  : "<<average<<endl;

    return 0;


}