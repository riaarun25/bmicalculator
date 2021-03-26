#include<iostream>
#include<cmath>
using namespace std;

void arithmetic(){
	int op;
	float num1;
	float num2;
	
	cout << "\nSelect opeartion:-\n";
	cout << "[1] Addition\n";
	cout << "[2] Substraction\n";
	cout << "[3] Product\n";
	cout << "[4] Division\n";
	cout << "\nEnter your choice: ";
	cin >> op;
	
	cout << "Enter first number:";
	cin >> num1;
	
	cout << "Enter second number:";
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
			cout<< "Invalid operation";
			break;
	}
	cout<< endl;
}

void trignometric(){
	int op;
	float val;
	cout << "\nSelect:-\n";
	cout << "[1] Sine\n";
	cout << "[2] Cosine\n";
	cout << "Enter your choice: ";
	cin >> op;
	cout << "Enter value: ";
	cin >> val;
	if(op == 1){
		cout << sin(val);
	}
	else if(op == 2){
		cout << cos(val);
	}
	else{
		cout << "Invalid";
	}
	cout << endl;
}

void exponential(){
	float base;
	float expp;
	
	cout << "\nEnter base:";
	cin >> base;
	cout << "Enter exponent: ";
	cin >> expp;
	cout << pow(base, expp) << endl;
}

void logarithmic(){
	float value;
	cout << "\nEnter the value to calculate the log(e): ";
	cin >> value;
	cout << log(value) << endl;
}

int main(){
	int sel;
	char choice = 'y';
	char ch = 'Y';
	cout << "\n***Advanced Calculator***\n\n";

	cout << "[1] Arithmetic\n";
	cout << "[2] Trignometric\n";
	cout << "[3] Exponential\n";
	cout << "[4] Logarithmic\n";
	
	while(choice == 'y' || ch == 'Y'){
		cout << "Enter the type of operation you want to carry out: ";
		cin >> sel;
		
		switch(sel){
			case 1:
				arithmetic();
				break;
			case 2:
				trignometric();
				break;
			case 3:
				exponential();
				break;
			case 4:
				logarithmic();
				break;
			default:
				cout<<"Invalid Operation";
		}
		
		cout << "\n[Enter 'Y' to continue and 'N' to end]" << endl;
		cin >> choice;
		if(choice == 'n'){
			break;
		}
	}		
	return 0;
}
