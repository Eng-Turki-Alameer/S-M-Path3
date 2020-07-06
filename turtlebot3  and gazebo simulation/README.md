# TurtleBot3 Installation
![alt text](https://emanual.robotis.com/assets/images/platform/turtlebot3/overview/turtlebot3_with_logo.png)
----------------------------------------
TurtleBot3 is a small, affordable, programmable, ROS-based mobile robot for use in education, research, hobby, and product prototyping. The goal of TurtleBot3 is to dramatically reduce the size of the platform and lower the price without having to sacrifice its functionality and quality, while at the same time offering expandability. The TurtleBot3 can be customized into various ways depending on how you reconstruct the mechanical parts and use optional parts such as the computer and sensor. In addition, TurtleBot3 is evolved with cost-effective and small-sized SBC that is suitable for robust embedded system, 360 degree distance sensor and 3D printing technology.

---------------------------------------

## Step 1 : install turtlebot3 packeges and turtle bot simulation
1. Install Dependent ROS Packages 

```
$ sudo apt-get install ros-kinetic-joy ros-kinetic-teleop-twist-joy ros-kinetic-teleop-twist-keyboard ros-kinetic-laser-proc ros-kinetic-rgbd-launch ros-kinetic-depthimage-to-laserscan ros-kinetic-rosserial-arduino ros-kinetic-rosserial-python ros-kinetic-rosserial-server ros-kinetic-rosserial-client ros-kinetic-rosserial-msgs ros-kinetic-amcl ros-kinetic-map-server ros-kinetic-move-base ros-kinetic-urdf ros-kinetic-xacro ros-kinetic-compressed-image-transport ros-kinetic-rqt-image-view ros-kinetic-gmapping ros-kinetic-navigation ros-kinetic-interactive-markers

```

```
$ cd ~/catkin_ws/src/
$ git clone https://github.com/ROBOTIS-GIT/turtlebot3_msgs.git
$ git clone -b kinetic-devel https://github.com/ROBOTIS-GIT/turtlebot3.git
$ git clone https://github.com/ROBOTIS-GIT/turtlebot3_simulations.git
$ cd ~/catkin_ws 
$ catkin_make
```
## Step 2 : Launch the turtleBot simulation 
Note : The `${TB3_MODEL}` is the name of the model you are using in `burger`, `waffle`, `waffle_pi`.
```
$ source devel/setup.bash
$ export TURTLEBOT3_MODEL= ${TB3_MODEL}
$ roslaunch turtlebot3_fake turtlebot3_fake.launch

```
- You can even control the virtual TurtleBot3 in gazebo with a teleoperation node.

#### 0pen new terminal !
```
$ cd ~/catkin_ws 
$ source devel/setup.bash
$ export TURTLEBOT3_MODEL= ${TB3_MODEL}
$ roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch
```

![alt text](https://github.com/Eng-Turki-Alameer/S-M-Path3/blob/master/turtlebot3%20%20and%20gazebo%20simulation/Screenshot%20from%202020-07-06%2018-57-31.png)
