#include <iostream>

void v_swap(int a, int b) { // call by value
	int temp = a;
	a = b;
	b = temp;
}

void p_swap(int *a, int *b) { //call by address (pointer)
	int temp = *a;
	*a = *b;
	*b = temp;
}

void r_swap(int &a, int &b) { //call by reference, same results as call by address
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int x = 5, y = 10;
	v_swap(x, y);
}
