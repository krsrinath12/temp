#include <stdio.h>
#include <stdlib.h>

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

int getval ()
{
	return random ();
}

int main() {
	display("Hello Srinath");
	display("Hello Ashish");
	printf ("%d\n", getval ());
	dummy ();
	dummysneha ();
	return 0;
}
