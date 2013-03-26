//talking with Max/MSP
//Joao Menezes 2010

float a0 = 0; // declaring analog in's
float a1 = 0;
float a2 = 0;
float a3 = 0;
float a4 = 0;
float a5 = 0;
float a6 = 0;

float d2 = 0; // declaring digital in's
float d3 = 0;
float d4 = 0;
float d5 = 0;
float d6 = 0;
float d7 = 0;
float d8 = 0;
float d9 = 0;
float d10 = 0;
float d11 = 0;
float d12 = 0;
float d13 = 0;

void setup(){
  Serial.begin(9600); 
}

void loop (){
  a0 = analogRead(0);  
  Serial.print ("analog0"); // prepend na msg 
  Serial.print ("."); // isere espaço 
  Serial.print (a0); // leitura do valor
  Serial.println(); // print line (ascii = 13 -> enter) 
  a1 = analogRead(1);
  Serial.print("analog1");
  Serial.print(".");
  Serial.print(a1);
  Serial.println();
  a2 = analogRead(2);
  Serial.print("analog2");
  Serial.print(".");
  Serial.print(a2);
  Serial.println();
  a3 = analogRead(3);
  Serial.print("analog3");
  Serial.print(".");
  Serial.print(a3);
  Serial.println();
  a4 = analogRead(4);
  Serial.print("analog4");
  Serial.print(".");
  Serial.print(a4);
  Serial.println();
  a5 = analogRead(5);
  Serial.print("analog5");
  Serial.print(".");
  Serial.print(a5);
  Serial.println();
  
  d1 = digitalRead(1);
  Serial.print("digital1");
  Serial.print(".");
  Serial.print(d1);
  Serial.println();
 
  d2 = digitalRead(2);
  Serial.print("digital2");
  Serial.print(".");
  Serial.print(d2);
  Serial.println();

  d3 = digitalRead(3);
  Serial.print("digital3");
  Serial.print(".");
  Serial.print(d3);
  Serial.println();

  d4 = digitalRead(4);
  Serial.print("digital4");
  Serial.print(".");
  Serial.print(d4);
  Serial.println();
  
  d5 = digitalRead(5);
  Serial.print("digital5");
  Serial.print(".");
  Serial.print(d5);
  Serial.println();
  
  d6 = digitalRead(6);
  Serial.print("digital6");
  Serial.print(".");
  Serial.print(d6);
  Serial.println();

  d7 = digitalRead(7);
  Serial.print("digital7");
  Serial.print(".");
  Serial.print(d7);
  Serial.println();  
  
  d8 = digitalRead(8);
  Serial.print("digital8");
  Serial.print(".");
  Serial.print(d8);
  Serial.println();
  
  d9 = digitalRead(9);
  Serial.print("digital9");
  Serial.print(".");
  Serial.print(d9);
  Serial.println();

  d10 = digitalRead(10);
  Serial.print("digital10");
  Serial.print(".");
  Serial.print(d10);
  Serial.println();
  
  d11 = digitalRead(11);
  Serial.print("digital11");
  Serial.print(".");
  Serial.print(d11);
  Serial.println();

  d12 = digitalRead(12);
  Serial.print("digital12");
  Serial.print(".");
  Serial.print(d12);
  Serial.println();

  d13 = digitalRead(13);
  Serial.print("digital13");
  Serial.print(".");
  Serial.print(d13);
  Serial.println();

}

