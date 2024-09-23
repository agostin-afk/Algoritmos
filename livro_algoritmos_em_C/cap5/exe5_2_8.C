#include <stdio.h>

int main(){
    // float vetor_global[3][3] = {0.0};
    float global_mean = 0.0;
    float vetor_individual[3] ={0.0};
    float aux = 0.0;
    int count = 0;
    for(int i = 0; i< 3; i++){
        printf("Enter student's %d scores: \n", i+1);
        for(int j = 0; j< 3; j++){
            scanf("%f", &aux);
            // vetor_global[i][j] = aux;
            global_mean += aux;
            vetor_individual[i] += aux;
            count++;
        }
        vetor_individual[i] /= 3;
    }
    global_mean /= count;
    printf("Global mean: %.2f\n", global_mean);
    printf("Individual means: ");
    for(int i = 0; i < 3; i++){
        printf("\n\t%.2f", vetor_individual[i]);
    }
    return 0;
}