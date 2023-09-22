#include<iostream>
using namespace std;
main(){
	float size_of_bag;
	float price_of_bag;
	float area_covered_by_bag;
	cout<<"Enter the size of bag in pounds: ";
	cin>>size_of_bag;
	cout<<"Enter the cost of the bag: $";
	cin>>price_of_bag;
	cout<<"Enter the area in square feet that can be covered by the bag: ";
	cin>>area_covered_by_bag;
	float cost_per_pound;
	cost_per_pound=price_of_bag/size_of_bag;
	cout<<"Cost of fertilizer per pound: $"<<cost_per_pound<<endl;
	float price_per_square_foot;
	price_per_square_foot=price_of_bag/area_covered_by_bag;
	cout<<"Cost of fertilizing per square foot: $"<<price_per_square_foot; 
}