// Inclui a biblioteca padrão do SDK
#include "pico/stdlib.h"

int main() {

    // cria uma constante com o pino padrão do led
    const uint LED_PIN = PICO_DEFAULT_LED_PIN;
    
   /*
    * Inicia o Pino de GPIO e o configura como saída
    */
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    
    // Loop infinito para o funcionamento do pisca pisca
    while (true) {
        gpio_put(LED_PIN, 1);
        sleep_ms(250);
        gpio_put(LED_PIN, 0);
        sleep_ms(250);
    }
}
