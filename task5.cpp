#include<iostream>
using namespace std;
main(){
	string name;
	float weight_to_loss;
	cout<<"Enter the name of the person: ";
	cin>>name;
	cout<<"Enter the target weight loss in kilograms: ";
	cin>>weight_to_loss;
	float number_of_days_required;
	number_of_days_required=weight_to_loss*15;
	cout<<name<<" will need "<<number_of_days_required<<" days to loss "<<weight_to_loss<<" kg of weight by following doctor's suggestion";

}