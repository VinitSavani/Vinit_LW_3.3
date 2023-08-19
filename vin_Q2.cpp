#include<iostream>
using namespace std;

class food
{
	int id;
	string name;
	string type;
	int rating;
	string location;
	int establish_year;
	int staff_quantity;
	
	public:
		food()
		{
			cout << endl << "Enter id :- " ;
			cin >> id ;
			cout << "Enter name :- " ;
			cin >> name ;
			cout << "Enter type :- " ;
			cin >> type ;
			cout << "Enter rating :- " ;
			cin >> rating ;
			cout << "Enter location :- " ;
			cin >> location ;
			cout << "Enter establish year :- " ;
			cin >> establish_year ;
			cout << "Enter staff quantity :- " ;
			cin >> staff_quantity ;
		}
		
		get()
		{
			cout << endl << "Id :- " << id << endl ;
			cout << "Name :- " << name << endl ;
			cout << "Type :- " << type << endl ;
			cout << "Rating :- " << rating << " Star."<< endl ;
			cout << "City :- " << location << endl ;
			cout << "Establish year :- " << establish_year << endl ;
			cout << "Staff quantity :- " << staff_quantity << endl << endl ;
		}
};

int main()
{
	int v,i;
	
	cout << "Enter no. of Cafes :- " ;
	cin >> v;
	
	food f[v] ;
	
	for(i=0;i<v;i++)
	{
		f[i].get();
	}
	
	return 0;
}
