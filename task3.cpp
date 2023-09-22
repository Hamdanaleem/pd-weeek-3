#include<iostream>
using namespace std;
main(){
	double initial_velocity;
	double time_in_seconds;
	double acceleration;
	cout<<"Enter Initial velocity (m/s): ";
	cin>>initial_velocity;
	cout<<"Enter Acceleration (m/s^2): ";
	cin>>acceleration;
	cout<<"Enter Time (s): ";
	cin>>time_in_seconds;
	double final_velocity;
	final_velocity=(acceleration*time_in_seconds)+initial_velocity;
	cout<<"Final Velocity: "<<final_velocity;

}