int brightness=0,fadeAmount=5;

void setup() 
{    for(int i=13;i>=2;i--)
     {
      pinMode(i,OUTPUT);
     }  
     randomSeed(analogRead(0));
     randomSeed(analogRead(1));
}

void lh ()
 {
     for(int i=5;i<=13;i++)
{
  digitalWrite(i,HIGH);
  delay(5);  
}
 }

void layerlow()
{
  
  digitalWrite(4,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  for(int i=5;i<=13;i++)
  digitalWrite(i,LOW);
}



 void alllayershigh()
{
  digitalWrite(4,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
}



void L1high()
{
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
}


void L2high()
{
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
}


void L3high()
{
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
}


void cycle1()
{
   for(int z=0;z<3;z++)
{
for(int i=0;i<5;i++)
{ 
L1high();
for(int j= 5;j<=13;j++)
{
  if(j==5 || j==10 || j==11)
  digitalWrite(j,HIGH);
  else digitalWrite(j,LOW);
}
delay(10);
L2high();
for(int j= 31;j<=39;j++)
{
  if(j==6 || j==9 || j==12)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
  
L3high();
for(int j= 5;j<=13;j++)
{
  if(j==7 || j==8 || j==13)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
}
 for(int k=5;k<=13;k++)
  {
    digitalWrite(k,LOW);
  }
delay(50);

for(int i=0;i<5;i++)
{ 
L1high();
for(int j= 5;j<=13;j++)
{
  if(j==5 || j==6 || j==7)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
L2high();
for(int j= 5;j<=13;j++)
{
  if(j==8 || j==9 || j==10)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
  
L3high();
for(int j= 5;j<=13;j++)
{
  if(j==12 || j==13 || j==11)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
}
 for(int k=5;k<=13;k++)
  {
    digitalWrite(k,LOW);
  }
delay(50);


for(int i=0;i<5;i++)
{ 
L1high();
for(int j= 5;j<=13;j++)
{
  if(j==8 || j==13 || j==7)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
L2high();
for(int j= 5;j<=13;j++)
{
  if(j==6 || j==9 || j==12)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
  
L3high();
for(int j= 5;j<=13;j++)
{
  if(j==5 || j==10 || j==11)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
}
 for(int k=5;k<=13;k++)
  {
    digitalWrite(k,LOW);
  }
delay(50);


for(int i=0;i<5;i++)
{ 
L1high();
for(int j= 5;j<=13;j++)
{
  if(j==12 || j==13 || j==10)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
L2high();
for(int j= 5;j<=13;j++)
{
  if(j==8 || j==9 || j==10)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
  
L3high();
for(int j= 5;j<=13;j++)
{
  if(j==5 || j==6 || j==7)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
}
 for(int k=5;k<=13;k++)
  {
    digitalWrite(k,LOW);
  }
delay(50);

}
}
//____________________________________________________________________________________________________________________________________


//pattern_____________________________________________________________________

void seq1()
{
  L1high();
  for(int k=13; k>=5;k--)
  {
    digitalWrite(k,HIGH);
    delay(100);
  }
}
void seq2()
{
  L2high();
  for(int k=5; k<=13;k++)
  {
    digitalWrite(k,HIGH);
    delay(100);
  }
}
void seq3()
{
  L3high();

  for(int k=13; k>=5;k--)
  {
    digitalWrite(k,HIGH);
    delay(100);
  }
}



//pattern________________________________________________________________________________


void layers()
{
   L1high();
    for(int j=5; j<14;j++)
  {
    digitalWrite(j,HIGH);
  }
delay(200);
   L2high();
    for(int j=5; j<14;j++)
  {
    digitalWrite(j,HIGH);
  }
delay(200);
  L3high();
    for(int j=5; j<14;j++)
  {
    digitalWrite(j,HIGH);
  }
delay(200);
}
 
//pattern_________________________________________________________________________________________  
void cycle()
{
   for(int z=0;z<3;z++)
{
for(int i=0;i<5;i++)
{ 
L1high();
for(int j= 5;j<=13;j++)
{
  if(j==8 || j==13 || j==7)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
L2high();
for(int j= 5;j<=13;j++)
{
  if(j==6 || j==9 || j==12)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
  
L3high();
for(int j= 5;j<=13;j++)
{
  if(j==5 || j==10 || j==11)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
}
 for(int k=5;k<=13;k++)
  {
    digitalWrite(k,LOW);
  }
delay(50);

for(int i=0;i<5;i++)
{ 

L1high();
for(int j= 5;j<=13;j++)
{
  if(j==6 || j==9 || j==12)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
L2high();
for(int j= 5;j<=13;j++)
{
  if(j==6 || j==9 || j==12)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
L3high();
for(int j= 5;j<=13;j++)
{
  if(j==6 || j==9 || j==12)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
}
 for(int k=5;k<=13;k++)
  {
    digitalWrite(k,LOW);
  }
delay(50);






for(int i=0;i<5;i++)
{ 

L1high();
for(int j= 5;j<=13;j++)
{
  if(j==5 || j==10 || j==11)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
L2high();
for(int j= 5;j<=13;j++)
{
  if(j==6 || j==9 || j==12)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
L3high();
for(int j= 5;j<=13;j++)
{
  if(j==13 || j==7 || j==8)
  digitalWrite(j,HIGH);
  else
  digitalWrite(j,LOW);
}
delay(10);
}
 for(int k=5;k<=13;k++)
  {
    digitalWrite(k,LOW);
  }
delay(50);



for(int i=0;i<5;i++)
{ 
L2high();

for(int i=5;i<=13;i++)
digitalWrite(i,HIGH);

delay(20);
}

 for(int k=5;k<=13;k++)
  {
    digitalWrite(k,LOW);
  }
delay(50);


}
}



//pattern_______________________________________________________________________________________________
void start()
{
for(int i=0;i<3;i++)
{
L1high();
  for(int i=5;i<=13;i++)
  {
  if(i==9)digitalWrite(i,HIGH);
  else digitalWrite(i,LOW);
  }delay(400);

L2high();
  for(int i=5;i<=13;i++)
  {
  if(i==9)digitalWrite(i,HIGH);
  else digitalWrite(i,LOW);
  }delay(400);
L3high();
  for(int i=5;i<=13;i++)
  {
  if(i==9)digitalWrite(i,HIGH);
  else digitalWrite(i,LOW);
  }delay(400);




L3high();
  for(int i=5;i<=13;i++)
  {
    if(i==5 || i==7 || i==11 || i==13)
    {
      digitalWrite(i,HIGH);
    
    }
    else digitalWrite(i,LOW); 
  }
delay(100);


L2high();
  for(int i=5;i<=13;i++)
  {
    if(i==5 || i==7 || i==11 || i==13)
    {
      digitalWrite(i,HIGH);
     
    }
    else digitalWrite(i,LOW); 
  }
delay(100);


  L1high();
  for(int i=5;i<=13;i++)
  {
    if(i==5 || i==7 || i==11 || i==13){
      digitalWrite(i,HIGH);
     
    }
    else digitalWrite(i,LOW); 
  }
delay(100);
}
}





//___________________________________________________________________________________________

void f1()
{ alllayershigh();
  for(int i=5;i<=13;i++)
  {
    if(i==9)digitalWrite(i,HIGH);
    else digitalWrite(i,LOW);
    delay(10);
  }
  delay(50);
}

void f2()
{
  alllayershigh();
    for(int i=5;i<=13;i++)
  {
    if(i==9 || i==6)digitalWrite(i,HIGH);
    else digitalWrite(i,LOW);
    delay(5);
  }
  delay(50);
}
void f3()
{
  alllayershigh();
    for(int i=5;i<=13;i++)
  {
    if(i==9 || i==6||i==7)digitalWrite(i,HIGH);
    else digitalWrite(i,LOW);
    delay(5);
  }
  delay(50);
}
void f4()
{
  alllayershigh();
    for(int i=5;i<=13;i++)
  {
    if(i==9 || i==6||i==7||i==8)digitalWrite(i,HIGH);
    else digitalWrite(i,LOW);
    delay(5);
  }
  delay(50);
}
void f5()
{
  alllayershigh();
    for(int i=5;i<=13;i++)
  {
    if(i==9 || i==6||i==7||i==8||i==13)digitalWrite(i,HIGH);
    else digitalWrite(i,LOW);
    delay(5);
  }
  delay(50);
}
  void f6()
{
  alllayershigh();
    for(int i=5;i<=13;i++)
  {
    if(i==9 || i==6||i==7||i==8||i==13||i==12)digitalWrite(i,HIGH);
    else digitalWrite(i,LOW);
    delay(5);
  }
  delay(50);
}
void f7()
{
  alllayershigh();
    for(int i=5;i<=13;i++)
  {
    if(i==9 || i==6||i==7||i==8||i==13||i==12||i==11)digitalWrite(i,HIGH);
    else digitalWrite(i,LOW);
    delay(5);
  }
  delay(50);
}
void f8()
{
  alllayershigh();
    for(int i=5;i<=13;i++)
  {
    if(i==9 || i==6||i==7||i==8||i==13||i==12||i==11||i==10)digitalWrite(i,HIGH);
    else digitalWrite(i,LOW);
    delay(5);
  }
  delay(50);
}
void f9()
{
  alllayershigh();
    for(int i=5;i<=13;i++)
  {
    if(i==9 || i==6||i==7||i==8||i==13||i==12||i==11||i==10||i==5)digitalWrite(i,HIGH);
    else digitalWrite(i,LOW);
    delay(5);
  }
  delay(50);
}
//_________________________________________________________________________________




void loop() 
{ 
delay(1000);
 
   digitalWrite(4,HIGH);
   digitalWrite(3,HIGH);
   digitalWrite(2,HIGH);
    for(int j=5;j<14;j++)
    {
      for(brightness=0;brightness<256;brightness=brightness+5){
    analogWrite(j, brightness);
    delay(20);}
    }
 
delay(1000);
 digitalWrite(4,LOW);
   digitalWrite(3,LOW);
   digitalWrite(2,LOW);
delay(500);  
  for(int i=0;i<3;i++)
  {
  layers();
  }
   delay(500);
   start();
 cycle();
  
  cycle1();


  for(int i=1;i<=3;i++)
  {
  f1();delay(1);
  f2();delay(1);
  f3();delay(1);
  f4();delay(1);
  f5();delay(1);
  f6();delay(1);
  f7();delay(1);
  f8();delay(1);
  f9();delay(1);
  layerlow();delay(500);
} 

  


 
for(int i=0;i<3;i++)
{
seq1();
  for(int k=5;k<=13;k++)
  {
    digitalWrite(k,LOW);
  }
  seq2();
  for(int k=5;k<=13;k++)
  {
    digitalWrite(k,LOW);
  }
  seq3();
  for(int k=5;k<=13;k++)
  {
    digitalWrite(k,LOW);
  }
  delay(100);
}





//_______________________
for (int j=0;j<1;j++)
{
for( int i=0;i<10;i++)
{
 int randNumber = random(5,14);
    for(int i= 5;i<14;i++)
    {
      if(i!=randNumber)
      digitalWrite(i,LOW);
    }
    int randlayer =  random(2,5);
     for(int i= 2;i<5;i++)
    {
      if(i!=randNumber)
      digitalWrite(i,LOW);
    }
    digitalWrite(randNumber,HIGH);
    digitalWrite(randlayer,HIGH);
    delay(500);
}
}
//___________________________
for (int j=0;j<2;j++)
{
for( int i=0;i<17;i++)
{
 int randNumber = random(5,14);
    for(int i= 5;i<14;i++)
    {
      if(i!=randNumber)
      digitalWrite(i,LOW);
    }
    int randlayer =  random(2,5);
     for(int i= 2;i<5;i++)
    {
      if(i!=randNumber)
      digitalWrite(i,LOW);
    }
    digitalWrite(randNumber,HIGH);
    digitalWrite(randlayer,HIGH);
    delay(175);
}
}








for (int j=0;j<6;j++)
{
for( int i=0;i<28;i++)
{
 int randNumber = random(5,14);
    for(int i= 5;i<14;i++)
    {
      if(i!=randNumber)
      digitalWrite(i,LOW);
    }
    int randlayer =  random(2,5);
     for(int i= 2;i<5;i++)
    {
      if(i!=randNumber)
      digitalWrite(i,LOW);
    }
    digitalWrite(randNumber,HIGH);
    digitalWrite(randlayer,HIGH);
    delay(50);
}
}
alllayershigh();
lh();
delay(1000);
 digitalWrite(4,HIGH);
   digitalWrite(3,HIGH);
   digitalWrite(2,HIGH);
    for(int j=5;j<14;j++)
    {
      for(brightness=255;brightness>=0;brightness=brightness- 5){
    analogWrite(j, brightness);
    delay(10);}
    }

}
