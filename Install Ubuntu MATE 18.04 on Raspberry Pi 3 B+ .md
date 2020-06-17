# Install Ubuntu MATE 18.04 on Raspberry Pi 3 B+
![alt text](https://thumbor.forbes.com/thumbor/960x0/https%3A%2F%2Fblogs-images.forbes.com%2Fjasonevangelho%2Ffiles%2F2019%2F02%2Fmate-on-pi.jpg)

----------------------------------
## Why Ubuntu on a Raspberry Pi 3 B+?
The main supported OS for Raspberry Pi is Raspbian, an OS based on Debian, and adapted to the Raspberry Pi hardware.
So, why would you want to use Ubuntu?
- If you work with ROS (Robot Operating System), you know that the main supported OS is Ubuntu (at least for ROS 1.0)

- You may simply already use Ubuntu in your computer and some web servers, and you want to work on the Pi while keeping the same environment.
- Or you are just curious about trying new stuff!
----------------------------------

## Step 1 : Download the Ubuntu MATE image for Raspberry Pi 3 B+

- [Download Ubuntu MATE 18.04 ](https://ubuntu-mate.org/download/armhf/bionic/)

## Step 2 : Flash the Ubuntu OS image into a micro SD card

1. micro SD card requirements
Make sure you get a class 10 micro SD card. You can see the class of the card when you buy it. The class is related to the writing speed. As your SD card will serve as the complete OS for your Raspberry Pi 3 B+, you want something that is fast enough.
Your micro SD card should also have at least 8GB of space. This is the bare minimum, I advise you take a bigger card (16 or 32GB).

2. Extract the Ubuntu MATE image
OK, you have a micro SD card. Now you need to flash the image into this card.

Warning: don’t flash the archive – .xz file, first you need to extract it! (might sound obvious but the first time I used a Raspberry Pi I made this mistake)

To extract a .xz file, use:

7-zip or a similar software on Windows. Right-click on the image > extract here.
On Linux, use unxz: unxz file.img.xz (if you don’t have unxz installed: sudo apt install xz-utils)

3. Flash the image
To flash the image I recommend you use the open source Etcher software.
This is a very handy multi-platform software for flashing SD cards.
 
- [Download Etcher](https://www.balena.io/etcher/)

![alt text](https://roboticsbackend.com/wp-content/uploads/2019/06/etcher_flash_sd_card_raspberry_pi_image.png)

----------------------------------------------------

## First steps with Ubuntu MATE 18.04 on Raspberry Pi 3 B+

Once the micro SD card is flashed with the image, remove it from your computer and insert it into your Raspberry Pi 3 B+.
Plug a screen with either the HDMI port, or the special port for Raspberry Pi compatible screens. Also plug a mouse and a keyboard. With that, you’ve got a complete computer!
You can now power on the Raspberry Pi 3 B+ with a micro USB charger (a phone charger is perfect for that)
The Raspberry Pi will boot.

### 1. Installation steps
Basically on the first boot you’ll just have to follow standard Ubuntu installation instructions:
- Choose your language.
- Choose your keyboard layout.
- Connect to a Wi-Fi network (strongly recommended).
- Choose your location.
- Choose whether you want to login automatically or not.
- Wait for the configuration and installation process. This might take a while. The system may also reboot.
Once the installation done and the Pi has reboot (do it manually if it didn’t), you might want to upgrade the Ubuntu packages on the system, because they won’t be up to date

### 2. Open a terminal (to do that: click on the menu > type “terminal” and choose “MATE terminal”). On the terminal execute the following commands – might also take a long time:
#### * `$ sudo apt update`
#### * `$ sudo apt autoremove`
#### * `$ sudo apt upgrade`
#### * `$ sudo reboot`

# Once the updates are finished installing you are good to go. You can now go ahead and create some awesome Raspberry Pi project.
