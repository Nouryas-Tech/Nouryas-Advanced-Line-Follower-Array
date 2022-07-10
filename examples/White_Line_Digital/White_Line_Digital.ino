/******************************************************************************
This Library is produced by "Nouryas Tech".
written by Mohamad Yahya Mahmoud , Nouryas Tech engineering.
it is compatible with many line followers especially (Nouryas Advanced Line Follower).
Date published 27 jan 2020.
Youtube " https://www.youtube.com/c/EngMYahyaMahmoud "
Facebook page: " https://www.facebook.com/Nouryas.Tech "
LinkedIn page : " https://www.linkedin.com/in/mohamad-yahya/ "
///////////////////////////////////////////////////////////////////////////////
first come first ... Adv_Line_Follower () is the main core of this library ,, it is so simple and logical
Adv_Line_Follower(Line Color,A_D_Scan,R_PWM_EN,L_PWM_EN,MAX_PWM_SPEED)
Line Color ====> Black = 0 , White = 1 >>>>> in this example 1 for White line
A_D_Scan =====> Analog Scan = 0 , Digital Scan = 1 >>>>> in this example 1 for digital scanning
R_PWM_EN =====> Right Wheel Enable Pin >>>>> in this expample connected to pin 6
L_PWM_EN =====> Left Wheel Enable Pin  >>>>> in this expample connected to pin 5
MAX_PWM_SPEED =====> Wheel Speed as % 
(from 0 to 100) %0 means stop, %100 means full speed >>>>> in this example we choose 75%
you must connect the right and left motors' direction pins like ( forward 5V, Backward 0V),,, do not mistake !!! 
******************************************************************************/
#include <Adv_Line_Follower.h>

Adv_Line_Follower my_Car(1,1,6,5,75);
void setup() {
}
void loop() {
   my_Car.Go();
}
