#include <iostream>

int main() {
	const int MAX_AGE = 90;
	
	const int* a = new int; //cant change value of pointer, can change where it points to
	*a = 2;
	a = (int*)&MAX_AGE;  
	std::cout << *a << std::endl;
	//protects data from modification allows pointer to be redirected


	int* const b = new int; //can change value of pointer, not where it points to
	*b = 2;
	b = (int*)&MAX_AGE;
	std::cout << *b << std::endl;
	//locks pointer to one address allows data at that address to be changed


	const int* const c = new int; //cant change value of pointer, can't change where it points to
	*c = 2;
	c = (int*)&MAX_AGE;
	std::cout << *c << std::endl;
	//locks pointer to one address and prevents data change at that address
	//fully immutable pointer


	std::cin.get();
	return 0;
}
