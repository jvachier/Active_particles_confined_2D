#include <iostream>
#include <random>
#include <cstring>
#include <stdio.h>
#include <cmath>
#include <time.h>
#include <omp.h> //import library to use pragma

void initialization(
	double *x, double *y, int Particles,
	std::default_random_engine &generator, std::uniform_real_distribution<double> &distribution);