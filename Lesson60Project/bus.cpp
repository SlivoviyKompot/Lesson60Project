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

//int get_brand() {
//
//}
//void set_brand(int value) {
//
//}
//int get_id() {
//
//}
//void set_id(int value) {
//
//}
//int get_cost() {
//
//}
//void set_cost(int value) {
//
//}
//int get_seats() {
//
//}
//void set_seats(int value) {
//
//}

string Bus::convert() {
	return brand + ": id = " + id + ", cost = " + to_string(cost) + ", seats = " + to_string(seats);
}