#include "uart_comm.hpp"

extern "C"
{
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/uart.h"
#include "driver/gpio.h"
}

void uart_init()
{
    uart_config_t uart_config = {
        .baud_rate = 115200,
        .data_bits = UART_DATA_8_BITS,
        .parity = UART_PARITY_DISABLE,
        .stop_bits = UART_STOP_BITS_1,
        .flow_ctrl = UART_HW_FLOWCTRL_DISABLE,
        .rx_flow_ctrl_thresh = 0,
        .source_clk = UART_SCLK_APB};

    uart_param_config(UART_NUM_1, &uart_config);
    uart_set_pin(UART_NUM_1, GPIO_NUM_4, GPIO_NUM_5, UART_PIN_NO_CHANGE, UART_PIN_NO_CHANGE); // TX, RX
    uart_driver_install(UART_NUM_1, 4096, 0, 0, NULL, 0);
}

void uart_reader_task(void *param)
{
    uint8_t data[1024];
    while (true)
    {
        int len = uart_read_bytes(UART_NUM_1, data, sizeof(data), 20 / portTICK_PERIOD_MS);
        if (len > 0)
        {
            // TODO: parser queue or TLV parser
        }
    }
}
