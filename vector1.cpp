#include<iostream>

using namespace std;
int main()
{
    bool result {false};

    cout<<result<<endl;

    cout<<std::boolalpha;
    cout<<result<<endl;
    cout<<std::noboolalpha;

    result = (100 == 100);

    cout<<result<<endl;
    cout<<(100 == 50+50)<<endl;

    cout<<std::boolalpha;
    cout<<(100 == 98)<<endl;
    cout<<std::noboolalpha;
    
    return 0;

}