#include <iostream>

// CUDA kernel function
__global__ void add(int a, int b, int *c) {
    *c = a + b;
}

int main() {
    int a = 5, b = 7, c;
    int *d_c;

    // Allocate memory on GPU
    cudaMalloc((void **)&d_c, sizeof(int));

    // Launch kernel with 1 block and 1 thread
    add<<<1, 1>>>(a, b, d_c);

    // Copy result from GPU to CPU
    cudaMemcpy(&c, d_c, sizeof(int), cudaMemcpyDeviceToHost);

    // Print result
    std::cout << "Result from GPU: " << c << std::endl;

    // Free allocated memory
    cudaFree(d_c);

    return 0;
}
