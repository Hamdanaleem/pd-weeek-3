#include<iostream>
using namespace std;
main(){
	string movie;
	float adult_ticket_price;
	float child_ticket_price;
	int adult_ticket_sold;
	int child_ticket_sold;
	float percentage_of_charity;
	cout<<"Enter the Movie name: ";
	cin>>movie;
	cout<<"Enter the adult ticket price: $";
	cin>>adult_ticket_price;
	cout<<"Enter the child ticket price: $";
	cin>>child_ticket_price;
	cout<<"Enter the number of adult tickets sold: ";
	cin>>adult_ticket_sold;
	cout<<"Enter the child tickets sold: ";
	cin>>child_ticket_sold;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	cin>>percentage_of_charity;
	cout<<endl;
	cout<<"Movie: "<<movie<<endl;
	int total_amount_generate;
	total_amount_generate=(adult_ticket_price*adult_ticket_sold)+(child_ticket_price*child_ticket_sold);
	cout<<"Total amount generate from ticket sales: $"<<total_amount_generate<<endl;
	float charity_donation;
	charity_donation=(percentage_of_charity*total_amount_generate)/100;
	cout<<"Donation to charity ("<<percentage_of_charity<<"%): $"<<charity_donation<<endl;
	float remaining_amount;
	remaining_amount=total_amount_generate-charity_donation;
	cout<<"Remaining amount after donation: $"<<remaining_amount;
















}