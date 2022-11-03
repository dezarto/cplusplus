#include<iostream>

using namespace std;

struct Special {
	string address;
	int number;
};

struct General{
	int stock;
	int weight;
	string name;
	Special special1;
};

int main() {
	General general;
	Special special;


	cout << "Please enter a stock number: ";
	cin >> general.stock;
	cout << "Please enter a weight: ";
	cin >> general.weight;
	cout << "Please enter a name: ";
	cin >> general.name;
	cout << "Please enter a adress:";
	cin >> general.special1.address;
	cout << "Please enter a number: ";
	cin >> general.special1.number;
	cout << endl;

	cout << "Stock number: " << general.stock << "/ Weight: " << general.weight << "/ Name: " << general.name << "/ Address: " << general.special1.address << "/ Number: " << general.special1.number;


	return 0;
}