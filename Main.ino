const int pinoLuz = 4;
int sinalLuz;
const int SlideChuva = 23;
bool Dancadachuva;

void setup() { 
  Serial.begin(115200);
  Serial.println("Relatorio");
  pinMode(pinoLuz, INPUT);
  pinMode(SlideChuva, INPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
}

void loop() { 
  sinalLuz = analogRead(pinoLuz);   
  Serial.print("Valor do sensor de Luz = ");
  Serial.println(sinalLuz);

  Dancadachuva = digitalRead(SlideChuva);

  if(Dancadachuva == HIGH && sinalLuz >= 1000) {
   Serial.println("Esta Chovendo!");
    // (Red,Yellow,Green)
    semaforovp (0, 0, 1);
    semaforows (1, 0, 0);
    delay(7000);
    semaforovp (0, 1, 0);
    semaforows (1, 0, 0);
    delay(3000);
    semaforovp (1, 0, 0);
    semaforows (1, 0, 0);
    delay(1000);
    semaforovp (1, 0, 0); 
    semaforows (0, 0, 1); 
    delay(3000);
    semaforovp (1, 0, 0); 
    semaforows (0, 1, 0);
    delay(3000);
    semaforovp (1, 0, 1); 
    semaforows (1, 0, 0);
    delay(1000);

  } else {

    Serial.println("Esta um dia Lindo!");
    semaforovp (0, 0, 1);
    semaforows (1, 0, 0);
    delay(10000);
    semaforovp (0, 1, 0);
    semaforows (1, 0, 0);
    delay(5000);
    semaforovp (1, 0, 0);
    semaforows (1, 0, 0);
    delay(2000);
    semaforovp (1, 0, 0); 
    semaforows (0, 0, 1); 
    delay(10000);
    semaforovp (1, 0, 0); 
    semaforows (0, 1, 0);
    delay(5000);
    semaforovp (1, 0, 1); 
    semaforows (1, 0, 0);
    delay(2000);
  }
}

void semaforovp(bool EstadoVermelho, bool EstadoAmarelo, bool EstadoVerde){
  digitalWrite(5, EstadoVermelho);
  digitalWrite(18, EstadoAmarelo);
  digitalWrite(19, EstadoVerde);
}

void semaforows(bool EstadoVermelho, bool EstadoAmarelo, bool EstadoVerde){
  digitalWrite(13, EstadoVermelho);
  digitalWrite(14, EstadoAmarelo);
  digitalWrite(27, EstadoVerde); 
}
