#include<iostream>
using namespace std;

class corp
{
	int id;
	string name;
	int staff_quantity;
	double revenue;
	int import;
	int exports;
	string ceo;
	
	public:
		corp()
		{
			cout << "Enter id :- " ;
			cin >> id ;
			cout << "Enter name :- " ;
			cin >> name ;
			cout << "Enter staff quantity :- " ;
			cin >> staff_quantity ;
			cout << "Enter revenue :- " ;
			cin >> revenue ;
			cout << "Enter no. of raw dimonds imported per year :- " ;
			cin >> import ;
			cout << "Enter no. of raw dimonds exported per year :- " ;
			cin >> exports ;
			cout << "Enter name of CEO of company :- " ;
			cin >> ceo ;
		}
		
		get()
		{
			cout << endl << "Id :- " << id << endl ;
			cout << "Name :- " << name << endl ;
			cout << "Staff quantity :- " << staff_quantity << endl ;
			cout << "Revenue :- " << revenue << endl ;
			cout << "No. of raw dimonds imported per year :- " << import << endl ;
			cout << "No. of raw dimonds exported per year :- " << exports << endl ;
			cout << "Name of CEO of company :- " << ceo << endl << endl ;
			
		}
};

int main()
{
	int a,i;
	
	cout << "Enter no. of dimond companies :- " ;
	cin >> a;
	
	corp s[a] ;
	
	for(i=0;i<a;i++)
	{
		s[i].get();
	}
	
	return 0;
}
