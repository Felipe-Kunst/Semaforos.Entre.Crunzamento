# Simulação de Cenários - Semáforo com Sensores de Chuva
Descrição do Projeto
Este projeto simula o funcionamento dos semáforos no cruzamento da Avenida Washington Soares com a Rua Valmir Pontes (esquina da Unifor). O sistema é aprimorado com a adição de dois sensores: um sensor de chuva (digital) e um sensor de luminosidade (analógico). O semáforo ajusta automaticamente o tempo de passagem de veículos com base nas condições climáticas.

Funcionalidades
Simulação dos semáforos: O programa simula o funcionamento dos semáforos presentes no cruzamento especificado.
Sensores:
Sensor de chuva (digital): Detecta se está chovendo.
Sensor de luminosidade (analógico): Mede a intensidade da luz para determinar se está escuro.
Ajuste de tempo:
Aumenta o tempo de passagem de veículos quando está chovendo e escuro.
Mantém o tempo normal de passagem em dias claros e sem chuva.
Requisitos
Arduino com suporte para leitura analógica e digital.
Sensores de chuva e luminosidade.
LEDs ou outros indicadores para representar os estados dos semáforos.
Configuração do Hardware
pinoLuz (4): Entrada analógica para o sensor de luminosidade.
SlideChuva (23): Entrada digital para o sensor de chuva.
Saídas para os LEDs dos semáforos:
Avenida Washington Soares: pinos 13 (vermelho), 14 (amarelo), 27 (verde).
Rua Valmir Pontes: pinos 5 (vermelho), 18 (amarelo), 19 (verde).

Link para visualização do Projeto https://wokwi.com/projects/402515596468925441
