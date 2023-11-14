#include <stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <windows.h>


int main(int argc, char *argv[]) {
	
	
	while(1){
		system("cls");
		printf("LUZ VERDE");
		system("Color A0");
		sleep(20);
		system("cls");
		printf("LUZ AMARILLA");
		system("Color E1");
		sleep(5);
		system("cls");
		printf("LUZ ROJA");
		system("Color 48");
		sleep(15);
	}
	
		
	return 0;
}

