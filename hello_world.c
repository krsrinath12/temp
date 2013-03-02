#include <stdio.h>

void dummy ()
{
	printf ("This function has been added by an idiot.\n");
}

void display(char *name) {
	printf("%s\n", name);
	dummy ();
}

int main() {
	display("Hello Srinath");
	display("Hello Ashish");
	return 0;
}
