#ifndef __homework2_linalg_h
#define __homework2_linalg_h

/*
  vec_add

  Computes the sum of two vectors.

  Parameters
  ----------
  out : double*
    Storage for the resulting sum vector.
  v : double*
  w : double*
    The two vectors to sum.
  N : int
    The length of the vectors, `out`, `v`, and `w`.

  Returns
  -------
  out : double*
    (Output by reference.) The sum of `v` and `w`.
*/
void vec_add(double* out, double* v, double* w, int N);

void vec_sub(double* out, double* v, double* w, int N);

double vec_norm(double* v, int N);

// represent out, A, and B by arrays of length M*N
void mat_add(double* out, double* A, double* B, int M, int N);

// represent A by an array of length M*N
void mat_vec(double* out, double* A, double* x, int M, int N);

// A is MxN, B is NxK, and out is MxK (all as long arrays)
void mat_mat(double* out, double* A, double* B, int M, int N, int K);

#endif
