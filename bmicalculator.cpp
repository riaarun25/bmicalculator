//This is a simple program to calculate Body Mass Index 

#include<iostream>
using namespace std;

int main(){
    float height;
    float weight;
    
    cout << "***Welcome to this Body Mass Index Calculator!***" << endl;
    cout << "\nEnter the following details:- \n";
    cout << "Your height (in meters): ";
    cin >> height;
    cout << "Your weight (in kilograms): ";
    cin >> weight;
    float bmi = weight/(height*height);
    if (bmi < 18.5){
        cout << "\nBMI = "<< bmi << " (Underweight)";
    }
    else if (bmi > 25){
        cout << "\nBMI = "<< bmi << " (Overweight)";
    }
    else{
        cout << "\nBMI = "<< bmi << " (Normal Range)";
    }
    
    return 0;
}
