//
// Created by alexey on 21.04.17.
//

#include <omp.h>
#include <cstdio>

int main(){
#pragma omp parallel num_threads(3)
    {
        int task_id = omp_get_thread_num();
        if (task_id == 0)
        {
            printf("master\n");
        } else{
            printf("slave %d\n", task_id);
        }
    }
    return 0;
}