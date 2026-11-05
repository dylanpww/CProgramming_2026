#include <stdio.H>

//ada 2 cara untuk nambah, yang 1 bisa auto update variable pake && and * sama ada yang normal

//cara normal 

/*
int add(int, int);

int main() {
	int a, b, sum;

	a = b = 10;

	sum = add(a, b);

	printf("the sum of a and b = %d \n", sum);
	printf("a = %d, b = %d \n", a, b);
}


int add(int aa, int bb) {
	aa += 1; bb += 1;
	return (aa + bb);
}*/



//cara 2 yang bisa langsung auto update variable jadi pas di call langsung update (pake & sama *)


//int add(int *, int *);
//
//int main() {
//	int a, b, sum;
//
//	a = b = 10;
//
//	sum = add(&a, &b);
//
//	printf("the sum of a and b = %d \n", sum);
//	printf("a = %d, b = %d \n", a, b);
//}
//
//
//int add(int *aa, int*bb) {
//	*aa += 1; *bb += 1;
//	return (*aa + *bb);
//}