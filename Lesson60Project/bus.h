#include "main.h"

class Bus {
private:
	string brand;
	string id;
	int cost;
	int seats;
public:
	Bus();
	Bus(string brand, string id, int cost, int seats);

	string get_brand();
	void set_brand(int value);
	string get_id();
	void set_id(int value);
	int get_cost();
	void set_cost(int value);
	int get_seats();
	void set_seats(int value);

	string convert();

	
};