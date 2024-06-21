#ifndef __OLED_I2C_H
#define	__OLED_I2C_H

#define OLED_ADDRESS	0x3c //Í¨¹ýµ÷Õû0Rµç×è,ÆÁ¿ÉÒÔ0x78ºÍ0x7AÁ½¸öµØÖ· -- Ä¬ÈÏ0x78

void OLED_Init(void);
void OLED_SetPos(unsigned char x, unsigned char y);
void OLED_Fill(unsigned char fill_Data);
void OLED_CLS(void);
void OLED_ON(void);
void OLED_OFF(void);
void OLED_ShowStr(unsigned char x, unsigned char y, unsigned char ch[], unsigned char TextSize);
void OLED_ShowCN(unsigned char x, unsigned char y, unsigned char N);
void OLED_DrawBMP(unsigned char x0,unsigned char y0,unsigned char x1,unsigned char y1,unsigned char BMP[]);

#endif

