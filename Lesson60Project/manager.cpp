#include "manager.h"

void method(Bus* buses, int size) {
	for (int i = 0; i < size; i++) {
		cout << buses[i].convert() << endl;
	}
}