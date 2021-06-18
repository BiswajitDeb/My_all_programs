#include <stdio.h>
void pattern(int rows_no)
{
	int i, j, k;

	// for loop for printing
	// upper half
	for (i = 1; i <= rows_no; i++) {

		// printing i spaces at
		// the beginning of each row
		for (k = 1; k < i; k++)
			printf(" ");
		
		// printing i to rows value
		// at the end of each row
		for (j = i; j <= rows_no; j++)
			printf("%d ",j);

		printf("\n");
	}

	// for loop for printing lower half
	for (i = rows_no - 1; i >= 1; i--) {

		// printing i spaces at the
		// beginning of each row
		for (k = 1; k < i; k++)
			printf(" ");
		

		// printing i to rows value
		// at the end of each row
		for (j = i; j <= rows_no; j++)
			printf("%d " ,j);

		printf("\n");
	}
}

// Driver code
int main()
{
	// taking rows value from the user
	int rows_no = 3;

	pattern(rows_no);
	return 0;
}
