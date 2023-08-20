#include <cstdio>

enum class Operation {
		Add,
		Substract,
		Multiply,
		Divide,
};

struct Calculator {
		Calculator(Operation op_in) {
				op = op_in;
		}

		int calculate(int a, int b) {
				switch(op) {
						case Operation::Add: {
								return a + b;
						} break;
						case Operation::Substract: {
								return a - b;
						} break;
						case Operation::Multiply: {
								return a * b;
						} break;
						case Operation::Divide: {
								return a / b;
						} break;
						default: {
								printf("Not implemented");
								return 0;
						}
				}
		}

		Operation op;
};


int main() {
		Calculator v1 = Calculator{Operation::Add};
		Calculator v2 = Calculator{Operation::Substract};
		Calculator v3 = Calculator{Operation::Multiply};
		Calculator v4 = Calculator{Operation::Divide};

		printf("%d + %d = %d\n", 2, 3, v1.calculate(2, 3));
		printf("%d - %d = %d\n", 2, 3, v2.calculate(2, 3));
		printf("%d * %d = %d\n", 2, 3, v3.calculate(2, 3));
		printf("%d / %d = %d\n", 2, 3, v4.calculate(2, 3));
}
