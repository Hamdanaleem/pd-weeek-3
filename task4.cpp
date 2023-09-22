#include<iostream>
using namespace std;
main(){
	int imposter_count;
	int player_count;
	cout<<"Enter Imposter Count: ";
	cin>>imposter_count;
	cout<<"Enter Player Count: ";
	cin>>player_count;
	int chance_of_imposter;
	chance_of_imposter=100.0*imposter_count/player_count;
	cout<<"Chance of being an imposter: "<<chance_of_imposter<<"%";

}