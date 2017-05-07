# Humanoid


# Abstract:
Our idea is to make a full fledged human-like bot which can perform almost all functions of human. This semi-automated bot can be deployed in various domains such as in paramedics, military, healthcare, banking, industries, etc. Moroever, its main utility arises in fields which is risky for humans. For eg.- in fire fighting situations, etc.

# Brief Description: 
It is one of the long-term projects of Models and robotic section in which our ultimate aim is to develop a bot which totally resembles a human being, can do different type of works with greater accuracy and efficiency when compared to a human. <br/> 
This year we prepared a model for which our intermediate aim was to make the bot walk properly which we achieved up to a significant extent. <br/>
We used 3D printed parts in our bot to reduce weight and for better accuracy which could be possible only with the help of Tinkering lab, IIT Roorkee. It helped in reducing the cost involved in the fabrication of the model, however time was a constraint, as 3D printing takes a lot of time. Another factor was the strength of the material used for 3D printing. We faced failure of some parts during the testing of the bot, but it can be improved by changing the material as well as introducing some modifications in the design.

# Pre-requisite of Software:
Complete project is arduino based. Arduino IDE is required as a software which can be downloaded from https://www.arduino.cc/en/Main/Software

# Components Used:
1. dc geared motor(200 rpm) - 8
2. rotary potentiometer(10k ohm) -8
3. arduino mega - 1
4. adapter(12 V dc) - 2
5. motor driver(control speed of two dc motors) - 4

# Mechanical Design:
 After going through different types of design, we finally reached this type of stable design.
 
 ![alt text](/humanoid-mech-image1.jpg)
 
 Complete 3d view of this design: https://github.com/marsiitr/Humanoid/blob/master/one%20leg%20design.PDF (open this file in Adobe Acrobat Reader DC or any relevant software which can open 3d pdf file).
 
 Major parts used were 3d printed from Tinkering Labroratory,IITR
 
 # Electronics Design: 
![alt text](/schematic%20-humanoid.JPG)
Eagle Schematics file- https://github.com/marsiitr/Humanoid/blob/master/design%20files/Mars.sch

# Control:
It has 4 d.o.f. in each leg which is sufficient for providing straight walking motion. It is to be noted that for same pair of dc motors, we can achieve side-side as well as front-back motion of a joint. For eg.- If the two motors (attached in the same half of one leg) is rotated with same speed, we achieve front-back motion.<br/>
Angle of rotation of joint is tracked with help of rotary pot. attached.<br/>
Thus we control the walking of bot by giving angle (as a setpoint) for each half of a leg and correspondingly error can be calculated.<br/> 
Error = Angle_given(Angle to be moved) - Current_Angle(Corresponding pot. reading).<br/>
This error value is fed in PID and output of PID is fed into motor controller input(as a pwm signal) which control direction and rotation speed of motor and thus corresponding joint rotates and reaches the given angle value and then stops.<br/>
This method is employed in all 8 motors to get desired gait.

# Results and Future Scope:
We are able to achieve different bending of legs autonomously but bot still need development in terms of lifting one leg and further walking. It requires major development in future which includes complete making of upper part of body.

# Team:
Mr. Manish Goyal(Senior Mentor)<br/>
Mr. Peyush Jain(Mentor)<br/>
Mr. Animesh Mishra(Mentor)<br/>
Mr. Kalp Garg(Member)<br/>
Mr. Rohit Agrawal(Member)<br/>
Mr. Devashish Patil(Member)<br/>
Mr. Sandy Sandeep(Member)<br/>
Mr. Tarun Saxena(Member)<br/>
Mr. Alok Kumar(Member)<br/>
Mr. Ravi Yadav Mry(Member)<br/>
Mr. Anurag Soni(Member)<br/>
Mr. Abhinav Jain(Member)<br/>
Mr. Aayush Singh Chauhan(Member)



