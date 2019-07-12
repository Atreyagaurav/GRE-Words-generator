@echo off
color a
title "GRE Words Generator Initialization"
Dir WordList\*.txt
set /p name="Enter the name of the file inside the WordList folder:"
set /p delay="Enter Delay in seconds:"
set name=Wordlist\%name%.txt
start "" "Generate.exe" %name% %delay%
start "" "DesktopApp1.exe"