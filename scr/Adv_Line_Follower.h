#ifndef Adv_Line_Follower_h
#define Adv_Line_Follower_h
#include "Arduino.h"
class Adv_Line_Follower {
public:
    Adv_Line_Follower(bool LineColor, bool A_D_Scan, uint8_t PWM_R_EN, uint8_t PWM_L_EN, uint8_t MAX_PWM_SPEED);
    void  go();
private:
    uint8_t _temp;
    bool _LineColor;
    bool _A_D_Scan;
    uint8_t _Position;
    uint8_t _A0, _A1, _A2, _A3, _A4;
    uint8_t _R_Speed, _L_Speed;
    uint8_t _PWM_R_EN, _PWM_L_EN;
    uint8_t _MAX_PWM_SPEED;
    uint8_t _left_wieght;
    uint8_t _right_wieght;
};

#endif
