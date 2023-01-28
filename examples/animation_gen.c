#include <stdio.h>
#include <stdlib.h>

int main() {
  int number_of_dimensions = 3;
  int width = 800;
  int height = 400;
  int frames = 100;
  float *data = (float*)malloc(
    frames*
    width*
    height*
    sizeof(float)
  );
  for (int i = 0; i < frames; i++) {
    for (int y = 0; y < height; y++) {
      for (int x = 0; x < width; x++) {
        data[(i*height*width) + (y*width) + x] = (y+x) % (i+1);
      }
    }
  }

  printf("%d,%d,%d,%d",
    number_of_dimensions,
    frames,
    height,
    width
  );
  for (int i = 0; i < frames; i++) {
    for (int y = 0; y < height; y++) {
      for (int x = 0; x < width; x++) {
        printf(",%f", data[(i*height*width) + (y*width) + x]);
      }
    }
  }
}