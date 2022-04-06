@echo off

set MOC=%QTDIR%\bin\moc.exe
set RCC=%QTDIR%\bin\rcc.exe

%MOC% -o moc\moc_MainWindow.cpp 			MainWindow.hpp

pause
