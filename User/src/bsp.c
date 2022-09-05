#include "bsp.h"
#include "stm32u575xx.h"

#define SYSCLK_FREQ_24MHz   (24000000)
#define TICKS_PER_SEC       (100U)

static void RCCconfig(void) {

}

static void GPIOconfig(void) {
    
}

static void SYSTICKconfig (unsigned int ticks) {
    (void)ticks;
}

void SystemInit (void) {
    RCCconfig();
    GPIOconfig();
    SYSTICKconfig(SYSCLK_FREQ_24MHz/TICKS_PER_SEC);
    //__enable_irq();  /* enable interrupts */
}
