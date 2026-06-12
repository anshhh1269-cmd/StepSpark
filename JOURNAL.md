---
title: StepSpark Journal
project: StepSpark
author: ""
description: A step-powered energy generation device using ESP32, PCB, and 3D CAD
---

# 2/6/2026 - Onshape 3D CAD

_Time spent: 3.5h_

well i started this project two days ago...

and basically i've created sketches in my nb and tried to solve it through many drawings and created files in onshape for seperate parts like the spring and the motor, as well as the bottom and top panel. moreover, im trying to also research on how i can make this project in obvi less money and more better. hoping it goes well, although, ngl for these simple parts i took bit too much time but ill try to improve.

these cylinders are basically the springs used in the project and im also learning onshape side by side. i was going towards to choose Fusion3600 but i think for a first timer in CAD, and a person who did his one and only proj in OPENSCAD, onshape was the one to go for..

i watched tutorials on onshape and did side-by-side so that no time is wasted.


![Screenshot 2026-02-06 201150](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6OTkyMzIsInB1ciI6ImJsb2JfaWQifX0=--e8df736d9bc4bc21d5fac08e81687b1fe937b86d/Screenshot%202026-02-06%20201150.png)

# 2/11/2026 - Built all Part Studios

_Time spent: 4.5h_

hii..after doing the first part studio the others seemed easy
i have done part studios for resistor, capacitor, everything except wires which seems a little tough right now. also i did this a bit faster for all the components in less than 6 hours so that's a plus point...also a bad thing was i havent figured out the wiring at all yet which should be the main thing, so beatin myself over it :(

things that troubled me adding to the wiring was the mate connectors which were a little hard to figure out first but after some time i did get the hand of it. and now why did i create all part studios before?

i took some help from an experienced onshape user, who said that creating all part studios before is better and not leaving any other part for a future time. 

Part Studios:
- Bottom and Top panel
- Motor and motor bracket
- Resistor
- Boost and capacitor
- LED
- ESP32
  
![Screenshot 2026-02-11 193732](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTAyMjIwLCJwdXIiOiJibG9iX2lkIn19--b8f1d6e0767cbfa00aa2dfe500752adf0fb69372/Screenshot%202026-02-11%20193732.png)

<img width="947" height="837" alt="Screenshot 2026-06-12 114753" src="https://github.com/user-attachments/assets/7c3ad6ce-0d0e-42b4-859d-2ada7ab9c0ae" />

<img width="956" height="807" alt="Screenshot 2026-06-12 114713" src="https://github.com/user-attachments/assets/6fd8a27a-b3ab-4395-a8ca-688b305dffac" />

<img width="947" height="822" alt="Screenshot 2026-06-12 114701" src="https://github.com/user-attachments/assets/261b2194-348f-4f78-b19d-c2e71f72d0e5" />




# 2/22/2026 - Worked on the assembly in ONSHAPE

_Time spent: 3.0h_

after taking a few days off, i worked on getting all the part studios in place and then created an assembly...its still a work in progress and my aim is to finish all the onshape stuff in five days hopefully :)...also using the slider mates did take much time to fgure out but i finally did..although it doesn't look good ill try my best guys :(

one hard thing was obvi the slider mates which i didnt know how to operate with and it kinda looked awkward in the starting, as it didn't look good. the good thing was getting to see all my part studios come together in an assembly and seeing everything work out.


![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTA4OTg1LCJwdXIiOiJibG9iX2lkIn19--6825833755a662d69f26f97c9ca08de2c942b222/image.png)

# 2/24/2026 - Added all the components in onshape

_Time spent: 3.0h_

sooo i added all the components in the assembly and now will work on the wiring diagram which is quite difficult for me but yea progress is made :)....also this took a lot less time cause i finally got my hand around these types of mates and its coming together...it actually kinda looks like what i ahd planned but hope it looks better when its built...

okay so about adding all the components became kinda easy for me as i got to know everything about the operation of all mates including slider, and fastened. now obvi if I don't even use the slider mate it would be fine but my goal is to learn more and actually look at more animations as it looks more kinda cool and better to show others. 

why did i choose slider? It allows me to verify that there is enough physical clearance which a static model wouldnt provide

secondly, it obvi shows the animations and doesn't just how it as a static image but something being functional. just to end...i have reduced time in the mates and my next challenge is obvi the wiring which would be the first for me 



![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTEwMzcxLCJwdXIiOiJibG9iX2lkIn19--f9ff366e98cf876bbff2876a042fcd25cb8bf998/image.png)

# 2/25/2026 - did a simple wiring diagram

_Time spent: 3.5h_

soo after finishing the Onshape things, i moved on to the wiring diagram..
ik it's bad cause it's my first time and idk about the requirements but this is my diagram for now :)...this took some time to figure out since im doing electricals for the first time but yea gpt helped me process through it and i built this diagram..

now a good thinng was i learnt more about wiring cause honestly i have never done this before; had some help on the outside to understand the components and it will take some time to get used to :(

why this way? so instead of jumping straight to building and submitting for a grant..i needed this schemantic as a blueprint on how to build. this process helped me to like build a conenction b/w the mechanical CAD to electrical circuits, and im planning to convert this to a professional PCB for better functionality and understanding.

![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTEwODc5LCJwdXIiOiJibG9iX2lkIn19--daec2f22436dfafa6075d5566e6afd1354214dd2/image.png)

# 3/1/2026 - im gonna ship it now---did firmware as the last step

_Time spent: 3.0h_

soo basically im using esp32 now ryt...so i need it to do something without a continuous power supply, as it significantly increases the amount of components needed.

soo the ESP32 blinks 3 times during its startup and prints "Power Generated" when a step is detected..ik its simple but thats what it can do

i might change my mind and add a battery later but not now :)...now i lowkey forgot to use hackatime as to show my coding process or a lapse but the coding time was approx like 2-3 hrs sooo yeaa :(

worked on the bom.csv too like fixed all the links that weren't working and used newer cheap prices for my build. 

now, for the ESP32 i had multiple ways to do it..like adding a battery on it and it can actually count the number of steps and save it..but as the battery makes it more on the expensive side and more complex, i pivoted to do smthng more simple instead of just increasing the wight and the wiring in the model. 

![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTEzMDkwLCJwdXIiOiJibG9iX2lkIn19--99006ce15ce2bc46db0d612436f66e018b23d51b/image.png)

<img width="1476" height="767" alt="image" src="https://github.com/user-attachments/assets/33fb543e-0b54-463f-b653-f9fddd16d961" />


# 3/27/2026 - first time doing pcb

_Time spent: 4.4h_

To improve this project, I worked on a PCB for the first time, and it kinda had many difficulties due to bugs and all that, but I think I pulled it through for a simple PCB...now it was my first time so i used easyEDA and not kicad cause it seemed simpler but i'll be using kicad for other projects for my complex wirings :)

now using EasyEDA looked very simple and thank god I was able to go through all of the libraries and get the components needed; the PCB making took some time as I had to fix all the positions of the wires, making them straight and not curved. 

my primary focus was on clean routing so i prioritized simple straight lines instead of curved ones so that it's easy to troubleshoot later. By creating a physical PCB layout, I’ve moved beyond a basic wiring diagram to a professional, reliable solution for my project.

thats it :)

![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTI4MDAwLCJwdXIiOiJibG9iX2lkIn19--e14cb97514578d9217416f2b9a7e0c8587e9ba02/image.png)

<img width="988" height="780" alt="Screenshot 2026-04-20 201507" src="https://github.com/user-attachments/assets/692bdaaf-92c7-49d1-b8b7-dc72c24308df" />


# 4/20/2026 - Making CAD better

_Time spent: 3.5h_

soooo i used the 3D model of the PCB and used screw mounts to mount the PCB with it's components into the bottom panel in Onshape.

it worked, and also i replaced the cylinders with springs using the feature script tool in onshape and it looks better...i may try to implement animations into the springs...now the good thing abt this was that i finally found some springs to actually replace the dead beat cylinders however using a slider mate to show the animations still remain a problem and may not do it cause it's actually takin much of my time :(

why did i mount the PCB? 

i thought it was just floating in the air and it obvi had screw holes on it for a reason and using that as screw mounts would be a good man thing to do :)

![Screenshot 2026-04-20 165109](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTM1Mjg3LCJwdXIiOiJibG9iX2lkIn19--5d6389da364bec72b59dcba3e8b362bb8e315d7e/Screenshot%202026-04-20%20165109.png)

# 4/21/2026 - Added screws everywhere

_Time spent: 5.5h_

worked on the last review...everything is screwed up so it doen't float around and actually looks buildable and not just a "dream"...

thats itt...will maybe work on how to show that a string is attached from the top panel to the motor and that's how it moves.

so the good thing abt this session was that i didnt even know that we had screws in onshape..,and finding these screws actually feel good as it's looking like a good project...all thanks to the reviewers :), but a bad thing again is the slider mate which keeps on troubling me and I maybe won't show the animation as it's a lower priority than others :(

adding the screw was not only for aesthetics but it was necessary to show how everything is attached priving the device can be actually built. while ill still learn about slider mates, i dont think i would be adding anything to the CAD model now as it's complete to me :)

thats it :)

![Screenshot 2026-04-21 210947](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTM1MzQzLCJwdXIiOiJibG9iX2lkIn19--681ded76071225fbedd415b7cd459ae1dcd39f48/Screenshot%202026-04-21%20210947.png)

<img width="963" height="728" alt="Screenshot 2026-04-20 205010" src="https://github.com/user-attachments/assets/f7cc3859-a56a-4067-a8f5-2da7602b89dd" />

<img width="1067" height="823" alt="Screenshot 2026-04-20 202405" src="https://github.com/user-attachments/assets/05bacae3-9ba5-4bd3-b991-ebe1b4c29c1d" />

<img width="626" height="612" alt="Screenshot 2026-04-21 132745" src="https://github.com/user-attachments/assets/1949d861-77bf-46bc-bec1-a41f4c83632c" />

<img width="721" height="628" alt="Screenshot 2026-04-21 131917" src="https://github.com/user-attachments/assets/79deb6f6-de34-4233-8701-0ed38cfb612f" />

<img width="1052" height="797" alt="Screenshot 2026-04-23 231851" src="https://github.com/user-attachments/assets/7a26bfa2-b2e8-4f43-8932-6d5a458f6a26" />





![Screenshot 2026-04-21 210935](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6MTM1MzQ0LCJwdXIiOiJibG9iX2lkIn19--15fba988906f281c668a318b9953cd0618f6fa86/Screenshot%202026-04-21%20210935.png)
