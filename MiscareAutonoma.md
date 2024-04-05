# Miscare Autonoma
# BOM

## 1. Arduino Mega x1
Link achizitie:<br>
https://www.emag.ro/modul-pentru-arduino-mega2560-r3-atmega-usb-isp-12-mhz-e421/pd/DGTR16MBM/#reviews-section<br>
<br>
## 2. Motor drivers x3
Link achizitie:<br>
https://www.emag.ro/modul-driver-motoare-l298n-compatibil-arduino-ai016-s190/pd/DXK3ZQBBM/<br>
Datasheet:<br>
https://cdn-reichelt.de/documents/datenblatt/A300/ME089-N.pdf<br>
Cum se foloseste:<br>
https://howtomechatronics.com/tutorials/arduino/arduino-dc-motor-control-tutorial-l298n-pwm-h-bridge/?utm_content=cmp-true<br>
https://components101.com/modules/l293n-motor-driver-module<br>
https://www.hackster.io/ryanchan/how-to-use-the-l298n-motor-driver-b124c5<br>
De ce L298N > L293D:<br>
https://www.utmel.com/components/l293d-vs-l2978n-what-s-the-difference?id=1493<br>
<br>
## 3.	Microswitch x2
Link achizitie:<br>
Simon<br>
Kinda Datasheet:<br>
https://components101.com/switches/micro-switch-or-snap-action-switch<br>
Cum se foloseste:<br>
https://docs.arduino.cc/built-in-examples/basics/DigitalReadSerial/<br>
<br>
## 4.	Suport de cate 3 Baterii x3
Link achizitie:<br>
https://www.emag.ro/suport-acumulator-3-7v-18650-x-3-sloturi-s18650-3/pd/D6C49WBBM/<br>
<br>
## 5.	Baterii Li-Ion/18650/3.7v x9
Link achizitie:<br>
https://www.emag.ro/acumulator-li-ion-tip-18650-capacitate-mare-1200-mah-3-7v-dimensiuni-18x65x65-mm-acum1200mah/pd/D4HSWRBBM/<br>
+ Incarcator:<br>
https://www.emag.ro/incarcator-pentru-2-acumulatori-18650-li-ion-conectare-la-priza-220v-negru-10000609/pd/DHH2MWMBM/<br>
<br>
<br>

# Alimentarea
<br>
Arduino Mega: Baterie externa cu USB<br>
Motoare: Alimentate de Motor Driver<br>
Microswitch: Alimentate de la Arduino<br>
Motor Driver: Fiecare are alimentare separata. Nu se alimenteaza de la Arduino. Alimentate fiecare cu 3 baterii 18650, 3.7v, 12000mAh, Li-ion (intr-un suport => 11.1V)<br>
<br>
<br>

# Arduino Code
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

# Bibliografie
https://www.allaboutcircuits.com/projects/control-a-motor-with-an-arduino/<br>
https://projecthub.arduino.cc/lakshyajhalani56/l298n-motor-driver-arduino-motors-motor-driver-l298n-7e1b3b<br>
Imagine cu interiorul motorului:<br>
https://promnicesk.live/product_details/112498652.html<br>
