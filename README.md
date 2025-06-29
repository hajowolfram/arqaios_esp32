# arqaios_esp32

ESP32 firmware for interfacing with the IWR6843 radar sensor using FreeRTOS.

## ️Getting Started

This project uses [PlatformIO](https://platformio.org/) for build and dependency management. No manual ESP-IDF installation is required.

### 1. Install PlatformIO

- **VSCode Plugin (Recommended):**  
  Install the [PlatformIO IDE extension](https://marketplace.visualstudio.com/items?itemName=platformio.platformio-ide)

- **Or via pip:**  
  ```bash
  pip install platformio
  ```

### 2. Clone project
  ```bash
    git clone git@github.com:hajowolfram/arqaios_esp32.git 
    cd arqaios_esp32
  ```
 
### 3. Build and upload firmware
  ```bash
    pio run --target upload
  ```
