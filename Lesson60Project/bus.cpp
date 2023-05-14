#include "bus.h"

Bus::Bus() {
	brand = "no brand";
	id = "no id";
	cost = -1;
	seats = -1;
}

Bus::Bus(string b, string i, int c, int s) {
	brand = b;
	id = i;
	cost = c;
	seats = s;
}

string Bus::get_brand() {
	return brand;
}
void Bus::set_brand(int b) {
	brand = b;
}

string Bus::get_id() {
	return id;
}
void Bus::set_id(int i) {
	id = i;
}
int Bus::get_cost() {
	return cost;
}
void Bus::set_cost(int c) {
	cost = c;
}
int Bus::get_seats() {
	return seats;
}
void Bus::set_seats(int s) {
	seats = s;
}

string Bus::convert() {
	return brand + ": id = " + id + ", cost = " + to_string(cost) + ", seats = " + to_string(seats);
}