# Attiny85-Rubber-Ducky
Attiny85 USB Rubber ducky to download a backdoor from powershell and make it launch on startup each time
</br>
This program, when flashed into a Attiny85, will download a program, located in my file server (https://filestorageserver.pythonanywhere.com/)
</br>
When plugged in, this device is recognized as a keyboard
</br>
It will launch a powershell window as administrator, cd into startup folder. Any program located in this folder will launch each time windows boots.
</br>
Then it will download a backdoor which you can find in my other repo (https://github.com/Aliefe02/Backdoor_with_Django_Backend)
</br>
(Victim.py is converted into Victim.pyw so it doesn't open a window. Then using pyinstaller it is converted to exe file so it runs on any windows with no dependency. I also changed its name so it won't be an obvious threat)
</br>
After downloading the program, it will launch it and close powershell window.
</br>
</br>
OLD code is slower, I uploaded a new code. This code writes all the code into the Run window. Then it opens cmd in minimum size and when download ends, it closes automatically. When device hits enter for administrative rights, you can unplug it. Download will start and program will close itself
</br>
</br>
 I am using Turkish layout keyboard so I installed  another keyboard library
 </br>
https://github.com/ernesto-xload/DigisparkKeyboard
