#include <stdio.h>

void dummy ()
{
	printf ("This function has been added by an idiot.\n");
}


void dummysneha(void){
	//comment
}

void display(char *name) {
	printf("%s\n", name);
	dummy ();
}


int main() {
	display("Hello Srinath");
	return 0;
}
