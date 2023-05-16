#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int** alloc_grid(int width, int height) {
    if (width <= 0 || height <= 0)
        return NULL;

    // Allocate memory for the rows
    int** grid = (int**)malloc(height * sizeof(int*));
    if (grid == NULL)
        return NULL;

    // Allocate memory for the columns and initialize to 0
    for (int i = 0; i < height; i++) {
        grid[i] = (int*)calloc(width, sizeof(int));
        if (grid[i] == NULL) {
            // Free previously allocated memory if allocation fails
            for (int j = 0; j < i; j++) {
                free(grid[j]);
            }
            free(grid);
            return NULL;
        }
    }

    return grid;
}
