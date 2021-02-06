#include <windows.h>


// Entry point
int CALLBACK
wWinMain(HINSTANCE hInstance,
         HINSTANCE hPrevInstance,
         LPWSTR lpCmdLine,
         int nCmdShow)
{
  GetModuleHandle(0);
  MessageBox(0, "This is Handmade Hero.", "Handmade Hero",
             MB_OK|MB_ICONINFORMATION);

  return(0);
}
