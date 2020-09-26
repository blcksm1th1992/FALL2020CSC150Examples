#!/bin/bash



# Goals of the script.

#1.) update the host

#2.) Create a web page that holds the system time

#3.) creates a directory folder for all your classes.

#4.) Creates a text file showing all the files you have in the directories you've created



#1.) Update Host

echo "First part of the challenge is to update the host"

apt-get update && apt get upgrade -y



#2.)

echo -e "<HTML>" > /var/www/html/time.html

echo -e "<HEAD>" >> /var/www/html/time.html

date >> /var/www/html/time.html

echo -e "</HTML>" >> /var/www/html/sys_time.html



#3.) 

mkdir CSC484

mkdir CIS332



#4.) 

ls CSC* > Class_Folders.txt

ls CIS* > Class_Folders.txt