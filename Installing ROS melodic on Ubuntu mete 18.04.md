# Installing ROS melodic on Ubuntu mete 18.04
-------------------------------------
What is ROS ?  
![alt text](https://miro.medium.com/max/1400/1*pmYoLgZ0P_M0VnJXF-RFvg.png)

ROS is operating system is a software that provides interface between the applications and the hardware. It deals with the allocation of resources such as memory, processor time etc. by using scheduling algorithms and keeps record of the authority of different users, thus providing a security layer. The operating systems may include basic applications such as web browsers, editors, system monitoring applications etc. It almost always has a low level program called the kernel that helps in interfacing with the hardware and is essentially the most important part of any operating system. The operating systems may or may not provide Graphical User Interfaces.
-------------------------------------

![alt text](https://i0.wp.com/varhowto.com/wp-content/uploads/2020/06/How-to-Install-ROS-Melodic-on-Ubuntu-18.04.png)

Install ROS melodic on Ubuntu mete 18.04

## Step 1 : Setup your computer to accept software from packages.ros.org.
1. Setup your sources.list
#### * `sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'`
2. Set up your keys 
#### * `sudo apt-key adv --keyserver 'hkp://keyserver.ubuntu.com:80' --recv-key C1CF6E31E6BADE8868B172B4F42ED6FBAB17C654`
If you experience issues connecting to the keyserver, you can try substituting hkp://pgp.mit.edu:80 or hkp://keyserver.ubuntu.com:80 in the previous command.
Alternatively, you can use curl instead of the apt-key command, which can be helpful if you are behind a proxy server:
#### * `curl -sSL 'http://keyserver.ubuntu.com/pks/lookup?op=get&search=0xC1CF6E31E6BADE8868B172B4F42ED6FBAB17C654' | sudo apt-key add -`

## Step 2 : Installation 

1. First, make sure your Debian package index is up-to-date:
#### * `sudo apt update`

2. Start installation  
#### * `sudo apt install ros-melodic-desktop-full`

## Step 3 :ROS Dependencies

1.  To create and manage your own ROS workspaces, there are various tools and requirements that are distributed separately. For example, rosinstall is a frequently used command-line tool that enables you to easily download many source trees for ROS packages with one command. To install this tool and other dependencies for building ROS packages, run:
#### * `sudo apt install python-rosdep python-rosinstall python-rosinstall-generator python-wstool build-essential`
2. Before you can use many ROS tools, you will need to initialize rosdep.
#### *`sudo apt install python-rosdep`
#### * `sudo rosdep init`
#### * `rosdep update`



## Step 4 : Environment setup 
We have ROS and the dependencies manager installed. Let’s configure our environment. This is a very important step, once we have it done, working with ROS will be smooth.
ROS is installed at /opt/ros/<distro> (in this case /opt/ros/melodic). In order to have ROS commands available, it’s needed to source the shell file inside of the installation folder. This is done like the following:

#### * `source /opt/ros/melodic/setup.bash`
------------------------------------------

Note :
But.. considering we want to have it available in every terminal we open, we use to have a “shortcut”, which is adding this command to the file "/home/<user>/.bashrc". The .bashrc file is called every time a new terminal is opened, therefore, we won’t need to source ROS setup, since we have the instruction in this file. In order to add the command to the file, you can edit it manually using an editor of your preference or just execute the command below:
* `echo "source /opt/ros/melodic/setup.bash" >> ~/.bashrc`

-------------------------------------------

## Step 5 : Testing it
1. If you have the same terminal opened from the beginning, consequently, you have to execute the source for your .bashrc file to have ROS commands available.
#### *`source ~/.bashrc`
2. The first thing we should try it running roscore. In other words, we will run the process in charge of communicating everything ROS-related in a ROS environment.
#### *`roscore`
then your terminal should be like this 
```
... logging to /home/ubuntu/.ros/log/c70b2cce-e773-11e9-9f15-027a087bcd00/roslaunch-ip-172-31-31-24-15073.log
Checking log directory for disk usage. This may take awhile.
Press Ctrl-C to interrupt
Done checking log file disk usage. Usage is <1GB.

started roslaunch server http://ip-172-31-31-24:45551/
ros_comm version 1.14.3


SUMMARY
========

PARAMETERS
 * /rosdistro: melodic
 * /rosversion: 1.14.3

NODES

auto-starting new master
process[master]: started with pid [15096]
ROS_MASTER_URI=http://ip-172-31-31-24:11311/

setting /run_id to c70b2cce-e773-11e9-9f15-027a087bcd00
process[rosout-1]: started with pid [15107]
started core service [/rosout]
```
## Your terminal must be stuck here, therefore, you can’t execute anything else while you have roscore process there. roscore is running and ready to serve to other ROS processes!

Referances : 
[Ubuntu install of ROS Melodic](http://wiki.ros.org/melodic/Installation/Ubuntu) , [How to Install ROS on Ubuntu 18.04](https://www.theconstructsim.com/how-to-install-ros-on-ubuntu/)

