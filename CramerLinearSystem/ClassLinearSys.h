#pragma once

struct Matrix {
	double** matrix;
	size_t order;
};

struct Column {
	double* arr;
	size_t size;
};

struct LinearSys
{
	Matrix main;
	Column leisure_factors;
	size_t count_unknown;
};

class LinearSystemWork {
public:
	double GetDetMainMatrix();
	Matrix* GetLowMinorMatrix(double** matrix, size_t j);
	double GetElemMul(size_t i, size_t j);

private:
	LinearSys MainSystem;
};