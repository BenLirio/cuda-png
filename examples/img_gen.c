#include <stdio.h>
#include <stdlib.h>

int main() {
  int number_of_dimensions = 2;
  int width = 800;
  int height = 400;
  float *data = (float*)malloc(
    width*
    height*
    sizeof(float)
  );
  for (int y = 0; y < height; y++) {
    for (int x = 0; x < width; x++) {
      data[y*width + x] = (y+x) % 100;
    }
  }

  printf("%d,%d,%d",
    number_of_dimensions,
    height,
    width
  );
  for (int y = 0; y < height; y++) {
    for (int x = 0; x < width; x++) {
      printf(",%f", data[y*width + x]);
    }
  }
}