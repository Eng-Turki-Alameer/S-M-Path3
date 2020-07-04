# Controling Arduino with ROS using rosserial package


Note:  If you do not already have an Arduino IDE installed, install it ([Arduino IDE](http://arduino.cc/en/Main/Software))

-------------------------------
#### Step 1 : Installing rosserial software on the ROS workstation 

```
  cd <ws>/src
  git clone https://github.com/ros-drivers/rosserial.git
  cd <ws>
  catkin_make
  catkin_make install

```
--------------------------
#### Step 2 : Install ros_lib into the Arduino Environment

The preceding installation steps created the necessary libraries, now the following will create the ros_lib folder that the Arduino build environment needs to enable Arduino programs to interact with ROS.
In the steps below, <sketchbook> is the directory where the Linux Arduino environment saves your sketches. Typically this is a directory called sketchbook or Arduino in your home directory. e.g cd ~/Arduino/libraries

`cd <sketchbook>/libraries`

`rosrun rosserial_arduino make_libraries.py `

Note : Currently you can install the Arduino libaries directly in the Arduino IDE. Just open the Library Manager from the IDE menu in Sketch -> Include Library -> Manage Library. Then search for "rosserial". This is useful if you need to work on an Arduino sketch but don't want to setup a full ROS workstation.

![alt text](http://wiki.ros.org/rosserial_arduino/Tutorials/Arduino%20IDE%20Setup?action=AttachFile&do=get&target=arduino_ide_examples_screenshot.png)
----------------------------------------------------------------------

#### Step 3 : Creating a Subscriber

1. creating a subscriber ROS node inside the Arduino, which will listen to a topic called chatter. Whenever a value publishes this topic, the LED will change its state.

```
#include <ros.h>
#include <std_msgs/Int8.h>

ros::NodeHandle  nh;

void messageCb( const std_msgs::Int8& toggle_msg){
 if (toggle_msg.data==4)
 {
  digitalWrite(LED_BUILTIN, HIGH-digitalRead(LED_BUILTIN));   // blink the led
  delay(10);
   digitalWrite(LED_BUILTIN, LOW-digitalRead(LED_BUILTIN));   // blink the led
  

}

}
ros::Subscriber<std_msgs::Int8> sub("chatter", &messageCb );

void setup()
{ 
  pinMode(LED_BUILTIN, OUTPUT);
  nh.initNode();
  nh.subscribe(sub);
}

void loop()
{  
  nh.spinOnce();
  //delay(10);
}
```

2. Running the Code

 launch the roscore in a new terminal window: `roscore`
 Next, run the rosserial client application that forwards your Arduino messages to the rest of ROS. Make sure to use the correct serial port:

`rosrun rosserial_python serial_node.py /dev/ttyACM0 `

----------------------------------------------------
#### Step4 :  Creating a Publisher

1. Writing the Publisher Node
```
$ roscd beginner_tutorials
$ cd scripts
$ sudo nano talker.py 
```
this a python publisher script
```
import rospy
from std_msgs.msg import Int8

def talker():
    pub = rospy.Publisher('chatter', Int8, queue_size=10)
    rospy.init_node('talker', anonymous=True)
    rate = rospy.Rate(0.4) # 10hz
    while not rospy.is_shutdown():
        turki_str = 4
        rospy.loginfo(turki_str)
        pub.publish(turki_str)
        rate.sleep()
if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass
```

2. Running the Publishe
Make sure that a roscore is up and running: `roscore`
make sure you have sourced your workspace's setup.sh file 
```
# In your catkin workspace
$ cd ~/catkin_ws
$ source ./devel/setup.bash
$ rosrun beginner_tutorials talker.py 
```
-----------------------------------------------------------------------
![alt text](https://github.com/Eng-Turki-Alameer/S-M-Path3/blob/master/Control%20Arduino%20With%20ROS/test.png)
![alt text](https://github.com/Eng-Turki-Alameer/S-M-Path3/blob/master/Control%20Arduino%20With%20ROS/test2.png)

