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
