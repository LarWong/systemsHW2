#include <stdio.h>
#include <stdlib.h>

int main(){

	unsigned int num = 3000450600;
	char * pointy = &num;
	
	printf("int num: %x \n" , num);
	printf("address of x: %ld \n", *pointy);
	
	//printing bytes
	for (int i = 0; i < sizeof(int); i++){
		printf("Byte: %d; Hex: %hhx \n", i, pointy);
		pointy++; 
	}
	
	//modifying bytes by 1
	for (int i = 0; i < sizeof(int); i++){
		*pointy++;
		pointy++;
	}
	printf("increment bytes by 1: %x \n", num);

	//reset pointy
	pointy = &num;

        //modifying bytes by 16
        for (int i = 0; i < sizeof(int); i++){
                *pointy += 16;
                pointy++;
        }
        printf("increment bytes by 16: %x \n", num);       

	return 0;



}
