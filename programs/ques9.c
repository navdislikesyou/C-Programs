//size of datatype
#include<stdio.h>
void main(){
	int i;
	float f;
	double d;
	char c;
	printf("Size of:\nInt:%zu bytes\nFloat:%zu bytes\nDouble:%zu bytes\nChar:%zu bytes",sizeof(i),sizeof(f),sizeof(d),sizeof(c));
}