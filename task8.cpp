#include<iostream>
using namespace std;
main(){
	double vegetable_price_in_coins;
	double fruit_price_in_coins;
	int weight_of_vegetables;
	int weight_of_fruits;
	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>>vegetable_price_in_coins;
	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>>fruit_price_in_coins;
	cout<<"Enter total kilograms of vegetables: ";
	cin>>weight_of_vegetables;
	cout<<"Enter total kilograms of fruits: ";
	cin>>weight_of_fruits;
	int total_price_in_coins;
	total_price_in_coins=(vegetable_price_in_coins*weight_of_vegetables)+(fruit_price_in_coins*weight_of_fruits);
	int total_price_in_rps;
	total_price_in_rps=total_price_in_coins/1.94;
	cout<<"Total earnings in rupees (Rps): "<<total_price_in_rps;

}