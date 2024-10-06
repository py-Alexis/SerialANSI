#include SerialANSI.h

void testParameter(String parameter, String name) {
  Serial.print(parameter);
  Serial.print(name);
  Serial.println(SerialRESET);  Reset after each test
}

void setup() {
  Serial.begin(9600);
  delay(500);  Give Serial Monitor time to open

  Serial.println();
  SerialTitle(=== Testing Message Functions ===);

  SerialLog(This is a log message using SerialLog);
  SerialImportant(This is an important message using SerialImportant);
  SerialCritical(This is a critical message using SerialCritical);
  SerialSuccess(This is a success message using SerialSuccess);
  SerialWarning(This is a warning message using SerialWarning);
  SerialInfo(This is an info message using SerialInfo);
  SerialDebug(This is a debug message using SerialDebug);
  SerialHighlight(This message is highlighted using SerialHighlight);
    Serial.println(SerialClearCurLine Clears the current line.);
  Serial.println(SerialClearPrevLine Clears the previous line.);
  Serial.println(SerialClearSerial Clears the entire screen.);

  Serial.println();
  SerialTitle(=== Testing ANSI Codes ===);

   Test each ANSI code
  testParameter(SerialRESET, SerialRESET);
  testParameter(SerialBOLD, SerialBOLD);
  testParameter(SerialFAINT, SerialFAINT);
  testParameter(SerialITALIC, SerialITALIC);
  testParameter(SerialUNDERLINE, SerialUNDERLINE);
  testParameter(SerialREVERSE, SerialREVERSE);
  testParameter(SerialCONCEAL, SerialCONCEAL);
  testParameter(SerialCROSSED_OUT, SerialCROSSED_OUT);
  testParameter(SerialDOUBLE_UNDERLINE, SerialDOUBLE_UNDERLINE);
  testParameter(SerialNORMAL_INTENSITY, SerialNORMAL_INTENSITY);
  testParameter(SerialNOT_ITALIC, SerialNOT_ITALIC);
  testParameter(SerialUNDERLINE_OFF, SerialUNDERLINE_OFF);
  testParameter(SerialINVERSE_OFF, SerialINVERSE_OFF);
  testParameter(SerialREVEAL, SerialREVEAL);
  testParameter(SerialNOT_CROSSED, SerialNOT_CROSSED);

  Serial.println();
  SerialTitle(=== Testing Foreground Colors ===);

   Foreground color tests
  testParameter(SerialFG_BLACK, SerialFG_BLACK);
  testParameter(SerialFG_RED, SerialFG_RED);
  testParameter(SerialFG_GREEN, SerialFG_GREEN);
  testParameter(SerialFG_YELLOW, SerialFG_YELLOW);
  testParameter(SerialFG_BLUE, SerialFG_BLUE);
  testParameter(SerialFG_MAGENTA, SerialFG_MAGENTA);
  testParameter(SerialFG_CYAN, SerialFG_CYAN);
  testParameter(SerialFG_WHITE, SerialFG_WHITE);

  Serial.println();
  SerialTitle(=== Testing Background Colors ===);

   Background color tests
  testParameter(SerialBG_BLACK, SerialBG_BLACK);
  testParameter(SerialBG_RED, SerialBG_RED);
  testParameter(SerialBG_GREEN, SerialBG_GREEN);
  testParameter(SerialBG_YELLOW, SerialBG_YELLOW);
  testParameter(SerialBG_BLUE, SerialBG_BLUE);
  testParameter(SerialBG_MAGENTA, SerialBG_MAGENTA);
  testParameter(SerialBG_CYAN, SerialBG_CYAN);
  testParameter(SerialBG_WHITE, SerialBG_WHITE);

  Serial.println();
  SerialTitle(=== Testing Default Colors ===);

  Serial.println();
  testParameter(SerialFG_DEFAULT, SerialFG_DEFAULT);
  testParameter(SerialBG_DEFAULT, SerialBG_DEFAULT);

  Serial.println();
  SerialTitle(=== Testing Additional Effects ===);

  Serial.println();
  testParameter(SerialOVERLINED, SerialOVERLINED);
  testParameter(SerialNOT_OVERLINED, SerialNOT_OVERLINED);

  Serial.println();
  SerialTitle(=== Testing Bright Foreground and Background Colors ===);
  
  Serial.println();
  testParameter(SerialBRIGHT_FG_BLACK, SerialBRIGHT_FG_BLACK);
  testParameter(SerialBRIGHT_FG_RED, SerialBRIGHT_FG_RED);
  testParameter(SerialBRIGHT_FG_GREEN, SerialBRIGHT_FG_GREEN);
  testParameter(SerialBRIGHT_FG_YELLOW, SerialBRIGHT_FG_YELLOW);
  testParameter(SerialBRIGHT_FG_BLUE, SerialBRIGHT_FG_BLUE);
  testParameter(SerialBRIGHT_FG_MAGENTA, SerialBRIGHT_FG_MAGENTA);
  testParameter(SerialBRIGHT_FG_CYAN, SerialBRIGHT_FG_CYAN);
  testParameter(SerialBRIGHT_FG_WHITE, SerialBRIGHT_FG_WHITE);

  Serial.println();
  testParameter(SerialBRIGHT_BG_BLACK, SerialBRIGHT_BG_BLACK);
  testParameter(SerialBRIGHT_BG_RED, SerialBRIGHT_BG_RED);
  testParameter(SerialBRIGHT_BG_GREEN, SerialBRIGHT_BG_GREEN);
  testParameter(SerialBRIGHT_BG_YELLOW, SerialBRIGHT_BG_YELLOW);
  testParameter(SerialBRIGHT_BG_BLUE, SerialBRIGHT_BG_BLUE);
  testParameter(SerialBRIGHT_BG_MAGENTA, SerialBRIGHT_BG_MAGENTA);
  testParameter(SerialBRIGHT_BG_CYAN, SerialBRIGHT_BG_CYAN);
  testParameter(SerialBRIGHT_BG_WHITE, SerialBRIGHT_BG_WHITE);

  
}

void loop() {
   No action needed in loop for this test
}
