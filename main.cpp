#include <iostream>
#include "lib.h"
using namespace std;

float max(const float arr[], int dim) ;

int main() {
    int dim;
    cin>>  dim;
    float arr[dim];
    for(int i=0; i<dim; i++) cin>>arr[i];
    cout<<max(arr,dim);

    return 0;
}
