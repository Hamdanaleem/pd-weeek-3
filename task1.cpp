#include<iostream>
using namespace std;
main(){
	cout<<"Enter the number of sides of polygon: ";
	int side_of_polygon;
	cin>>side_of_polygon;
	int sum_of_internal_angle;
	sum_of_internal_angle=(side_of_polygon-2)*180;
	cout<<"The sum of internal angle of a "<<side_of_polygon<<"-sided polygon is: "<<sum_of_internal_angle<<" degrees";

}