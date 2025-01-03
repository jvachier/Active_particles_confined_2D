#include <omp.h>
#include <time.h>
#include <stdio.h>
#include <iostream>
#include <random>
#include <cstring>
#include <cmath>

void update_position(
  double *x, double *y, double phi, double prefactor_e, int Particles,
  double delta, double De, double Dt, double xi_e, double xi_px,
  double xi_py, double vs, double prefactor_xi_px, double prefactor_xi_py,
  double r, double prefactor_interaction,
  std::default_random_engine &generator, 
  std::normal_distribution<double> &Gaussdistribution, 
  std::uniform_real_distribution<double> &distribution_e);
