# StepSpark

# What is StepSpark

Basically, I got hooked on this concept by a video that showed a modern way of generating electricity through footsteps. The process is that when someone steps on the tile, the panel moves slightly and spins a small generator inside, converting kinetic energy to electrical energy, as shown by its ability to power an LED in my project. 

# Why I made this project

Even though this would create less power with one footstep, it just goes to show that even small actions can produce renewable and sustainable power. This also motivates citizens to walk more, waste less, and generate clean energy **one step at a time.**

# How to use StepSpark

Firstly, place StepSpark on a flat surface and gently step on the top panel, which pushes the panel down and spins the internal motor to generate electricity. The generated energy lights up an LED to show the power being created. Repeated steps generate more energy.

# The Use of ESP32

Basically, the ESP32's firmware is simple without continuous supply of power which only blinks 3 times during startup and prints "Power Generated" when a step is detected. The ESP32 firmware is designed for event based activation, where each step triggers a cycle and a predefined response, which is the blinking of the internal LED. 

# THE WIRING 

<img width="757" height="496" alt="Untitled Diagram drawio" src="https://github.com/user-attachments/assets/2f3bdd30-62f6-4e77-9fcc-a4504ae63036" />

# PCB and Schematics(3D)

<img width="2923" height="2068" alt="Schematic_StepSpark1_2026-03-27" src="https://github.com/user-attachments/assets/b1b3a688-570d-4ecb-96df-70c1ac384658" />
<img width="475" height="472" alt="pcb png" src="https://github.com/user-attachments/assets/f6219ee1-7d0e-40f4-a3de-b2dfea0c5ba1" />
<img width="987" height="780" alt="image" src="https://github.com/user-attachments/assets/43bf5ab5-e237-4d9a-a126-cd9204e2499a" />
<img width="906" height="730" alt="image" src="https://github.com/user-attachments/assets/f6160997-c67e-42c0-9770-ca7ad14ab94d" />

# THE 3D MODEL BY ONSHAPE 

<img width="1629" height="775" alt="Screenshot 2026-04-23 231822" src="https://github.com/user-attachments/assets/631cfe3f-7fd8-423c-acb6-eed74cde0899" />
<img width="1052" height="797" alt="Screenshot 2026-04-23 231851" src="https://github.com/user-attachments/assets/3992ea53-19be-4a69-bf1f-09404eda0480" />

**Public Link: https://cad.onshape.com/documents/1c86c19e9812e6e47bd306d6/w/e9e4d0fd52e8b37230a7d31e/e/901bc7dbaa95eb627d79ce81?renderMode=0&uiState=69ea47f5f46d516a47411518**

**A STRING will be there from the motor shaft to the top panel, so it moves and conducts electricity. Not shown in Onshape.**
**ALL PARTS (PCB AND MOTOR) ARE SCREWED ON TO THE BOTTOM PANEL SHOWN IN ONSHAPE**

## Bill of Materials

| # | Item | Quantity | Use | Cost (THB) WITH SHIPPING COSTS | Link |
|---|------|----------|-----|-----------|------|
| 1 | Top wooden/acrylic panel (40cm x 40cm) | 1 | Surface people step on to create movement | 215 | [Buy](https://shopee.co.th/...) |
| 2 | Bottom wooden base (40cm x 40cm) | 1 | Fixed base that holds all components | 215 | [Buy](https://shopee.co.th/...) |
| 3 | Springs set (medium stiffness) | 1 | Allow vertical movement and return panel to position | 317 | [Buy](https://shopee.co.th/...) |
| 4 | DC Motor | 2 | Acts as generator to convert motion into electricity | 216 | [Buy](https://shopee.co.th/...) |
| 5 | Strong string/thread | 2 | Connects top panel movement to motor shaft | 74 | [Buy](https://shopee.co.th/...) |
| 6 | Rubber band | 1 | Maintains tension and helps return motor shaft | 69 | [Buy](https://shopee.co.th/...) |
| 7 | LED | 10 | Visual indicator that electricity is generated | 210 | [Buy](https://shopee.co.th/...) |
| 8 | Bridge Rectifier | 2 | Form bridge rectifier to control current direction | 54 | [Buy](https://shopee.co.th/...) |
| 9 | Capacitor (2200µF) | 5 | Stores charge and smooths LED output | 150 | [Buy](https://shopee.co.th/...) |
| 10 | Connecting wires | 1 | Electrical connections between components | 140 | [Buy](https://shopee.co.th/...) |
| 11 | Screws / Standoffs / Tape | 1 set | Assembly hardware for frame and electronics | 202 | [Buy](https://shopee.co.th/...) |
| 12 | Motor mounting bracket | 2 | Holds motor securely in place | 120 | [Buy](https://shopee.co.th/...) |
| 13 | Soldering iron | 1 | Needed to solder parts together | 179 | [Buy](https://shopee.co.th/...) |
| 14 | Hot glue gun sticks | 1 pack | Needed for hot glue gun | 109 | [Buy](https://shopee.co.th/...) |
| 15 | Solder Wire | 1 | Needed for the soldering iron | 350 | [Buy](https://shopee.co.th/...) |
| 16 | Foam Stoppers | 18 | Flexibility for positioning | 84 | [Buy](https://shopee.co.th/...) |
| 17 | Stepper Motor | 1 | Acts as a better generator to draw more current | 366 | [Buy](https://shopee.co.th/...) |
| 18 | Resistor | 5 | Used to protect LED from burning | 90 | [Buy](https://shopee.co.th/...) |
| 19 | Booster | 1 | Keep voltage constant at 4-5V | 41 | [Buy](https://shopee.co.th/...) |
| 20 | ESP 32 | 2 | Used to control the LED | 360 | [Buy](https://shopee.co.th/...) |
| 21 | PCB Board | 1 | Used to handle all the wirings | 207 | [Buy](https://shopee.co.th/...) |
| 22 | PCB Custom Order | 1 | Designed using gerber file | 240 | [Buy](https://www.pcbway.com/...) |
| | **Total** | | | **3,958 THB** | |
