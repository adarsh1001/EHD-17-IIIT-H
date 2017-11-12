# Experiment 1C

In this experiment, we will interface input and output pins of the microcontroller. Your task is to configure a pin as input (both using internal and external pull up resistance) and control output of another pin depending on the value of input.

## Connections:
1. Connect an LED to a digital pin with 330 ohm resistance in series (Pin1).
2. Take a breadboard and connect a switch. Identify the 2 terminals of the switch which are shorted internally. The other 2 terminals should get shorted when the switch is pressed.
3. To interface a switch with a microcontroller, connect one pair of shorted terminals to ground and other pair of shorted terminals to the input pin directly. 

## Procedure:
1. Configure Pin1 as output and initialize its output value as low.
2. Configure Pin2 as input with internal pull resistance enabled.
3. Write the main loop to continuously poll the input value at pin (Pin1). If the input voltage is HIGH, turn on the LED on (Pin2). If the input voltage is LOW, turn off the LED on Pin2.

