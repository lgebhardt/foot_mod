# foot_mod
 Foot controlled modifier keyboard

This is a very simple project to allow the use of your feet to controll the modifier keys on a Mac(Shift, Control, Option, and Command).

This project was tested on a Seeed Studio XIAO SAMD21 Arduino compatible board https://www.seeedstudio.com/Seeeduino-XIAO-Arduino-Microcontroller-SAMD21-Cortex-M0+-p-4426.html. This was chosen for its low cost, small size, and USB-C connector.

# Wiring

The board uses 4 guitar effects pedal switches, https://www.amazon.com/dp/B0BJ1JFBMM?psc=1&ref=ppx_yo2ov_dt_b_product_details

Each switch is wired to one of the inputs on the board and to ground. It's simple wiring so don't plan on using this to build a full sized keyboard. However for 4 switches we still have plenty of I/O left over.