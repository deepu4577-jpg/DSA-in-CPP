#include <iostream>
using namespace std;

int main() {
    int a, b ;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    int sum = a + b;

    cout << "Sum = " << sum<<endl;

    int subtract;
    subtract = a - b;
    cout<< "subtrect ="<<subtract<<endl;
    int product;
    product = a*b;
    cout<< "product ="<<product<<endl;
    int division;
    division = a/b;
    cout<< "division ="<<division<<endl;


    return 0;
}