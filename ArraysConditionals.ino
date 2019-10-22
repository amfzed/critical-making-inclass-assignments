
int dataVal[] = {20, 70, 44, 61, 50, 31, 6};
String dataName[] = {"tina", "tim", "nick", "ali", "fred", "jia", "sasha"};
int dataCount = 7;

void setup() {
  // the array elements are numbered from 0 to (dataCount - 1).
  // use a for loop to print each item of the array
  Serial.begin(9600);
  for (int dataNum = 0; dataNum < dataCount; dataNum++) {
    Serial.print(dataName[dataNum]);
    Serial.print(" is ");
    Serial.print(dataVal[dataNum]);
    Serial.println(" years old.");

  }
}

void loop() {
  //assigning Oregon Trail deaths based on age.

  for (int dataNum = 0; dataNum < dataCount; dataNum++) {
    if (dataVal[dataNum] > 60) {
      Serial.print(dataName[dataNum]);
      Serial.println(" has died of dysentery.");
    } else if (dataVal[dataNum] > 39) {
      Serial.print(dataName[dataNum]);
      Serial.println(" has died of measles.");
    } else if (dataVal[dataNum] > 23) {
      Serial.print(dataName[dataNum]);
      Serial.println(" has drowned.");
    } else if (dataVal[dataNum] >= 18) {
      Serial.print(dataName[dataNum]);
      Serial.println(" has died of fever.");
    } else {
      Serial.print(dataName[dataNum]);
      Serial.println(" has successfully traversed the Oregon Trail.");
    }
  }
}
