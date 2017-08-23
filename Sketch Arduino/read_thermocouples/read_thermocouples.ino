/*
  read_thermocouples

  Reads an analog input on pin 0 and 1, prints the temperature of the two thermocouples to the Serial Monitor.
  Attach the left pin to +5V, the second to GND, the third to pin A0 and the last to pin A1.

  This example code is in the public domain.

*/

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  // read the input on analog pin 0:
  int v1 = analogRead(A0);
  // read the input on analog pin 1:
  int v2 = analogRead(A1);

  // the values will be transformed into the real voltage by v * (5.0 / 1023.0)
  // the real voltages will be multipy by 100 because the IC AD595 emits 10mV/°C 
  
  // print out the value you read:
  Serial.print("t1 = ");
  Serial.println(v1* (5.0 / 1023.0)*100);
  Serial.print("t2 = ");
  Serial.println(v2* (5.0 / 1023.0)*100);
  Serial.println();
  delay(1000);        // delay in between reads for stability
}
