#include <cstdio>

int step_function(int x) {
		int result = 0;
		if (x > 0) result = 1;
		else if (x < 0) result = -1;
		return result;
}

int main() {
		int v1 = step_function(100);
		int v2 = step_function(0);
		int v3 = step_function(-10);

		printf("Num1: %d, Step %d\n", 100, v1);
		printf("Num2: %d, Step %d\n", 0, v2);
		printf("Num3: %d, Step %d\n", -10, v3);
}
