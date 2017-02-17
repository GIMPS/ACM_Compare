@echo off
cd test
:loop
    test_case.exe %random% > in.txt  
    debug.exe < in.txt > debug_out.txt
    brutal.exe < in.txt > brutal_out.txt
    fc debug_out.txt brutal_out.txt
if not errorlevel 1 goto loop  
pause
goto loop