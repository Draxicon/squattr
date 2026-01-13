#ifndef TFT_TEST_H
#define TFT_TEST_H
#include <TFT_eSPI.h>
#include <SPI.h>
TFT_eSPI tft = TFT_eSPI();

/*
* \brief a basic draw function using the TFT_eSPI library to draw hello world to the screen
* \param void
* \return void
*/
void basicdraw()
{
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(0, 0);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(1);
  tft.setTextFont(0); 
  tft.print("Hello World (test)!");
}

#endif