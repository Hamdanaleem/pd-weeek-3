#include<iostream>
using namespace std;
main(){
	double square_meters_can_be_painted;
	double width_of_wall;
	double height_of_wall;
	cout<<"Number of square meters you can paint: ";
	cin>>square_meters_can_be_painted;
	cout<<"Width of the single wall: ";
	cin>>width_of_wall;
	cout<<"Height of the single wall: ";
	cin>>height_of_wall;
	int number_of_walls_painted;
	number_of_walls_painted=square_meters_can_be_painted/(width_of_wall*height_of_wall);
	cout<<"Number of walls you can paint: "<<number_of_walls_painted;

}