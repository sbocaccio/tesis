#include <stdio.h>
#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_chip_info.h"
#include "esp_flash.h"
#include "esp_system.h"
#include <sys/time.h>
#include "types.h"

void getTime() {
    // A comment
    double time = 1.0*clock()/ CLOCKS_PER_SEC;

    printf(" - The clock time is: %.10f \n", time);
    vTaskDelay(1000 / portTICK_PERIOD_MS);
}

void initLib(){
    printf("Inicie la libreria \n");
}

enum OS getOs(){
  printf("Operating System: %d\n", ESP32);
  return ESP32;
}
