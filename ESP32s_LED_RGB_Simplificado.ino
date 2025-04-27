/*********************************************************************************************************
                                        
                                        Projeto: LED RGB Simples
                      Neste projeto simples vamos aprender a usar um LED RGB como ESP32s
                           
**********************************************************************************************************/

// Associando as variáveis aos pinos do ESP32
#define PIN_RED    23 // GPIO23
#define PIN_GREEN  22 // GPIO22
#define PIN_BLUE   21 // GPIO21

void setup() {
  // Definindo o comportamento dos pinos
  pinMode(PIN_RED,   OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE,  OUTPUT);
}

void loop() {
  // Código da cor #00C9CC (R = 0,   G = 201, B = 204)
  analogWrite(PIN_RED,   0);
  analogWrite(PIN_GREEN, 201);
  analogWrite(PIN_BLUE,  204);
  delay(1000); // Mantém a cor por 1 segundo

  // Código da cor #F7788A (R = 247, G = 120, B = 138)
  analogWrite(PIN_RED,   247);
  analogWrite(PIN_GREEN, 120);
  analogWrite(PIN_BLUE,  138);
  delay(1000); // Mantém a cor por 1 segundo

  // Código da cor #34A853 (R = 52,  G = 168, B = 83)
  analogWrite(PIN_RED,   52);
  analogWrite(PIN_GREEN, 168);
  analogWrite(PIN_BLUE,  83);
  delay(1000); // Mantém a cor por 1 segundo
}
