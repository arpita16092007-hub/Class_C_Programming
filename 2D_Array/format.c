#include <stdio.h>

int main() {
   // int arr[rows][columns] = {{8, 10}, {2, 3}, {29, 3}};
   int arr[3][2] ={{8,10},{5, 16},{15, 18}};

   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 2; j++) {
         printf("%d ", arr[i][j]);
      }
      printf("\n");
   }
   return 0;
}
