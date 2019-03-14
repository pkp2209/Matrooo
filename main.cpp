#include "Class.h"

int main()
{
	matrix M(2, 3), N(3, 2), T(2, 3);
	//matrix K(M);
	//matrix H(std::move(M));
	M.addrand();
	N.addrand();
	T.addrand();
	std::cout << M << "\n";
	std::cout << N << "\n";
	std::cout << T << "\n";
	T = T + M;
	M = N * M;
	N = M.transpose_matrix();
	std::cout << M << "\n" << N << "\n" << T;
	system("pause");
	return 0;
}