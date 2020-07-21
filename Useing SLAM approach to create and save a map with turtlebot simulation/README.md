# Useing SLAM approach to create and save a map with turtlebot simulation


------------------------------------------------
### Simultaneous Localization And Mapping (SLAM)



SLAM is a method used for autonomous vehicles that lets you build a map and localize your vehicle in that map at the same time. 
SLAM algorithms allow the vehicle to map out unknown environments. Engineers use the map information  to carry out tasks such as path planning and obstacle avoidance.


------------------------------------------------------

### Virtual SLAM with TurtleBot3

#### Step 1 : Launch turtlebot gazebo simulation 

```
$ cd catkin_ws
$ source devel/setup.bash
$ export TURTLEBOT3_MODEL=burger
$ roslaunch turtlebot3_gazebo turtlebot3_world.launch
```

![alt text](https://github.com/Eng-Turki-Alameer/S-M-Path3/blob/master/Useing%20SLAM%20approach%20to%20create%20and%20save%20a%20map%20with%20turtlebot%20simulation/2020-07-21-161438_1360x667_scrot.png)

Step 2 : Remotely Control TurtleBot3 usig keyboard 
```
$ cd catkin_ws
$ source devel/setup.bash
$ export TURTLEBOT3_MODEL=burger
$ roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch
```

#### Step 3 : Launch SLAM

```
$ cd catkin_ws
$ source devel/setup.bash
$ export TURTLEBOT3_MODEL=burger
$ roslaunch turtlebot3_slam turtlebot3_slam.launch slam_methods:=gmapping
```

![alt text](https://github.com/Eng-Turki-Alameer/S-M-Path3/blob/master/Useing%20SLAM%20approach%20to%20create%20and%20save%20a%20map%20with%20turtlebot%20simulation/2020-07-21-161308_1360x667_scrot.png)


![alt text](https://github.com/Eng-Turki-Alameer/S-M-Path3/blob/master/Useing%20SLAM%20approach%20to%20create%20and%20save%20a%20map%20with%20turtlebot%20simulation/2020-07-21-162620_1360x667_scrot.png)


#### Step4 : Save the Map

```
$ cd catkin_ws
$ source devel/setup.bash
$ rosrun map_server map_saver -f ~/map
```

![alt text](https://github.com/Eng-Turki-Alameer/S-M-Path3/blob/master/Useing%20SLAM%20approach%20to%20create%20and%20save%20a%20map%20with%20turtlebot%20simulation/map.jpg)

-----------------------------------------------------------------------

