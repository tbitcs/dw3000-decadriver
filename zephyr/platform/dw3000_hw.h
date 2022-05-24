#ifndef DW3000_HW_H

int dw3000_hw_init(void);
int dw3000_hw_init_interrupt(void);
void dw3000_hw_fini(void);
void dw3000_hw_reset(void);
void dw3000_hw_wakeup(void);
void dw3000_hw_wakeup_pin_low(void);

#endif
