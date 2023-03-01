#include "ClassLinearSys.h"

double LinearSystemWork::GetDetMainMatrix()
{
	double summ = 0;
	double** matrix = MainSystem.main.matrix;

	if (MainSystem.main.order == 1)
	{
		summ += matrix[0][0];
		return summ;
	}

	else if (MainSystem.main.order == 2) {
		summ += matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
		return summ;
	}


	summ += GetDetMainMatrix();
}

Matrix* LinearSystemWork::GetLowMinorMatrix(double** matrix,size_t j)
{
	Matrix Minor;
	Minor.order = 

}

double pow(double number, size_t degree) {
	double number_t = 1;
	while (degree > 0) {
		number_t *= number;
		--degree;
	}
	return number_t;
}


double LinearSystemWork::GetElemMul(size_t i, size_t j)
{
	return pow(-1, 1 + j) * MainSystem.main.matrix[i][j];
}


