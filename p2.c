#include <stdio.h>
#include <omp.h>
int main() {
int n;
printf("Enter number of iterations: ");
scanf("%d", &n);
#pragma omp parallel
{
int tid = omp_get_thread_num();
#pragma omp for schedule(static,2)
for (int i = 0; i < n; i++) {
printf("Thread %d executes iteration %d\n", tid, i);
}
}
return 0;
}
