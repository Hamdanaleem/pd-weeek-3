#include<iostream>
using namespace std;
main(){
	int age;
	int number_of_times_moved;
	cout<<"Enter the person's age: ";
	cin>>age;
	cout<<"Enter the number of times they've moved: ";
	cin>>number_of_times_moved;
	int number_of_houses;
	number_of_houses=number_of_times_moved+1;
	int average_lived;
	average_lived=age/number_of_houses;
	cout<<"Average number of years lived in the same house: "<<average_lived; 
}