# Setting up the vertual machine using VertualBox and Linux Ubuntu 16.04 OS
# VirtualBox باستخدام برنامج Ubuntu 16.04 تشغيل نظام لينيكس                          

----------------------------------- 
 #### Step 1 : Downloading the VirtualBox and Linux ubuntu OS 
1. Download/Install Virtualbox
[download Virtualbox](https://www.virtualbox.org/wiki/Downloads)
2. Download Ubunta mate 16.04 image
[download Ubuntu](http://cdimage.ubuntu.com/ubuntu-mate/releases/16.04/release/ubuntu-mate-16.04-desktop-amd64.iso)

-----------------------------------
#### Step 2 : Enable Virtualization Technology 
1. Turn on the computer, and then immediately click ESC then click F10 to enter BIOS.
2. Under the Security tab, use the up and down arrows to select USB Security, and then press Enter.
3. Use the up and down arrows to select Virtualization Technology (VTx), then use the left and right arrows to select either Enabled or Disabled as desired.
4. When you are finished, click F10 to save your changes and exit BIOS.

-------------------------------------
#### Step 3 : make a virtual machine using VirtualBox
1. Open Oracle Virtual Box and click on “New”.
![alt text](https://miro.medium.com/max/2000/1*yqSKKH8SYDGyVkeSrK9iOg.png)
2. Enter the Name for your Virtual Machine Then select Type as Linux and Version as Ubuntu (64-bit) from the drop-down. Click “Next”.

![alt text](https://miro.medium.com/max/878/1*4FvAe8g3Kw7RDYjsmQYmZg.png)

3.  Allocate RAM as per your usage. 1024 MB is the recommended memory size. (Using the recommended RAM here) . 

![alt text](https://miro.medium.com/max/878/1*XZ_wX37hx3PVnIqpjkembQ.png)

4. Select “Create a virtual hard disk now” as we are installing Ubuntu on Virtual Box for first time.

![alt text](https://miro.medium.com/max/878/1*Kr-b5WDtr3cFO-nnawiZhQ.png)

5. Select “VDI(Virtual Box Disk Image)” as the type for your Virtual Hard Disk file.

![alt text](https://miro.medium.com/max/1006/1*e07IKDYJT-MfEVIkCm6FjQ.png)

6. Select “Dynamically Allocated” as we don’t want to keep restriction on the virtual hard disk file size.
![alt text](https://miro.medium.com/max/1006/1*Siopz5pzpMRsx3d9UnwQ8A.png)

7. Enter the name for the Virtual Hard Disk file. (we can also leave it as default name same as VM name).
 
![alt text](https://miro.medium.com/max/1006/1*Z8En66DfvyQc8G8VWU_gyQ.png)

8. Your VM will now be created with the above configuration. (Visible on the left panel of Virtual Box).

![alt text](https://miro.medium.com/max/2000/1*SwLYW1TpLn117jbSK1AoVA.png)

-------------------------------------------------

#### Step 4 : installing Ubuntu 16.04 desktop in Your Virtual Machine 
1. Select the VM and click on “Start”. then click on the icon as highlighted below.

![alt text](https://miro.medium.com/max/1310/1*4B63_D4PrQu6Cx-TOV4SoA.png)

2. Go to the path of your Ubuntu-16.04-desktop-amd64.iso image and select it. Click “Open”.

![alt text](https://miro.medium.com/max/2000/1*pC1yzcWfq7dusQDHqIg1oA.png)

3. Now Ubuntu will boot up and ask for Installation details. Click on “Install Ubuntu”.

![alt text](https://miro.medium.com/max/2000/1*iSWtPqVzFKpq4C8UfaodRg.png)

4. Don’t select the checkbox as we don’t want to install any 3rd party software while Ubuntu Installation.

![alt text](https://miro.medium.com/max/2000/1*G4mz3gm1Rw5M5BaqjE3Wnw.png)

5. As we are making Ubuntu VM for the 1st time on our Virtual Box, we will select the 1st option i.e. “Erase disk and install Ubuntu”.

![alt text](https://miro.medium.com/max/2000/1*JYdPHlk68YtEr9krpeW86A.png)

6. Select your location for time zone settings. I am selecting Saudi Arabia (Riyadh) as my region. 

![alt text](https://miro.medium.com/max/2000/1*3T9e8NqJc1n7ZHwye7rC0w.png)

7. Select your keyboard layout. I am selecting as “English (US)” as per my usability.

![alt text](https://miro.medium.com/max/2000/1*UCEGQv2TXmaGIaVEO3neaQ.png)

8. Fill in the below fields for Name, Username, Password and Computer’s Name.

![alt text](https://miro.medium.com/max/2000/1*_vQt0_SgPodgtRGaouj4jw.png)

9.Wait for the Installation to complete.

![alt text](https://miro.medium.com/max/2000/1*7fWi-HlDV98LHGC93G6T_w.png)

10. Enter your password for logging into the Ubuntu-16.04 VM Desktop.

![alt text](https://miro.medium.com/max/2000/1*NfFYUmovd6Q6AdeK8SmQDg.png)

# Congratulations, Ubuntu 16.04 desktop has been installed successfully in your Virtual Machine 



---------------------------------------------
Referance : 
title :Install Ubuntu-16.04 LTS on Virtual Box (Desktop version)
Link : https://medium.com/@tushar0618/install-ubuntu-16-04-lts-on-virtual-box-desktop-version-30dc6f1958d0
