#include "ti_msp_dl_config.h"
#include "oled.h"
#include "stdio.h"

int main(void)
{
	uint8_t str[64];
    int a=100;
	SYSCFG_DL_init();
	
	OLED_Init();
	OLED_Fill(0x00);
	OLED_ShowStr(0,0,(unsigned char*)("MSPM0G3507"),2);
	OLED_ShowStr(0,2,(unsigned char*)("I2C OLED"),2);
    sprintf((char *)str, "%d", a);
    OLED_ShowStr(0,4, str,2);
	
	while (1) 
	{
	}
}

