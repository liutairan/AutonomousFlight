# AutonomousFlight
Autonomous flight firmware for quadcopter groups.

This repository was created for my own quadcopters hoping for totally autonomous flights. Unlike the common flight control firmware, this firmware will provide autonomous control for quadcopter fleet. This is part of my research project.

Traditionally, a lot of quadcopter firmwares were using PID controller as the core flight controller, for both gesture and position. However, PID controllers have some unwanted limitations. As a research project, this firmware will try to use more controllers designed based on more "advanced" control theories, trying to achieve better performance. Unlike PID controller, the controllers used in this firmware will be designed with the consideration of dynamics models.
