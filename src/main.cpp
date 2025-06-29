#include <stdio.h>

extern "C"
{
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
}

#include "uart_comm.hpp"

extern "C" void app_main()
{
    uart_init();

    xTaskCreatePinnedToCore(
        uart_reader_task, // function
        "UART Reader",    // task name
        4096,             // stack size
        nullptr,          // parameter
        10,               // priority
        nullptr,          // task handle
        1                 // core (APP CPU)
    );

    // TODO: radar parsing and inference tasks
}
