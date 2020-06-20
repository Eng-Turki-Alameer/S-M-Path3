# Installing Tensorflow Lite on the Raspberry pi 

![alt text](https://i.ytimg.com/vi/krT4JTg9KJE/maxresdefault.jpg)

## Step 1 : Update the raspberry pi 

* `sudo apt-get update`
* `sudo apt-get dist-upgrade`
-------------------------------
Note : 
make sure the camera interface is enabled in the Raspberry Pi Configuration menu. Click the Pi icon in the top left corner of the screen, select Preferences -> Raspberry Pi Configuration, and go to the Interfaces tab and verify Camera is set to Enabled. If it isn't, enable it now, and reboot the Raspberry Pi.

![alt text](https://github.com/EdjeElectronics/TensorFlow-Lite-Object-Detection-on-Android-and-Raspberry-Pi/raw/master/doc/camera_enabled.png)
------------------------------
## Step 2 : Download this repository and create virtual environment 
#### 1. clone this GitHub repository by issuing the following command. The repository contains the scripts we'll use to run TensorFlow Lite, as well as a shell script that will make installing everything easier.
 
* `git clone https://github.com/EdjeElectronics/TensorFlow-Lite-Object-Detection-on-Android-and-Raspberry-Pi.git`

This downloads everything into a folder called TensorFlow-Lite-Object-Detection-on-Android-and-Raspberry-Pi. That's a little long to work with, so rename the folder to "tflite1" and then cd into it:

```
mv TensorFlow-Lite-Object-Detection-on-Android-and-Raspberry-Pi tflite1
cd tflite1
```
We'll work in this /home/pi/tflite1 directory for the rest of the guide. 

----------------------------
#### 2. create a virtual environment called "tflite1-env".

- Install virtualenv :
* `sudo pip3 install virtualenv`
- create the "tflite1-env" virtual environment :
* `python3 -m venv tflite1-env`
- activate the environment by run this command :
* `source tflite1-env/bin/activate`

At this point, here's what your tflite1 directory should look like if you run * `ls` .

![alt text](https://github.com/EdjeElectronics/TensorFlow-Lite-Object-Detection-on-Android-and-Raspberry-Pi/raw/master/doc/tflite1_folder.png)


#### If your directory looks good, it's time to move on to Step 3

## Step 3 : install TensorFlow, OpenCV, and all the dependencies needed for both packages. 
 
 Note : OpenCV is not needed to run TensorFlow Lite, but the object detection scripts in this repository use it to grab images and draw detection results on them.
 
 To make things easier, There is a shell script in "tflite1 folder" that will automatically download and install all the packages and dependencies. Run it by executing this command:
 
 * `bash get_pi_requirements.sh`
 
 This downloads about 400MB worth of installation files, so it will take a while. Go grab a cup of coffee while it's working! If you'd like to see everything that gets installed, simply open get_pi_dependencies.sh to view the list of packages.
 
 ----------------------------------
 
 NOTE: If you get an error while running the bash get_pi_requirements.sh command, it's likely because your internet connection timed out, or because the downloaded package data was corrupted. If you get an error, try re-running the command a few more times.
 
 -----------------------------------------------
 ______________________________________________________________________
 # Using Google's sample tensorflow Lite object detection model
 
 ### Step 1 : Download Google's sample model 
 
 [the Object Detection page of the official TensorFlow website](https://www.tensorflow.org/lite/models/object_detection/overview)

or use the terminal to download sample model by run : 

``` 
wget https://storage.googleapis.com/download.tensorflow.org/models/tflite/coco_ssd_mobilenet_v1_1.0_quant_2018_06_29.zip
```

Unzip it to a folder called "Sample_TFLite_model" by run (this command automatically creates the folder): 
 
 * `unzip coco_ssd_mobilenet_v1_1.0_quant_2018_06_29.zip -d Sample_TFLite_model`
 
 Now, the sample model is all ready to go!
 
 ### Step 2 : Run the TensorFlow Lite model!
 
 It's time to see the TFLite object detection model in action! First, free up memory and processing power by closing any applications you aren't using. Also, make sure you have your webcam or Picamera plugged in.
 
 #### Run the real-time webcam detection script by Typing the following command from inside the /home/pi/tflite1 directory. (Before running the command, make sure the tflite1-env environment is active by checking that (tflite1-env) appears in front of the command prompt.)
 
 * `python3 TFLite_detection_webcam.py --modeldir=Sample_TFLite_model` 
 ---------------
 Note : The TFLite_detection_webcam.py script will work with either a Picamera or a USB webcam.
 
 --------
 Refenace : [How To Run TensorFlow Lite on Raspberry Pi for Object Detection](https://www.youtube.com/watch?v=aimSGOAUI8Y&t=9s)
