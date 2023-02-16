#include <stdio.h>
int main() {
  int frame_count = 256;
  int height = 256;
  int width = 256;
  for (int i = 0; i < frame_count; i++) {
    for (int j = 0; j < height; j++) {
      for (int k = 0; k < width; k++) {
        printf("%d", (i * j * k) % 1024);
        if (i != frame_count - 1 || j != height - 1 || k != width - 1) {
          printf(",");
        }
      }
    }
  }
}