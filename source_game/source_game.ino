#include <bmps.h>
#include<PCD8544_HOANGSA.h>

#define RST 2     // lcd nokia is screen
#define CE 3
#define DC 4
#define DIN 5
#define CLK 6

#define UP A3       //button to click
#define DOWN A6
#define RIGHT A4
#define LEFT A7
#define OK A5

//#define NOTE_C4  262
//#define NOTE_G3  196
//#define NOTE_A3  220
//#define NOTE_B3  247
//#define NOTE_C4  262


PCD8544 lcd (RST, CE, DC, DIN, CLK);
//---------Sound---------------------------------
//int melody[] = {
//  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
//};

//int noteDurations[] = {4, 8};
//--------------------------------------------------
//----------For Snake_Xenzia----------------------
typedef struct
{
  int stt;
  int x;
  int y;
} snake;            // A block of snake
int size = 2;       // a block has size 3x3 pixel

snake snakes[100], new_pos;  // Max len is 100

int prey_x = random(0, 84 / size);
int prey_y = random(0, 48 / size);
int direct = 1;
//--------------------------------------------------

int score = 0;
int choose_game = 0;

void setup()
{
  lcd.ON();
  lcd.SET(50, 0, 0, 0, 4); // contrast and bias
  pinMode(UP, INPUT);
  pinMode(DOWN, INPUT);
  pinMode(LEFT, INPUT);
  pinMode(RIGHT, INPUT);
  
  setup_snake();
}

void loop()
{
  snake_xenzia(50);
}
