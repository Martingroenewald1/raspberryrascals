

void setup() {

  pinMode(13, OUTPUT);
  Serial.begin(9600); 
}

// the loop function runs over and over again forever
void loop() {
  
  analogWrite(13, 128);
  
  float analogValue = analogRead(A0);  // Read the analog input from pin A0
  Serial.println(analogValue);   // Print the value to the serial monitor
  delay(500);  // Delay for readability (0.5 seconds)
}
