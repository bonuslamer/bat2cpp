;@echo off
;SET filepath=%~f1
;echo(
;if "%~1" equ "" (
	;echo Usage: Drag and drop a file that has batch code in it into "bat2cpp.bat"
	;timeout 5 >nul & exit
;)
;echo %~1
;ping localhost -n 1 >nul
;cls

;goto:detectfile

:detectfile
rem === DETECT FILE
IF NOT EXIST "%filepath%" (
    ECHO file not found: %filepath% >&2
    EXIT /B 1
)
goto:convert

:convert
>nul find "begin" %~1 && (
  echo #include iostream >> Output.cpp
  echo using namespace std; >> Output.cpp
  echo int main( >> Output.cpp
)
>nul find "echo" %~1 && (
  echo cout >> Output.cpp
)
>nul find "set" %~1 && (
  echo string >> Output.cpp
)
echo done converting bat2cpp...
echo There should be a file called Output.cpp
pause
exit