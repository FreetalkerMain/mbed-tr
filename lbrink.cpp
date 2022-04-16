//mbed apiを使うための宣言
#include "mbed.h"

/*
mbed apiのioドライバのDigitalOutクラスで、
ledオブジェクトをLED1引数で生成
*/
DigitalOut led(LED1);


//メイン関数
int main()
{
    //点灯、消灯状態を反転させる
    led = !led;

    //0.2秒待つ
    wait(0.2);
}
}
