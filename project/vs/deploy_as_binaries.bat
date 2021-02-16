::
:: Deploys binaries and headers of the spiel library to a given
:: directory. Will create a subdirectory for the library.
:: Example: > .\deploy_as_binaries.bat C:\libs
::
@echo off

set outDir=%1
set thisDir=%~dp0

set inclSrc=%thisDir%..\..
set binSrc=%thisDir%
set inclDest=%outDir%\spiel
set binDest=%outDir%\spiel\bin

:: Deploy includes.
mkdir %inclDest%
robocopy %inclSrc% %inclDest% *.h

:: Deploy binaries.
set from="%binSrc%\Release"
set to=%binDest%\x86\rel_lib
mkdir %to%
robocopy %from% %to% spiel.lib
robocopy %from% %to% spiel.pdb

set from="%binSrc%\Debug"
set to=%binDest%\x86\dbg_lib
mkdir %to%
robocopy %from% %to% spiel.lib
robocopy %from% %to% spiel.pdb

set from="%binSrc%\x64\Release"
set to=%binDest%\x64\rel_lib
mkdir %to%
robocopy %from% %to% spiel.lib
robocopy %from% %to% spiel.pdb

set from="%binSrc%\x64\Debug"
set to=%binDest%\x64\dbg_lib
mkdir %to%
robocopy %from% %to% spiel.lib
robocopy %from% %to% spiel.pdb
