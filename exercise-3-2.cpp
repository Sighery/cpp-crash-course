#include <cstdio>
#include <cstring>

char read_from(char array[], unsigned int index) {
	if (index >= strlen(array)) return '\0';
	else return array[index];
}

bool write_to(char array[], unsigned int index, char value) {
	if (index >= strlen(array)) return false;
	array[index] = value;
	return true;
}

int main() {
	char lower[] = "abc?e";
	char upper[] = "ABC?E";
	char* upper_ptr = upper;  // Equivalent: &upper[0]

	lower[3] = 'd';
	upper_ptr[3] = 'D';

	char letter_d = lower[3];
	char letter_D = upper_ptr[3];

	printf("lower: %s\nupper: %s\n", lower, upper);

	//lower[7] = 'g';  // Buffer overflow

	printf("array: %s, index: %d, value: %c\n", lower, 2, read_from(lower, 2));
	printf("array: %s, index: %d, value: %c\n", upper, 2, read_from(upper, 2));
	
	printf("array: %s, index: %d, value: %c\n", lower, 40, read_from(lower, 40));
	printf("array: %s, index: %d, value: %c\n", upper, 40, read_from(upper, 40));
	
	write_to(lower, 2, 'x');
	write_to(upper, 2, 'X');
	printf("array: %s, index: %d, value: %c\n", lower, 2, read_from(lower, 2));
	printf("array: %s, index: %d, value: %c\n", upper, 2, read_from(upper, 2));
	
	write_to(lower, 40, 'x');
	write_to(upper, 40, 'X');
	printf("array: %s, index: %d, value: %c\n", lower, 40, read_from(lower, 40));
	printf("array: %s, index: %d, value: %c\n", upper, 40, read_from(upper, 40));
}
