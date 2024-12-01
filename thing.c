#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <immintrin.h>
#include <time.h>

extern void accelerationasm(int n, double accelerationMatrix[][3], double *acceleration);

int main() {
    int rows;

    while (1) {
        printf("Enter number of rows (1 to 10000) or 0 to exit: ");
        scanf("%d", &rows);

        if (rows == 0) {
            break;
        }

        if (rows < 1 || rows > 10000) {
            printf("Invalid input. Please enter a number between 1 and 10000.\n");
            continue;
        }

        double accelerationMatrix[rows][3];

        srand(time(NULL));
        for (int i = 0; i < rows; i++) {
            accelerationMatrix[i][0] = (rand() % 100);
            accelerationMatrix[i][1] = (rand() % 101) + 100;
            accelerationMatrix[i][2] = (rand() % 10) + 1;
        }

        printf("Input Matrix:\n");
        for (int i = 0; i < rows; i++) {
            printf("%.2f, %.2f, %.2f\n", accelerationMatrix[i][0], accelerationMatrix[i][1], accelerationMatrix[i][2]);
        }

        double *acceleration = (double*)malloc(rows * sizeof(double));

        clock_t start = clock();
        accelerationasm(rows, accelerationMatrix, acceleration);
        clock_t end = clock();

        double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
        printf("Time taken to compute acceleration: %.6f seconds\n", elapsed_time);

        printf("\nAcceleration (m/s^2) values:\n");
        for (int i = 0; i < rows; i++) {
            printf("acceleration[%d] = %.0f m/s^2\n", i, acceleration[i]);
        }

        free(acceleration);
    }

    return 0;
}
