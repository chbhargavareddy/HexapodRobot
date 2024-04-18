#include <String.h>

#include <SoftwareSerial.h>
#include <Servo.h>
SoftwareSerial BT(11, 10); //TX, RX respetively 
String voice; 
int i;
int state1;

Servo servo1; //1 7
Servo servo2; //16 10
Servo servo3; //2 3
Servo servo4; //5 6
Servo servo5; //8 9
Servo servo6; //11 12
Servo servo7; //14 15
Servo servo8; //17 18
Servo servo9; //4
Servo servo10; //3



void setup()
{    
     servo1.attach(2);
     servo2.attach(3);
     servo3.attach(4);
     servo4.attach(5);
     servo5.attach(6);
     servo6.attach(7);
     servo7.attach(8);
     servo8.attach(9);
     servo9.attach(12);
     servo10.attach(13);
     
     BT.begin(9600);
     Serial.begin(9600);

    
} 

void INITIAL()
{
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  servo5.write(90);
  servo6.write(90);
  servo7.write(90);
  servo8.write(90);
  servo9.write(90);
  servo10.write(90);
}
void FORWARD()
        { servo3.write(45);  //LEG MOVES UPWARD
          servo7.write(135);
          servo5.write(45);
          delay(300);
          servo1.write(75);   //LEG MOVES FORWARD
          servo10.write(105);
          delay(300);
          servo3.write(90);  //LEG MOVES DOWNWARD
          servo7.write(90);
          servo5.write(90);
          delay(300);
          //BODY
          servo1.write(90);   //BODY  MOVES FORWARD AND OPPOSITE LEGS MOVES DOWNWARD
          servo10.write(90);
          servo2.write(75);
          servo9.write(105);
          delay(300);
          servo6.write(135);   //OPPOSIT LEG MOVES UPWARD
          servo4.write(45);
          servo8.write(135); 
          delay(300);
          servo2.write(105);   //OPPOSITE LEG MOVES FORWARD
          servo9.write(75);
          delay(300);
          servo6.write(90);  //OPPOSITE LEG MOVES DOWNWARD
          servo4.write(90);
          servo8.write(90);
          delay(300);
          //BODY
          servo1.write(105);  //NOW WHILE BODY MOVES FORWARD LEGS MOVES BACKWARD
          servo10.write(75);
          servo2.write(90);
          servo9.write(90);
          delay(300);
          //SOLUTION
          servo3.write(45);  //LEG MOVES  UPWARD
          servo7.write(135);
          servo5.write(45);
          delay(300);
          servo1.write(90);   // LEG MOVES FORWARD
          servo10.write(90);
          delay(300);
         
          servo3.write(90);  //LEG MOVES  DOWNWARD
          servo7.write(90);
          servo5.write(90);
        
     
  
}
void BACKWARD()
{           servo3.write(45);  //LEG MOVES UPWARD
            servo7.write(135);
            servo5.write(45);
            delay(350);
            servo1.write(105);   //LEG MOVES FORWARD
            servo10.write(75);
            delay(350);
            servo3.write(90);  //LEG MOVES DOWNWARD
            servo7.write(90);
            servo5.write(90);
            delay(350);
            //BODY
            servo1.write(90);   //BODY MOVES FORWARD AND OPPOSITE LEG MOVES BACKWARD
            servo10.write(90);
            servo2.write(105);
            servo9.write(75);
            delay(350);
            servo6.write(135);   //OPPOSITE LEG MOVES UPWARD
            servo4.write(45);
            servo8.write(135); 
            delay(350);
            servo2.write(75);   //LEG MOVES FORWARD
            servo9.write(105);
            delay(350);
            servo6.write(90);  //OPPOSITE LEG MOVES DOWNWARD
            servo4.write(90);
            servo8.write(90);
            delay(350);
            //BODY
            servo1.write(75); // NOW BODY MOVES FORWARD AND OPPOSITE LEGS MOVES BACKWARD
            servo10.write(105);
            servo2.write(90);
            servo9.write(90);
            delay(350);
            //SOLUTION
            servo3.write(45);  //LEG MOVES  UPWARD
            servo7.write(135);
            servo5.write(45);
            delay(350);
            servo1.write(90);   //LEG MOVES FORWARD
            servo10.write(90);
            delay(350);
           
            servo3.write(90);  //LEG MOVES DOWNWARD
            servo7.write(90);
            servo5.write(90);
      
   
      
}
void RIGHT()
{
            servo3.write(45);  //LEG MOVES UPWARD
            servo7.write(135);
            servo5.write(45);
            delay(200);
            
            servo1.write(105);   //LEG MOVES FORWARD
            servo10.write(105);
            delay(200);
            
            servo3.write(90);  //LEG MOVES DOWNWARD
            servo7.write(90);
            servo5.write(90);
            delay(200);
               
            servo6.write(135);   //OPPOSITE  LEG MOVES UPWARD SO ROTATING OF ROBO GETS EASY
            servo4.write(45);
            servo8.write(135); 
            delay(200);
            //BODY
            servo1.write(90);   //BODY  GET ROTATE 1part
            servo10.write(90);
                
            servo2.write(105); 
            servo9.write(105);
            delay(200);
            
            servo6.write(90);  //OPPOSITE LEG MOVES DOWNWARD
            servo4.write(90);
            servo8.write(90);
            delay(200);
          
            servo3.write(45);  //LEG MOVES UPWARD
            servo7.write(135);
            servo5.write(45);
            delay(200);
          
            servo2.write(90);
            servo9.write(90);
            delay(200);
          
            servo3.write(90);  //LEG MOVES UPWARD
            servo7.write(90);
            servo5.write(90);
  
}
void LEFT()
{
            servo3.write(45);  //UPWARD
            servo7.write(135);
            servo5.write(45);
            delay(200);
            
            servo1.write(75);   //LEG MOVES FORWARD
            servo10.write(75);
            delay(200);
            
            servo3.write(90);  //LEG MOVES DOWNWARD
            servo7.write(90);
            servo5.write(90);
            delay(200);
               
            servo6.write(135);   //OPPOSITE LEG MOVES UPWARD SO ROTATING OF BODY IS EASY
            servo4.write(45);
            servo8.write(135); 
            delay(200);
            //BODY
            servo1.write(90);   //BODY ROTATE R1part
            servo10.write(90);
                
            servo2.write(75);
            servo9.write(75);
            delay(200);
            
            servo6.write(90);  //OPPOSITE LEG MOVES DOWNWARD
            servo4.write(90);
            servo8.write(90);
            delay(200);
          
            servo3.write(45);  //LEG MOVES UPWARD
            servo7.write(135);
            servo5.write(45);
            delay(200);
          
            servo2.write(90);
            servo9.write(90);
            delay(200);
          
            servo3.write(90);  //LEG MOVES UPWARD
            servo7.write(90);
            servo5.write(90);
       
}
void FLICKER()
{

            servo4.write(30);
            delay(1000);
            servo9.write(60);
            delay(1000);
            servo9.write(90);
            delay(1000);
            servo9.write(120);
            delay(1000);
            servo9.write(90);
            delay(1000);
            servo9.write(60);
            delay(1000);
            servo9.write(90);
            delay(1000);
            servo4.write(180);
            delay(1000);
   

  
}
void UPWARD()
{        for(int i=90;i>=20;i--)   
           { servo3.write(180-i); 
             servo5.write(180-i);
           
            servo6.write(i);
            servo8.write(i);  
            delay(50);
           }
  
  
}
void DOWNWARD()
{        for(int i=90;i>=20;i--)
         {  
            servo3.write(i); 
            servo4.write(i); 
            servo5.write(i);
           
            servo6.write(180-i);
            servo7.write(180-i);
            servo8.write(180-i);
            delay(50);  
         } 
  
  
}
void FLICK_LEFT()
{         //FLICK LEFT PART
          for(int i=0;i<=5;i++)
           {  
            servo6.write(150);
            servo8.write(150); 
            servo2.write(45);
            delay(350);
            servo2.write(135);
             delay(350);
           }
          INITIAL();
          delay(1000);
          servo6.write(60);
          servo8.write(60);
          delay(100);
          servo6.write(50);
          servo8.write(50);
          delay(100);
          servo6.write(30);
          servo8.write(30);
          delay(100);
          delay(1000);
}
void FLICK_RIGHT()
{
         //FLICK RIGHT PART
          for(int i=0;i<=5;i++)
           {  
            servo3.write(30);
            servo5.write(30); 
            servo1.write(135);
            delay(350);
            servo1.write(45);
            delay(350);
           }
          INITIAL();
          delay(1000);
          servo3.write(120);
          servo5.write(120);
          delay(100);
          servo3.write(130);
          servo5.write(130);
          delay(100);
          servo3.write(140);
          servo5.write(140);
          delay(100);
          delay(1000);
  
}
void FK()
{   servo3.write(45);
    servo8.write(135);
    delay(350);
    servo3.write(90);
    servo8.write(90);
    delay(350);
    servo4.write(45);
    servo7.write(135);
    delay(350);
    servo4.write(90);
    servo7.write(90);
    delay(350);
   
    for(i=0;i<=2;i++)    
        {   servo5.write(45);
            servo6.write(135);
            delay(350);
            servo5.write(90);
            servo6.write(90);
            delay(350);
        }    
}
void SPINTHESPINNER()
{    servo8.write(110);
     servo6.write(110);
     delay(350);
     servo2.write(180);
     delay(350);
     servo8.write(135);
     servo6.write(135);
     delay(100);
   for(int i=180;i>=90;i--)
    {
      servo2.write(i);
      delay(10); 
    }
  
}

void loop() 
{  
  
   while (BT.available())//Check if there is an available byte to read 
             {   delay(10); //Delay added to make thing stable 
                 char c = BT.read(); //Conduct a serial read 
                 if (c == '#') 
                         {
                          break; //Exit the loop when the # is detected after the word 
                         }
                         voice += c; //Shorthand for voice = voice + c 
             } 
           voice.toLowerCase();  
           if (voice.length() > 0) 
             { 
                 Serial.println(voice); 
                  if(voice == "initial"||voice=="0"||voice == "*initial")
                  {
                    INITIAL();
                  }
                  else if(voice == "forward"||voice=="1"||voice == "*forward") 
                        {
                            FORWARD();
                           
                         }
                 
                  else if(voice=="2") 
                                  { 
                                    FORWARD();
                                    FORWARD();
                                  }  
                  else if(voice=="3") 
                                  { 
                                    FORWARD();
                                    FORWARD();
                                    FORWARD();
                                    
                                  }     
                  else if(voice=="4") 
                                  { 
                                    FORWARD();
                                    FORWARD();
                                    FORWARD();
                                    FORWARD();
                                  } 
                                  else if(voice=="5") 
                                  { 
                                    FORWARD();
                                    FORWARD();
                                    FORWARD();
                                    FORWARD();
                                    FORWARD();
                                    FORWARD();
                                  }  
                  else if (voice == "backward"||voice=="6"||voice == "*backward")
                                  {
                                    BACKWARD();                               
                                  }
                                  else if (voice=="7")
                                  {
                                    BACKWARD();
                                    BACKWARD();                               
                                  }
                                  else if (voice=="8")
                                  {
                                    BACKWARD();
                                    BACKWARD();
                                    BACKWARD();                               
                                  }
                                  else if (voice=="9")
                                  {
                                    BACKWARD();
                                    BACKWARD();
                                    BACKWARD();
                                    BACKWARD();                               
                                  }
                                  else if (voice=="10")
                                  {
                                    BACKWARD();
                                    BACKWARD();
                                    BACKWARD();
                                    BACKWARD();
                                    BACKWARD();
                                    BACKWARD();                               
                                  }
                                                          
                    else if (voice=="left"||voice=="11"||voice=="*left")
                                  {
                                    LEFT(); 
                                     
                                     
                                                                  
                                  }
                                  else if (voice=="12")
                                  {
                                    LEFT(); 
                                    LEFT(); 
                                     LEFT();                               
                                  }
                                  else if (voice=="13")
                                  {
                                    LEFT();
                                    LEFT(); 
                                    LEFT(); 
                                     LEFT(); 
                                                                 
                                  }
                    else if (voice=="right"||voice=="14"||voice=="*right")
                                  {
                                    RIGHT(); 
                                
                                                                                                     
                                  }
                                  else if (voice=="15")
                                  {
                                    RIGHT(); 
                                    RIGHT();
                                    RIGHT();
                                                          
                                  }
                                  else if (voice=="16")
                                  {
                                    RIGHT(); 
                                    RIGHT();
                                    RIGHT();
                                    RIGHT(); 
                                    
                                                                  
                                  }            
                     else if (voice=="FK"||voice=="29"||voice=="*FK")
                                  {
                                    FK(); 
                                  } 
                     else if (voice=="spin"||voice=="31"||voice=="*spin")
                     {
                      SPINTHESPINNER();                                                                                                                                                          
                     }
                     else if (voice=="flick left"||voice=="30"||voice=="*flick left")
                                  {
                                    FLICK_LEFT(); 
                                  }
                    else if (voice=="flick right"||voice=="32"||voice=="*flick right")
                                  {
                                    FLICK_RIGHT(); 
                                  }
                    else if (voice=="leg6"||voice=="23"||voice=="*leg6")
                                  { servo8.write(30);
                                    delay(250);
                                    servo8.write(90);
                                  }
                    else if (voice=="leg5"||voice=="24"||voice=="*leg5")
                                  { servo7.write(30);
                                    delay(250);
                                    servo7.write(90);
                                  }                            
                    else if (voice=="leg4"||voice=="25"||voice=="*leg4")
                                  { servo6.write(30);
                                    delay(250);
                                    servo6.write(90);
                                  } 
                    else if (voice=="leg3"||voice=="28"||voice=="*leg3")
                                  { servo5.write(150);
                                    delay(250);
                                    servo5.write(90);
                                  }  
                     else if (voice=="leg2"||voice=="27"||voice=="*leg2")
                                  { servo4.write(150);
                                    delay(250);
                                    servo4.write(90);
                                  }  
                      else if (voice=="leg1"||voice=="26"||voice=="*leg1")
                                  { servo3.write(150);
                                    delay(250);
                                    servo3.write(90);
                                  }                               
                       else if (voice=="upward"||voice=="33"||voice=="*upward")
                                  { UPWARD();
                                  } 
                      else if (voice=="downward"||voice=="34"||voice=="*downward")
                                  { DOWNWARD();
                                  } 
                      else if (voice=="dance"||voice=="35"||voice=="*dance")
                                  { servo8.write(30);
                                    delay(250);
                                    
                                    delay(250);
                                    servo7.write(30);
                                    delay(250);
                                    
                                    delay(250);
                                    servo6.write(30);
                                    delay(250);
                                   
                                    delay(250);
                                    servo5.write(150);
                                    delay(250);
                                    
                                    delay(250);
                                    servo4.write(150);
                                    delay(250);
                                   
                                    delay(250);
                                    servo3.write(150);
                                    delay(250);
                                    
                                    delay(250);
                                  }                         

                                               
                 voice="";//Reset the variable after initiating
             }   
                                 
}
    
 
