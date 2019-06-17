# GRE-Words-generator
Display random words from a file.  first open GRE-words.exe, then desktopapp1.exe for display
There are two .exe files in this repository. 
the batch file provided will run both of them.
## Generate.exe
This one will generate the words randomly from a given text file, as you can see in the batch file the syntax from commandline is 
''''
Generate.exe <path\filename> <delay-in-seconds>
''''
this one will generate the words, display them in console, as well as make two files for word and meaning seperately inside the Couple folder which is then used by the DesktopApp1 to display, you can also use third party apps like [rainmeter](https://github.com/rainmeter/rainmeter) to display those words in your style. 
## DesktopApp1.exe
Was too lazy to even make a new project with name, so i just modified my first c# project on Visual sudio to read two files inside of the couple folder then display them.
*The update time for the words is 20 seconds. 
*The display is done with a opacity of 20%, and the app is click through, so you can do your work while when bored concentrating on the words. 
*The word and meaning are going to be always there in the screen so in my mind it's going to be great for revision.
 ### note
I have also included an excel file with word lists, so you can make your own word lists to load the words from. just make sure the text file is tab seperated (don't have to think much, just copy paste the word and meaning columns from the excel into an empty text file and save.
