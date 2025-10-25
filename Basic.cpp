#include<iostream>

#include<cmath>

using namespace std;

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);
int modulus(int a, int b);

int main(){

    int num1, num2;
    cout << "Enter the first Number: ";
    cin >> num1;
    cout << "Enter the second Number:";
    cin>> num2;
            
        cout<<"RESULTS:"<<endl;
        //   Function Calls ///
    cout << "Addition: " << add(num1, num2) << endl;
    cout << "Subtraction: " << subtract(num1, num2) << endl;
    cout << "Multiplication: " << multiply(num1, num2) << endl;

    if(num2 == 0){
        cout << "Division: Error! Division by zero." << endl;
        cout << "Modulus: Error! Division by zero." << endl;
    } else {
    cout << "Division: " << divide(num1, num2) << endl;
    cout << "Modulus: " <<(num1%num2) << endl;

    return 0;
    }
}
int add(int a, int b){
    return a + b;
}
int subtract(int a, int b){
    return a - b;
}
int multiply(int a, int b){
    return a * b;
}
double divide(int a, int b){
    return static_cast<double>(a) / b;
}
int modulus(int a, int b){
    return a % b;  


}