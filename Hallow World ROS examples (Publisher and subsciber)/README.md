# Creating  a Simple Publisher and Subscriber (Python) 

![alt text](https://github.com/Eng-Turki-Alameer/S-M-Path3/blob/master/Hallow%20World%20ROS%20examples%20(Publisher%20and%20subsciber)/2020-07-04-000800_1824x984_scrot.png)

## Step 1 :Creating a ROS Package
First change to the source space directory of the catkin workspace you created
```
$ cd ~/catkin_ws/src
```
 #### Now use the catkin_create_pkg script to create a new package called 'beginner_tutorials' which depends on std_msgs, roscpp, and rospy:
* `catkin_create_pkg beginner_tutorials std_msgs rospy roscpp`

rospy : rospy is a pure Python client library for ROS. The rospy client API enables Python programmers to quickly interface with ROS Topics, Services, and Parameters
roscpp : is a C++ implementation of ROS. It provides a client library that enables C++ programmers to quickly interface with ROS Topics, Services, and Parameters. 
std_msgs : Standard ROS Messages including common message types representing primitive data types and other basic message constructs, such as multiarrays.
```
# This is an example, do not try to run this
# catkin_create_pkg <package_name> [depend1] [depend2] [depend3]

```
the compile and install the package
* `catkin_make`
* `catkin_make install`

----------------------------------------
## Step 2 : Writing the Publisher Node 
1. Change directory into the beginner_tutorials package :
* `roscd beginner_tutorials`
2. create a 'scripts' folder to store our Python scripts :
```
$ mkdir scripts
$ cd scripts
```

3. Then download the example script talker.py to your new scripts directory and make it executable

```
$ wget https://raw.github.com/ros/ros_tutorials/kinetic-devel/rospy_tutorials/001_talker_listener/talker.py
$ chmod +x talker.py
```

4. Then Add the following to your CMakeLists.txt. This makes sure the python script gets installed properly, and uses the right python interpreter.
```
catkin_install_python(PROGRAMS scripts/talker.py
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
```

----------------------------------------------------

## Step 3 : Writing the Subscriber Node

1. Download the listener.py file into your scripts directory:
```
$ roscd beginner_tutorials/scripts/
$ wget https://raw.github.com/ros/ros_tutorials/kinetic-devel/rospy_tutorials/001_talker_listener/listener.py
$ chmod +x listener.py
```

2.  edit the catkin_install_python() call in your CMakeLists.txt so it looks like the following:
```
catkin_install_python(PROGRAMS scripts/talker.py scripts/listener.py
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
```

-----------------------------------------
## Step 3 : Building your nodes
```
$ cd ~/catkin_ws
$ catkin_make
$ catkin_make install

```
-----------------------------------------------------------------------------------------------------------------------------

* ## Running the Publisher : 
- run ros core
```
$ cd ~/catkin_ws
$ source ./devel/setup.bash
$ roscore
```
- open new terminal
``` 
$ cd ~/catkin_ws
$ source ./devel/setup.bash
$ rosrun beginner_tutorials talker.py   
```
* ## Running the Subscriber
` $ rosrun beginner_tutorials listener.py  `


