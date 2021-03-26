//This is a Basic Arithmetic calculator 

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int op;
	float num1;
	float num2;
	
	cout << "\n***Welcome to this Basic Arithmetic calculator!***\n\n";
	cout << "Select opeartion:\n";
	cout << "[1] Addition\n";
	cout << "[2] Substraction\n";
	cout << "[3] Multiplication\n";
	cout << "[4] Division\n";
	cout << "\nEnter your choice: ";
	cin >> op;
	
	cout << "Enter first number: ";
	cin >> num1;
	
	cout << "Enter second number: ";
	cin >> num2;
	
	cout << "Result: ";
	
	switch(op){
		case 1:
			cout << (num1+num2);
			break;
		case 2:
			cout << (num1-num2);
			break;
		case 3:
			cout << (num1*num2);
			break;
		case 4:
			cout << (num1/num2);
			break;
		default:
			cout << "Invalid choice";
			break;
	}
	cout << endl;
}
