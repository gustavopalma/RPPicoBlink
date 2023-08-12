# Determina a versão mínima do CMAKE suportada pelo projeto
cmake_minimum_required(VERSION 3.12)

# O script 'pico_sdk_import.cmake' é o responsável pela configuração
# dos compiladores que devem ser utilizados bem como os caminhos para
# as bibliotecas para que o software seja devidamente linkado
include(pico_sdk_import.cmake)

# Diretiva padrão utilizada para definir o nome do projeto e as 
# tecnologias utilizadas C,C++ e Assembly
project(blink C CXX ASM)

# Configura os Padrões de C e C++ para serem utilizados no projeto
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Configura a placa alvo da compilação
set(PICO_BOARD pico)

# Inicializa o SDK da raspberry pi pico 
pico_sdk_init()

# Marca todos os arquivos fontes e o nome que o binário executável 
# terá no final
add_executable(blink
        main.c
        )

# Define as bibliotecas necessárias para que o programa seja linkado
target_link_libraries(blink pico_stdlib)

# Cria os arquivos binários no forma uf2 após a compilação
pico_add_extra_outputs(blink)