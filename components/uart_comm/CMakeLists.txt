idf_component_register(SRCS "src/uart_comm.cpp"
                       INCLUDE_DIRS "include"
                       PRIV_REQUIRES esp_driver_uart
                       esp_driver_gpio)
