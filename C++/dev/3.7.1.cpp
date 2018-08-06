//This is a program to convert height in inch and centimeters.
#include <iostream>
int main()
{
    using namespace std;
    const double factor=30.48;
    double height_in_cen, foot,inch;
    cout << "Please enter you height in centimeters: ";
    cin >> height_in_cen;
    cout << endl;
    foot=height_in_cen/factor;
    inch=(height_in_cen-factor*foot)/2.54;
    cout << "Your height in foot is "<< foot.2f << "Foot "<< inch << "inch"<<endl;
    return 0;
}

