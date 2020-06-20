# Gazebo simulation environment
![overview](myhouse.png)

## Overview
This repo is inspired by the official tutorials on the gazebo website, mainly [model editor](http://gazebosim.org/tutorials?tut=guided_b3), and [world plugin](http://gazebosim.org/tutorials?tut=plugins_hello_world&cat=write_plugin). This gazebo environment has the following components.
1. Models of myhouse and a four-wheeled robot.
2. A world of that consists of myhouse model and two instances of the robot.
3. A plugin that runs when the world is started.

## Clone and compile this repo  
```
git clone https://github.com/Robotawi/gazebo_world.git
cd gazebo_world
mkdir build && cd build
cmake .. 
make
```

## Run the simulation with the plugin
```
cd ../world
gazebo myhouseing_mobilerobots.sdf
```
If no required libraries are missing, gazebo loads and the following message is printed to the console
```
Welcome to Mohamed's world!
```

This repo is to be extended according to gazebo [tutorials](http://gazebosim.org/tutorials).
