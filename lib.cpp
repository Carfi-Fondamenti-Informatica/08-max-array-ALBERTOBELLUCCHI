
//
// Created by alber on 09/12/2022.
//

#include "lib.h"
float max(const float arr[], int dim) {
    int pos_max = 0;
    float max = arr[0];
    for (int j = 0; j < dim; j++) {
        if (arr[j] > max) {
            max = arr[j];
            pos_max = j;
        }
    }
    return arr[pos_max];
}
