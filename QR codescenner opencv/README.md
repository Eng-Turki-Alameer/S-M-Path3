# QRcode Scanner with OpenCV and Raspberry Pi  
-------------------------------------
#### What iis QRcode ?
Quick-reference (QR) codes are similar to barcodes, as they are able to encode data that is represented by black and white squares. But instead of using a laser, a camera differentiates between the spaces and then sends that information to be processed. They are comprised of several large squares that help to align and position the edges of the QR code, formatting columns, a version number, and finally, the data itself.
The data they contain can encode a variety of types, including numbers, characters, and binary, which can allow for many creative uses. Advertisers often encode URLs in them that redirect the user to their website. Other companies might place important product information in a QR code, such as a serial number, and attach it to a component.

![alt text](https://hackster.imgix.net/uploads/attachments/1082301/image_wIZXKYswRa.png?auto=compress%2Cformat&w=740&h=555&fit=max)
------------------------------------

## Reading the QR Codes 
The code works as follows:

1. Set up the camera and QR code detector
2. Read in a new frame and extract a QR code
3. If there is a code, draw a box around it and display its data above
5. if tha there is a url link it will get the text data and save it in a text file
4. If the exit key 'q' hasn't been pressed, go back to step 2.

![alt text](https://github.com/Eng-Turki-Alameer/Smart-Methods-Internship-Tasks-/blob/master/QR%20codescenner%20opencv/2020-06-24-223707_1824x984_scrot.png)


Referances : 
- [FETCHING DATA FROM WEBSITE](https://techiesms.com/raspberrypi-projects/fetching-data-from-website-using-raspberry-pi/)
- [Scan QR Codes in Real-Time with Raspberry Pi](https://www.hackster.io/gatoninja236/scan-qr-codes-in-real-time-with-raspberry-pi-a5268b)

