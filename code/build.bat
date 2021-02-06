@echo off

mkdir ..\..\build
::push-каталог
pushd ..\..\build

cl -Zi ..\handmade\code\win32_handmade.cpp user32.lib

::pop-каталог
popd
