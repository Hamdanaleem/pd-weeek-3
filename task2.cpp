#include<iostream>
using namespace std;
main(){
	cout<<"Number of minutes: ";
	float time_in_minutes;
	cin>>time_in_minutes;
	int time_in_seconds;
	time_in_seconds=time_in_minutes*60;
	cout<<"frames per second: ";
	float frames_per_second;
	cin>>frames_per_second;
	int number_of_frames;
	number_of_frames=time_in_seconds*frames_per_second;
	cout<<"Total number of frames: "<<number_of_frames;

}
