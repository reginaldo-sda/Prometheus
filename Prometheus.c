/**
  Projeto Finalizador da UC1: O Robô Prometheus
  @authors Gabriel Alexandre, Felippe Camargo e Reginaldo Soares
*/

#include <DistanceSensor.h>

constexpr int TrigPin = 13;
constexpr int EchoPin = 12;

DistanceSensor<TrigPin, EchoPin> sensor;

bool girou;

void setup() {
  // Echo: pin12 / Trig: pin11
  Serial.begin(9600);

  // Pins dos sensores
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  // =================

  // Pins dos motores
  pinMode(5, OUTPUT);  // direito
  pinMode(6, OUTPUT);  // direito

  pinMode(9, OUTPUT);   // esquerdo
  pinMode(10, OUTPUT);  // esquerdo
  // =================

  sensor.begin();
}

void loop() {
  int distancia = sensor.tick();

  if (distancia == sensor.NREADY) return;

  Serial.print("Distancia do proximo obstaculo: ");
  Serial.print(distancia);
  Serial.println("cm");

  if(distancia == -2) {
    parar();
  } else if (distancia > 14) {
    andarPraFrente();

  } else if(distancia <= 14 && girou) {
    parar();
    delay(1100);

    andarPraEsquerda();
    delay(465);

    parar();
    delay(200);

    girou = false;

  } else if(distancia <= 14 && !girou) {
    parar();
    delay(1100);

    andarPraDireita();
    delay(273);

    parar();
    delay(200);

    girou = true;
  }
}

void andarPraFrente() {
  analogWrite(5, 120);  // andar para trás
  analogWrite(6, 0);    // andar para frente

  analogWrite(9, 116);  // andar para frente
  analogWrite(10, 0);   // andar para trás
}

void andarPraTras() {
  analogWrite(5, 0);    // Andar para trás
  analogWrite(6, 120);  // Andar para frente

  analogWrite(9, 0);
  analogWrite(10, 120);
}

void andarPraEsquerda() {
  analogWrite(5, 115);  // Andar para trás
  analogWrite(6, 0);    // Andar para frente

  analogWrite(9, 0);
  analogWrite(10, 100);
}

void andarPraDireita() {
  analogWrite(5, 0);    // Andar para trás
  analogWrite(6, 130);  // Andar para frente

  analogWrite(9, 130);
  analogWrite(10, 0);
}

void parar() {
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
}

void movimentosDeTeste() {
  andarPraFrente();

  delay(1800);

  andarPraTras();

  delay(1800);

  andarPraDireita();

  delay(1200);

  andarPraEsquerda();

  delay(1200);
}
