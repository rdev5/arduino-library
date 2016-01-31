/*
 * Lights LED for a total number of times each lasting a specified duration in milliseconds.
 */
void blink(int total, int onDuration = 100, int offDuration = 100)
{
  for (int i = 1; i <= total; i++)
  {
    digitalWrite(LED, HIGH);
    delay(onDuration);
    
    digitalWrite(LED, LOW);
    delay(offDuration);
  }
}

/*
 *  Dumps bytes hex-encoded as in 0x0000
 */
void dump(byte *bytes, int len)
{
  Serial.print("0x");
  for (int i = 0; i < len; i++)
  {
    if (bytes[i] < 0x10)
      Serial.print('0');

    Serial.print(bytes[i], HEX);
  }

  Serial.print("\n");
}

/*
 * Waits for specified number of bytes to be read from Serial.
*/
void waitForBytes(byte *data, int len)
{
  int i = 0;
  while (i < len)
  {
    if (Serial.available())
      data[i++] = Serial.read();
  }
}
