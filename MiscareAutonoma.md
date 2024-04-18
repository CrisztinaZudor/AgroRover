# Miscare Autonoma

## Documentare Componente


### Motoare DC

Un motor de curent continuu standard are de obicei două pini: unul pentru alimentarea pozitivă și unul pentru cea negativă.<br>
Motivul este că, în multe cazuri, controlul direcției motorului se realizează prin comutarea polarității alimentării.<br>
De exemplu, pentru a roti motorul spre înainte, se aplică o tensiune pozitivă la un pin și o tensiune negativă la celălalt. <br>
Pentru a roti motorul înapoi, se inversează polaritatea.<br>

### Motor drivers L298N
<br>
Cum se foloseste:<br>
https://howtomechatronics.com/tutorials/arduino/arduino-dc-motor-control-tutorial-l298n-pwm-h-bridge/?utm_content=cmp-true<br>
https://components101.com/modules/l293n-motor-driver-module<br>
https://www.hackster.io/ryanchan/how-to-use-the-l298n-motor-driver-b124c5<br>
De ce L298N > L293D:<br>
https://www.utmel.com/components/l293d-vs-l2978n-what-s-the-difference?id=1493<br>
<br>

### Senzor ultrasonic + Servomotor
<br>
Ultrasonic + servo: https://www.hackster.io/hda-robotics/project-1-2wd-obstacle-avoiding-robot-390ef8<br>
https://www.youtube.com/watch?v=G0NQQ8GoSJU<br>
Este important de reținut că MAX_DISTANCE este o valoare arbitrară utilizată în codul dvs. Nu are nicio legătură directă cu distanța maximă reală a senzorului HC-SR04, care este de 4 metri (400 centimetri).<br>
<br>

### Senzor Ultrasonic
<br>
https://www.handsontec.com/dataspecs/HC-SR04-Ultrasonic.pdf<br>
How to use: <br>
https://lastminuteengineers.com/arduino-sr04-ultrasonic-sensor-tutorial/<br>

### Servomotor
<br>
How to use: <br>
https://components101.com/motors/mg90s-metal-gear-servo-motor<br>
https://lastminuteengineers.com/servo-motor-arduino-tutorial/<br>
https://www.youtube.com/watch?v=t2kGWidcaSk<br>


<br>

## Alimentarea
<br>
Arduino Mega: Baterie externa cu USB<br>
Motoare: Alimentate de Motor Driver<br>
Microswitch: Alimentate de la Arduino<br>
Motor Driver: Fiecare are alimentare separata. Nu se alimenteaza de la Arduino. Alimentate fiecare cu 3 baterii 18650, 3.7v, 12000mAh, Li-ion (intr-un suport => 11.1V)<br>
ServoMotor:
<br>

## Arduino Code
<br>
https://learn.parallax.com/tutorials/robot/shield-bot/robotics-board-education-shield-arduino/chapter-5-tactile-navigation-5<br>
https://forum.arduino.cc/t/arduino-whiskers-arent-working-well/350054/5<br>
https://github.com/kodyamani/Robot-Cat-Whiskers/tree/master<br>
Librarie Arduino: <br>
https://www.arduino.cc/reference/en/libraries/dcmotor/<br>
RedBotBumper: <br>
https://github.com/sparkfun/RedBot_Whisker_Bumper<br>
https://docs.idew.org/code-robotics/references/physical-inputs/mechanical-bumpers<br>
Flowchart for code:<br>
https://www.hackster.io/hda-robotics/project-1-2wd-obstacle-avoiding-robot-390ef8<br>
https://www.researchgate.net/figure/The-Algorithm-Flowchart-Diagram-of-The-Obstacle-avoiding-Robot-Car-Based-on-Arduino_fig8_329042229<br>
https://www.instructables.com/How-to-Make-an-Obstacle-Avoiding-Robot-Using-Ardui/<br>


<br>
<br>
<br>

## Bibliografie
https://www.allaboutcircuits.com/projects/control-a-motor-with-an-arduino/<br>
https://projecthub.arduino.cc/lakshyajhalani56/l298n-motor-driver-arduino-motors-motor-driver-l298n-7e1b3b<br>
Imagine cu interiorul motorului:<br>
https://promnicesk.live/product_details/112498652.html<br>
https://www.youtube.com/watch?v=GPVC84D5ULw<br>
How to connect ON/OFF Button: https://www.youtube.com/watch?v=bNZv3dZpmSU<br>
Arduino -> RaspberryPi communication
