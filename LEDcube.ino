void setup() {
 for(int i=51;i<=53;i++)            //set arduino pins 51-53 which are connected to the layers of the ledcube as output pins.
 pinMode(i,OUTPUT);
 for(int i=31;i<=39;i++)            //set arduino pins 31-39 which are connected to the columns of the ledcube as output pins.
 pinMode(i,OUTPUT);
}


 void l1()                                             // enables layer1 while disabling other 2 layers.
 {
  digitalWrite(51,HIGH);
  digitalWrite(52,LOW);
  digitalWrite(53,LOW);
   
 }                                  
 void l2()                                           // enables layer3 while disabling other 2 layers.
 {
  digitalWrite(51,LOW);
  digitalWrite(52,HIGH);
  digitalWrite(53,LOW); 
 }
 void l3 ()                                          // enables layer3 while disabling
 other 2 layers.
 {
  digitalWrite(51,LOW);
  digitalWrite(52,LOW);
  digitalWrite(53,HIGH);
 }
 void centreon ()                                   // centre coluumn 5 will be enabled while all other columns will be disabled.
 {
    for(int i=31;i<=39;i++)
  {
    if (i==35)digitalWrite(i,HIGH); 
    else digitalWrite(i,LOW);
  }
  delay(100);
 }
 void corneron()                                  // all the corner columns of the ledcube i.e column no 1,3,7,9 will be enabled while all other columns disabled.
 {
     for(int i=31;i<=39;i++)
     {
        if(i==31||i==33||i==37||i==39)
         digitalWrite(i,HIGH);
       else digitalWrite(i,LOW); 
       delay(10);
     } 
 }
 void scentreon()                                // the centre columns of all the side faces of the ledcube 2,4,6,8 will be enabled while all other columns disabled.

 {
      for(int i=31;i<=39;i++)
     {
        if(i==32||i==34||i==36||i==38)
         digitalWrite(i,HIGH);
       else digitalWrite(i,LOW); 
       delay(10);
     }
 }
  void lh ()                                              // all the columns are enabled.
 {
     for(int i=31;i<=39;i++)
{
  digitalWrite(i,HIGH);
  delay(5);  
}
   
 }
 void ll()                                                // all the columns are disabled.
 {
    for(int z=31;z<=39;z++)
{
  digitalWrite(z,LOW);
}
delay(200);
 }
 void alllayershigh()                                    // all the layers are enabled.
{
  digitalWrite(51,HIGH);
  digitalWrite(52,HIGH);
  digitalWrite(53,HIGH);
}

void f1()                                                 // frame1: leds of the 5th column (centre of ledcube will glow).
{ alllayershigh();
  for(int i=31;i<=39;i++)
  {
    if(i==35)digitalWrite(i,HIGH);
    else digitalWrite(i,LOW);
    delay(10);
  }
  delay(100);
}

void f2()                                                // frame2: leds of column 5 and column 2 will glow simultaneously while other columns are off.
{
  alllayershigh();
    for(int i=31;i<=39;i++)
  {
    if(i==35 || i==32)digitalWrite(i,HIGH);
    else digitalWrite(i,LOW);
    delay(5);
  }
  delay(100);
}
void f3()                                                        // frame3: leds of column 5,2,3 will glow simultaneously while other columns are off.
{
  alllayershigh();
    for(int i=31;i<=39;i++)
  {
    if(i==35 || i==32||i==33)digitalWrite(i,HIGH);
    else digitalWrite(i,LOW);
    delay(5);
  }
  delay(100);
}
void f4()                                                    // frame4: leds of column 5,2,3,4 will glow simultaneously while other columns are off.
{
  alllayershigh();
    for(int i=31;i<=39;i++)
  {
    if(i==35 || i==32||i==33||i==34)digitalWrite(i,HIGH);
    else digitalWrite(i,LOW);
    delay(5);
  }
  delay(100);
}
void f5()                                                                         // frame5: leds of column 5,2,3,4,9 will glow simultaneously while other columns are off.
{
  alllayershigh();
    for(int i=31;i<=39;i++)
  {
    if(i==35 || i==32||i==33||i==34||i==39)digitalWrite(i,HIGH);
    else digitalWrite(i,LOW);
    delay(5);
  }
  delay(100);
}
  void f6()                                                                       // frame6: leds of column 5,2,3,4,9,8 will glow simultaneously while other columns are off.
{
  alllayershigh();
    for(int i=31;i<=39;i++)
  {
    if(i==35 || i==32||i==33||i==34||i==39||i==38)digitalWrite(i,HIGH);
    else digitalWrite(i,LOW);
    delay(5);
  }
  delay(100);
}
void f7()                                                                      // frame7: leds of column 5,2,3,4,9,8,7 will glow simultaneously while other columns are off.
{
  alllayershigh();
    for(int i=31;i<=39;i++)
  {
    if(i==35 || i==32||i==33||i==34||i==39||i==38||i==37)digitalWrite(i,HIGH);
    else digitalWrite(i,LOW);
    delay(5);
  }
  delay(100);
}
void f8()                                                                  // frame8: leds of column 5,2,3,4,9,8,7,6 will glow simultaneously while other columns are off.
{
  alllayershigh();
    for(int i=31;i<=39;i++)
  {
    if(i==35 || i==32||i==33||i==34||i==39||i==38||i==37||i==36)digitalWrite(i,HIGH);
    else digitalWrite(i,LOW);
    delay(5);
  }
  delay(100);
}
void f9()                                                                      // frame9: all the leds are on.
{
  alllayershigh();
    for(int i=31;i<=39;i++)
  {
    digitalWrite(i,HIGH);
    delay(5);
  }
  delay(100);
}
void layerlow()                                                                //led cube will remain off. 
{
  for(int i=51;i<=53;i++)
  digitalWrite(i,LOW);
  for(int i=31;i<=39;i++)
  digitalWrite(i,LOW);
}
void seq1()                                                                 /* layer1 will be enabled other 2 layers will be disabled.
{                                                                              all the columns from 9 to 1 will be enabled sequentially with a 
  l1();                                                                        delay of 100ms.    
  for(int k=39; k>=31;k--)                                                     so the leds of the layer1 will glow sequentially from column 9 to 1.*/
  {
    digitalWrite(k,HIGH);
    delay(100);
  }
}
void seq2()                                                                  /* layer2 will be enabled other 2 layers will be disabled.
{                                                                               all the columns from 1 to 9 will be enabled sequentially with a 
  l2();                                                                         delay of 100 ms.
  for(int k=31; k<=39;k++)                                                      so the leds of layer2 will glow sequentially from column 1 to 9 .*/
  {
    digitalWrite(k,HIGH);
    delay(100);
  }
}
void seq3()                                                                  /* layer 3 will be enabled other 2 layers will be disabled.
{                                                                               all the columns from 9 to 1 will be enabled sequentially with a 
  l3();                                                                         delay of 100 ms.
  for(int k=39; k>=31;k--)                                                      so the leds of layer 3 will glow sequentially from 9 to 1.*/
  {
    digitalWrite(k,HIGH);
    delay(100);
  }
}

void cycle()
{
   for(int z=0;z<3;z++)                                
{
for(int i=0;i<5;i++)
{ 
l1();
for(int j= 31;j<=39;j++)
{
  if(j==31 || j==36 || j==37)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
l2();
for(int j= 31;j<=39;j++)
{
  if(j==32 || j==35 || j==38)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
  
l3();
for(int j= 31;j<=39;j++)
{
  if(j==33 || j==34 || j==39)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
}
 for(int k=31;k<=39;k++)
  {
    digitalWrite(k,LOW);
  }
delay(50);

for(int i=0;i<5;i++)
{ 
l1();
for(int j= 31;j<=39;j++)
{
  if(j==31 || j==32 || j==33)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
l2();
for(int j= 31;j<=39;j++)
{
  if(j==34 || j==35 || j==36)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
  
l3();
for(int j= 31;j<=39;j++)
{
  if(j==38 || j==39 || j==37)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
}
 for(int k=31;k<=39;k++)
  {
    digitalWrite(k,LOW);
  }
delay(50);


for(int i=0;i<5;i++)
{ 
l1();
for(int j= 31;j<=39;j++)
{
  if(j==34 || j==39 || j==33)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
l2();
for(int j= 31;j<=39;j++)
{
  if(j==32 || j==35 || j==38)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
  
l3();
for(int j= 31;j<=39;j++)
{
  if(j==31 || j==36 || j==37)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
}
 for(int k=31;k<=39;k++)
  {
    digitalWrite(k,LOW);
  }
delay(50);


for(int i=0;i<5;i++)
{ 
l1();
for(int j= 31;j<=39;j++)
{
  if(j==38 || j==39 || j==37)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
l2();
for(int j= 31;j<=39;j++)
{
  if(j==34 || j==35 || j==36)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
  
l3();
for(int j= 31;j<=39;j++)
{
  if(j==31 || j==32 || j==33)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
}
 for(int k=31;k<=39;k++)
  {
    digitalWrite(k,LOW);
  }
delay(50);

}
}
void loop() 
{
 // ------------------------------------fireworks----------------------
  for(int j=0;j<2;j++)
  {
  l1();
  centreon();
  delay(100);
  l2();
  centreon();
  delay(100);
  l3();
  centreon();
  delay(200);
  corneron();
  l2();
  corneron();
  delay(100);
  l1();
  corneron();
  delay(200);
  l1();
  scentreon();
  delay(100);
  l2();
  scentreon();
  l3();
  scentreon();
  delay(200);
  }
  -----------------------------------------layers---------------------------
  for(int j=0;j<=2;j++)
  {
  l1();
  lh();
  ll();
  l2();
  lh();
  ll();
  l3();
  lh();
  ll();
  }
//  ---------------------------------------circle--------------------------------
  for(int i=1;i<3;i++)
  {
  f1();delay(100);
  f2();delay(100);
  f3();delay(100);
  f4();delay(100);
  f5();delay(100);
  f6();delay(100);
  f7();delay(100);
  f8();delay(100);
  f9();delay(100);
  layerlow();delay(1000);
}
alllayershigh();
lh();delay(2000);
//-----------------------------------sequence---------------------------------
for(int i=0;i<3;i++)
{
seq1();
  for(int k=31;k<=39;k++)
  {
    digitalWrite(k,LOW);
  }
  seq2();
  for(int k=31;k<=39;k++)
  {
    digitalWrite(k,LOW);
  }
  seq3();
  for(int k=31;k<=39;k++)
  {
    digitalWrite(k,LOW);
  }
  delay(100);
} delay(1000);
//----------------------------------cycle----------------------------------
for(int i=0;i<3;i++)
cycle();
delay(1000);
}
