// Inclui a biblioteca padrão do SDK
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

int main() {

   /*
    * No Modelo Raspberry Pi Pico W o LED Onboard está ligado
    * ao Módulo wifi, dessa forma é necessário inicializa-lo 
    * para então executar o código
    */
    cyw43_arch_init();

    // Loop infinito para o funcionamento do pisca pisca
    while (true) {
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
        sleep_ms(250);
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
        sleep_ms(250);
    }
}
