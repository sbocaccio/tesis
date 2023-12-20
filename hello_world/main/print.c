#include <stdio.h>
#include <time.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void printFromAnotherFile() {
    double time = 1.0 * clock() / CLOCKS_PER_SEC;
    printf(" - The clock time is: %.10f \n", time);
    vTaskDelay(1000 / portTICK_PERIOD_MS);
}