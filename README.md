# Robodive-Project-1
This repo contains info and details about the first project done under Robodive program by Arsh and Chinar mentee group . This project is designed to automate gameplay in the Chrome Dino game by detecting obstacles and triggering the spacebar for the Dino to jump.
The Step-wise process to make the project is as follows -

🎯Step 1: Gather the Components reuqired for the project which are listed below -
       1.Arduino UNO 
       2.2 x 10KΩ Resistors
       3.Servo Motor (Micro Servo 9g SG90) (DataSheet - https://trudyo.com/wp-content/uploads/2023/01/SG90-9G-Servo-Motor-            
         Datasheet.pdf)
       4.2 x Light Dependent Resistors (LDRs) 
       5.Breadboard and Jumper Wires
       6.Servo Arm
       
Main Components and their use are :
-Light Dependent Resistors (LDRs): To distinguish between background and obstacle.
-Servo Motor: To physically hit the spacebar.

🎯Step 2: Setup the circuit to get reading from the photoresistor and note down the reading range and threshold value for dark and light parts-
-Connect one leg of the LDR to the 5V pin on the Arduino.
-Connect the other leg of the LDR to analog pin A0.
-Connect a 10KΩ resistor between the LDR leg (connected to A0) and GND.

Test and record the analog readings for different scenarios:

Threshold Value = (Background Value + Obstacle Value)/2

Day Mode: Background (~800), Obstacle (~680), Threshold Value (~740)
Night Mode: Background (~650), Obstacle (~280), Threshold Value (~465)

Since the Analog pins of arduino measure Voltage and not resistance where the voltage should be of the range 0-5V hence the LDR is added to a voltage divider circuit such that depending on the variation in resitance of LDR due to light , voltage variates and an external resitance is added such that Voltage variation remains in between limits of 0-5V .

Since the Resistance offered by LDR ranges from 1-75kohm hence a resistance of 10kohm is ideal to make the Vout ranging from 0.45V to 4.4V.
Formulation for Voltage divider has been attached in form of an image .
![Screenshot 2025-01-18 170509](https://github.com/user-attachments/assets/626cfb94-3a10-48b8-bb3d-d13a8f69a61c)

🎯Step 3: Build the actual circuit and write Code for it :
Connect the components as follows:
-LDR1 (Obstacle Detection): Connect to analog pin A0 with a 10KΩ resistor.
-LDR2 (Ambient Light Detection): Connect to analog pin A1 with a 10KΩ resistor.
-Servo Motor: Connect to digital pin 9.
-Power the circuit using the Arduino.

Circuit image has been attached to this readme file .
![Screenshot 2025-01-18 170524](https://github.com/user-attachments/assets/fdbfcee5-d503-44f1-b889-a63cf9d83af6)

Code Implementation
The Arduino code processes inputs from LDRs and controls the servo motor accordingly. Below is a brief explanation of the code:

Setup Phase: Initializes pins and sets up serial communication.
Loop Phase: Continuously reads LDR values and determines:
            -Day or Night Mode based on LDR2 values.
            -Presence of an obstacle using LDR1 values.

Code file has been attached differently.

🎯Step 4: Final Assembly 
-Assemble the circuit on a breadboard.
-Attach the servo arm to the spacebar.
-Upload the code to the Arduino and test the setup.

Summary on how it works :
-Obstacle Detection: LDR1 identifies obstacles based on brightness contrast.
-Day/Night Mode: LDR2 adjusts thresholds for detection based on ambient light.
-Servo Actuation: The servo motor hits the spacebar to make the Dino jump.

Demonstration(Video of Working Model) : https://drive.google.com/file/d/1vrDwBAlGkw_YuiGm2M2biwRv-A-Wetxp/view?usp=drive_link
