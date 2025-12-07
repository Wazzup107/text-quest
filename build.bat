@echo off
chcp 65001 > nul
echo Компиляция main.cpp...

:: Команда компиляции
g++ main.cpp -o main.exe -std=c++20 -Wall -Wextra

:: Проверка на наличие ошибок
if %errorlevel% equ 0 (
    echo.
    echo УСПЕХ: Файл main.exe создан.
) else (
    echo.
    echo ОШИБКА: Не удалось скомпилировать файл.
)

pause