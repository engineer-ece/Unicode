# Unicode
 

[list of unicode](https://www.ssec.wisc.edu/~tomw/java/unicode.html#x2200)


###  To View unicode characters in c++ 

```cpp
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
```
-----

###  To View unicode characters in python

```python
 
import unicodedata as i
print('\u222b')
ord('\u222b')
print('\U0001f605') # you get smile emoji'😅'
print(i.name('\u222b'))

   
```
