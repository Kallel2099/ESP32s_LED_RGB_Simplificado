/**********************************************************************************************************
                           
                                    Projeto: LED RGB com funções
              Neste projeto vamos controlar um LED RGB conectado a um ESP32s através de funções

**********************************************************************************************************/
// Associa as variáveis ao pinos do ESP32s
#define PIN_RED    23 // GPIO23
#define PIN_GREEN  22 // GPIO22
#define PIN_BLUE   21 // GPIO21

void setup() {
  // Define o comportamento dos pinos
  pinMode(PIN_RED,   OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE,  OUTPUT);

  //Velocidade de transmissão da porta serial
  Serial.begin(115200); //Usado para debug
}

void loop() {
  // Código da cor #00C9CC (R = 0,   G = 201, B = 204)
  setColor(0, 201, 204);
  delay(1000); // Mantém a cor por 1 segundo

  // Código da cor #F7788A (R = 247, G = 120, B = 138)
  setColor(247, 120, 138);
  delay(1000); // Mantém a cor por 1 segundo

  // Código da cor #34A853 (R = 52,  G = 168, B = 83)
  setColor(52, 168, 83);
  delay(1000); // Mantém a cor por 1 segundo
}

// Função que controla a cor do LED RGB
void setColor(int R, int G, int B) {
  analogWrite(PIN_RED,   R);
  analogWrite(PIN_GREEN, G);
  analogWrite(PIN_BLUE,  B);
}
