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
<img width="1067" height="822" alt="image" src="https://github.com/user-attachments/assets/eeea3f20-6001-4361-8d1f-380f25200bb9" />



# THE 3D MODEL BY ONSHAPE 

<img width="1357" height="740" alt="image" src="https://github.com/user-attachments/assets/51e97e8b-a26c-429b-b228-d67ccab1a32f" />

Public Link: https://cad.onshape.com/documents/1c86c19e9812e6e47bd306d6/w/e9e4d0fd52e8b37230a7d31e/e/901bc7dbaa95eb627d79ce81?renderMode=0&uiState=69a3d0e40127f2433f79dd9a

