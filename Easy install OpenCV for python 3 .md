# Easy install OpenCV for python on Mac, Ubuntu, and Raspberry Pi 

![alt text](https://pyimagesearch.com/wp-content/uploads/2017/08/faster_for_loop_header.png)

 Installing OpenCV has never been easy and always required a lot of careful usage of the command line to build from source.
 This was especially painful when working with a Raspberry Pi as building and installing OpenCV took a lot of time on the RPi, especially on the older models. 
 Luckily this has changed very recently as it is now possible to install OpenCV with pip

 -----------------------------
 ## Step 1 : install/update pip 
  Pip is the main package manager for python that we will also use to install opencv. 

#### * `wget https://bootstrap.pypa.io/get-pip.py`
- Now to install pip for Python 3 enter:
#### * `sudo python3 get-pip.py`
- Or if you are still working with Python 2.7, simply enter:
#### * `sudo python get-pip.py`
## Step 2 : we need to install some additional packages. Make sure apt-get is fully up to date by entering the following in Terminal:
### this Step only for the raspberry pi 
#### * `sudo apt-get update`
- Now install the prerequisites:
#### * `sudo apt-get install libhdf5-dev libhdf5-serial-dev`
#### * `sudo apt-get install libqtwebkit4 libqt4-test`
#### * `sudo apt-get install libatlas-base-dev libjasper-dev libqtgui4 python3-pyqt5`
## Step 3 : Installing OpenCV using Pip

#### * `sudo pip install opencv-contrib-python`
if opencv has been installed with python 2.7 use this command :
#### * `sudo pip3 install opencv-contrib-python`

## Final Step : Test/check installation 
Open a terminal window and enter python3 to start Python.
Now to make sure you have installed OpenCV correctly enter:

#### * `import cv2`
#### * `cv2.__version__`

Your terminal window should look like:
```
$ python3 
Python 3.5.3 (default, Sep 27 2018, 17:25:39) 
[GCC 6.3.0 20170516] on linux
Type "help", "copyright", "credits" or "license" for more information.
>>> import cv2
>>> cv2.__version__
'3.4.4'
```

#### note : I successfully installed opencv in ubuntu mate 18.04 running on my raspberry pi 3 b+ and Ubuntu desktop 16.04 running on my virtual machine
-------------------------------------------------------------
Referance :
title :Easy install OpenCV for python on Mac, Ubuntu, and Raspberry Pi . [link](http://jollejolles.com/easy-install-opencv-for-python-on-mac-ubuntu-and-raspberry-pi/)
