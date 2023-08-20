#include <cstdio>

struct College {
		char name[256];
};

void print_names(College* colleges, size_t n_colleges) {
		for (size_t i = 0; i < n_colleges; i++) {
				printf("%s College\n", colleges[i].name);
		}
}

int main() {
		College oxford[] = {"Magdalen", "Nuffield", "Kellog"};
		print_names(oxford, sizeof(oxford) / sizeof(College));
		printf("\nOne more length, what happens?\n");
		print_names(oxford, (sizeof(oxford) / sizeof(College)) + 1);

		printf("\n\n");

		College* third_college_ptr = &oxford[2];
		printf("Value at third_college_ptr: %s\n", third_college_ptr->name);
		printf("third_college_ptr address: %p\n", third_college_ptr);
		
		third_college_ptr = oxford + 2;
		printf("Value at third_college_ptr: %s\n", third_college_ptr->name);
		printf("third_college_ptr address: %p\n", third_college_ptr);
}
