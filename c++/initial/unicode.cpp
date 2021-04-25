#include <iostream>
#include <fcntl.h>
#include <io.h>
#include <stdio.h>

using namespace std;

int main() {
   //_O_U8TEXT is 0x00040000  
    _setmode(_fileno(stdout), 0x00020000); // _O_U16TEXT
  
    wcout << L"Integral Symbol = \x222b\n";
}