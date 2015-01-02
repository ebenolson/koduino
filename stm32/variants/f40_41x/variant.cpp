
#include "variant.h"
#include "types.h"
#include "USARTClass.h"
#include "adc.h"

// >>> Autogenerated by /Applications/Arduino.app/Contents/Java/hardware/koduino/stm32/variants/variant_codegen.py >>>

const uint8_t PC7 = 0;
const uint8_t PC6 = 1;
const uint8_t PC8 = 2;
const uint8_t PB8 = 3;
const uint8_t PB9 = 4;
const uint8_t PC9 = 5;
const uint8_t PB3 = 6;
const uint8_t PC11 = 7;
const uint8_t PC10 = 8;
const uint8_t PA3 = 9;
const uint8_t PA2 = 10;
const uint8_t PA7 = 11;
const uint8_t PA6 = 12;
const uint8_t PA5 = 13;
const uint8_t PA0 = 14;
const uint8_t PA1 = 15;
const uint8_t PB0 = 16;
const uint8_t PB1 = 17;
const uint8_t PB7 = 18;
const uint8_t PB6 = 19;
const uint8_t PA4 = 20;
const uint8_t PC0 = 21;
const uint8_t PC1 = 22;
const uint8_t PC2 = 23;
const uint8_t PA9 = 24;
const uint8_t PA10 = 25;
const uint8_t PA8 = 26;
const uint8_t PA11 = 27;
const uint8_t PA12 = 28;
const uint8_t PA13 = 29;
const uint8_t PA14 = 30;
const uint8_t PA15 = 31;
const uint8_t PB2 = 32;
const uint8_t PB4 = 33;
const uint8_t PB5 = 34;
const uint8_t PB10 = 35;
const uint8_t PB11 = 36;
const uint8_t PB12 = 37;
const uint8_t PB13 = 38;
const uint8_t PB14 = 39;
const uint8_t PB15 = 40;
const uint8_t PC3 = 41;
const uint8_t PC4 = 42;
const uint8_t PC5 = 43;
const uint8_t PC12 = 44;
const uint8_t PC13 = 45;
const uint8_t PC14 = 46;
const uint8_t PC15 = 47;

PinInfo PIN_MAP[] = {
  {GPIOC, 7, NOT_SET, 3, TIMER8, 2, NOT_SET, NOT_SET},
  {GPIOC, 6, NOT_SET, 3, TIMER8, 1, NOT_SET, NOT_SET},
  {GPIOC, 8, NOT_SET, 3, TIMER8, 3, NOT_SET, NOT_SET},
  {GPIOB, 8, NOT_SET, 2, TIMER4, 3, NOT_SET, NOT_SET},
  {GPIOB, 9, NOT_SET, 2, TIMER4, 4, NOT_SET, NOT_SET},
  {GPIOC, 9, NOT_SET, 3, TIMER8, 4, NOT_SET, NOT_SET},
  {GPIOB, 3, NOT_SET, 1, TIMER2, 2, NOT_SET, NOT_SET},
  {GPIOC, 11, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 10, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOA, 3, 3, 2, TIMER5, 4, NOT_SET, NOT_SET},
  {GPIOA, 2, 2, 2, TIMER5, 3, NOT_SET, NOT_SET},
  {GPIOA, 7, 7, 2, TIMER3, 2, NOT_SET, NOT_SET},
  {GPIOA, 6, 6, 2, TIMER3, 1, NOT_SET, NOT_SET},
  {GPIOA, 5, 5, 1, TIMER2, 1, NOT_SET, NOT_SET},
  {GPIOA, 0, 0, 2, TIMER5, 1, NOT_SET, NOT_SET},
  {GPIOA, 1, 1, 2, TIMER5, 2, NOT_SET, NOT_SET},
  {GPIOB, 0, 8, 2, TIMER3, 3, NOT_SET, NOT_SET},
  {GPIOB, 1, 9, 2, TIMER3, 4, NOT_SET, NOT_SET},
  {GPIOB, 7, NOT_SET, 2, TIMER4, 2, NOT_SET, NOT_SET},
  {GPIOB, 6, NOT_SET, 2, TIMER4, 1, NOT_SET, NOT_SET},
  {GPIOA, 4, 4, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 0, 10, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 1, 11, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 2, 12, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOA, 9, NOT_SET, 1, TIMER1, 2, NOT_SET, NOT_SET},
  {GPIOA, 10, NOT_SET, 1, TIMER1, 3, NOT_SET, NOT_SET},
  {GPIOA, 8, NOT_SET, 1, TIMER1, 1, NOT_SET, NOT_SET},
  {GPIOA, 11, NOT_SET, 1, TIMER1, 4, NOT_SET, NOT_SET},
  {GPIOA, 12, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOA, 13, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOA, 14, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOA, 15, NOT_SET, 1, TIMER2, 1, NOT_SET, NOT_SET},
  {GPIOB, 2, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOB, 4, NOT_SET, 2, TIMER3, 1, NOT_SET, NOT_SET},
  {GPIOB, 5, NOT_SET, 2, TIMER3, 2, NOT_SET, NOT_SET},
  {GPIOB, 10, NOT_SET, 2, TIMER2, 3, NOT_SET, NOT_SET},
  {GPIOB, 11, NOT_SET, 2, TIMER2, 4, NOT_SET, NOT_SET},
  {GPIOB, 12, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOB, 13, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOB, 14, NOT_SET, 9, TIMER12, 1, NOT_SET, NOT_SET},
  {GPIOB, 15, NOT_SET, 9, TIMER12, 2, NOT_SET, NOT_SET},
  {GPIOC, 3, 13, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 4, 14, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 5, 15, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 12, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 13, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 14, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
  {GPIOC, 15, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET, NOT_SET},
};

const uint8_t TIMER2 = 0;
const uint8_t TIMER5 = 1;
const uint8_t TIMER3 = 2;
const uint8_t TIMER4 = 3;
const uint8_t TIMER1 = 4;
const uint8_t TIMER8 = 5;
const uint8_t TIMER9 = 6;
const uint8_t TIMER12 = 7;
const uint8_t TIMER10 = 8;
const uint8_t TIMER11 = 9;
const uint8_t TIMER13 = 10;
const uint8_t TIMER14 = 11;
const uint8_t TIMER6 = 12;
const uint8_t TIMER7 = 13;

TimerChannelData timer2ch[4] = {
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer5ch[4] = {
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer3ch[4] = {
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer4ch[4] = {
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer1ch[4] = {
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer8ch[4] = {
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer9ch[2] = {
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0}
};
TimerChannelData timer12ch[2] = {
  {0, false, 0, 0, 0, 0},
  {0, false, 0, 0, 0, 0}
};

TimerInfo TIMER_MAP[] = {
  {TIM2, TIM2_IRQn, 1000, 0, timer2ch},
  {TIM5, TIM5_IRQn, 1000, 0, timer5ch},
  {TIM3, TIM3_IRQn, 1000, 0, timer3ch},
  {TIM4, TIM4_IRQn, 1000, 0, timer4ch},
  {TIM1, TIM1_CC_IRQn, 1000, 0, timer1ch},
  {TIM8, TIM8_CC_IRQn, 1000, 0, timer8ch},
  {TIM9, TIM1_BRK_TIM9_IRQn, 1000, 0, timer9ch},
  {TIM12, TIM8_BRK_TIM12_IRQn, 1000, 0, timer12ch},
  {TIM10, TIM1_UP_TIM10_IRQn, 1000, 0, (TimerChannelData *)0},
  {TIM11, TIM1_TRG_COM_TIM11_IRQn, 1000, 0, (TimerChannelData *)0},
  {TIM13, TIM8_UP_TIM13_IRQn, 1000, 0, (TimerChannelData *)0},
  {TIM14, TIM8_TRG_COM_TIM14_IRQn, 1000, 0, (TimerChannelData *)0},
  {TIM6, TIM6_DAC_IRQn, 1000, 0, (TimerChannelData *)0},
  {TIM7, TIM7_IRQn, 1000, 0, (TimerChannelData *)0},
};

// <<< Autogenerated by /Applications/Arduino.app/Contents/Java/hardware/koduino/stm32/variants/variant_codegen.py <<<


// Use the 3 basic timers and two others
TimebaseChannel TIMEBASE_MAP[] = {
  {.timer = NOT_SET, .isr = 0}, // 0:user
  {.timer = NOT_SET, .isr = 0}, // 1:user
  {.timer = NOT_SET, .isr = 0}, // 2:user
  {.timer = NOT_SET, .isr = 0}, // 3:user
  {.timer = NOT_SET, .isr = 0}, // 4:user
  {.timer = NOT_SET, .isr = 0} // 5:System clock, i.e. millis
};
const uint8_t SYSCLK_TIMEBASE = 5;

// Serial
USARTInfo USART_MAP[4] = {
  { USART1, USART1_IRQn, PA9, PA10 },
  { USART2, USART2_IRQn, PA2, PA3 },
  { USART3, USART3_IRQn, PC10, PC11 },
  { USART6, USART6_IRQn, PC6, PC7 }
};
USARTClass Serial1(&USART_MAP[0]);
USARTClass Serial2(&USART_MAP[1]);
USARTClass Serial3(&USART_MAP[2]);
USARTClass Serial6(&USART_MAP[3]);

bool isTimer32Bit(uint8_t tim) {
  return (tim < TIMER3);
}

uint8_t numChannelsInTimer(uint8_t tim) {
  if (tim < TIMER9)
    return 4;
  else if (tim < TIMER10)
    return 2;
  else if (tim < TIMER6)
    return 1;
  else
    return 0;
}

bool isAnalogPin(uint8_t pin) {
  return (PIN_MAP[pin].adcChannel != NOT_SET);
}

void variantInit() {
  TIMEBASE_MAP[0].timer = TIMER6;
  TIMEBASE_MAP[1].timer = TIMER7;
  TIMEBASE_MAP[2].timer = TIMER10;
  TIMEBASE_MAP[3].timer = TIMER11;
  TIMEBASE_MAP[4].timer = TIMER13;
  TIMEBASE_MAP[5].timer = TIMER14;

  // GPIO
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);
  // SYSCFG - needed for EXTI
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);

  // Timer clocks
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM4, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM5, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM6, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM7, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM12, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM13, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM14, ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM1, ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM8, ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM9, ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM10, ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM11, ENABLE);

  // USART
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2, ENABLE);
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART3, ENABLE);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART6, ENABLE);

  // ADC(s)
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC1, ENABLE);
  adcInit(ADC1);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC2, ENABLE);
  adcInit(ADC2);
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC3, ENABLE);
  adcInit(ADC3);
}
