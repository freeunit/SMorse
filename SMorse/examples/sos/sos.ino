#include <SMorse.h>

SMorse sos(3,50,10000);

void setup()
{
  
}
void loop()
{
 sos.dot();  sos.dot();  sos.dot(); 
 sos.end_char();
 sos.dash(); sos.dash(); sos.dash();
 sos.end_char();
 sos.dot(); sos.dot(); sos.dot();
 sos.end_word();
 delay(10000);
}
