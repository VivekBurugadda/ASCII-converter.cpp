#include <iostream>

using namespace std;

int main()
{
    char c1, c2, c3, c4, c5;
    cout << "enter the 5 letters: ";
    cin>>c1>>c2>>c3>>c4>>c5;
    cout<<"ASCII message: "<<int(c1)<<" "<<int(c2)<<" "<<int(c3)<<" "<<int(c4)<<" "<<int(c5)<<endl;;
    cout<<"Numeric message: "<<char(c1)<<" "<<char(c2)<<" "<<char(c3)<<" "<<char(c4)<<" "<<char(c5)<<endl;
    return 0;
}

