#include<iostream>
#include "Header.h"
#include "DataStructure.h"

int main() {
	for (int i = 1; i <= 15; i++) {
		cout << i << " " << returnSetBits(i)<<"\n";
	}
}