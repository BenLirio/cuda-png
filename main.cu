#include "cuda_runtime.h"
#include <stdio.h>
#include <stdlib.h>
#include <png.h>
#define N 256

__global__ void fill_matrix(char *M) {
  int idx = threadIdx.x;
  M[idx] = 200;
}

int main() {
  char *M, *d_M;
  M = (char *)malloc(N * N * N * sizeof(char));
  cudaMalloc((void **)&d_M, N * N * N * sizeof(char));
  cudaMemcpy(d_M, M, N * N * N * sizeof(char), cudaMemcpyHostToDevice);
  fill_matrix<<<1, N * N * N>>>(d_M);
  cudaMemcpy(M, d_M, N * N * N * sizeof(char), cudaMemcpyDeviceToHost);


  FILE *fp = fopen("animation.viz", "wb");

  return 0;
}