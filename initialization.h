// #ifndef INITIALIZATION_H
// #define INITIALIZATION_H

using namespace std;

void initialization(
	double *, double *, int ,
	default_random_engine, uniform_real_distribution<double>
);

void check_nooverlap(
	double *, double *, int ,
	double , int ,
	default_random_engine, uniform_real_distribution<double>
);

// #endif