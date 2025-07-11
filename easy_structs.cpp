#include <iostream>

struct box {
	int length,width;
};

int main() {

	struct box* c;
	c = (struct box*)malloc(sizeof(struct box));
	(*c).length = 10;
	(*c).width = 5;

	printf("%d\n", (*c).length);
	printf("%d", (*c).width);

	struct box* p;
	p = new box;

	p->length = 10;
	p->width = 5;

	std::cout << p->length << std::endl;
	std::cout << p->width;


	std::cin.get();
	return 0;
}
