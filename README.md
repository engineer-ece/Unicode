
# [Unicode.org](https://unicode.org/charts/) 

[list of unicode](https://www.ssec.wisc.edu/~tomw/java/unicode.html#x2200)


###  To View unicode characters in c++ 

```cpp
  #include <iostream>
  #include <iostream>
  #include <fcntl.h>
  #include <io.h>
  #include <stdio.h>

  using namespace std;

  int main() {
    //_O_U8TEXT is 0x00040000  
    _setmode(_fileno(stdout), 0x00020000); // _O_U16TEXT
    wchar_t w = 0x222c;
    wprintf(L"hex: %04X char: %c",w,w);
    
    for(wchar_t a = 0x2200 ; a <= 0x22ff ; a++){
      _setmode(_fileno(stdout), 0x00020000);
      wprintf(L"%04X %c \n",a,a);
    }
}
```


###  To View unicode characters in python

```python
 
import unicodedata as i
print('\u222b')
ord('\u222b')
print('\U0001f605') # you get smile emoji'😅'
print(i.name('\u222b'))

   
```

### To View unicode charaters in dart

```dart 

 void main(){
   String x = '\u222b';
   print("U+222b dec = ${x} => ${x.codeUnits}");

   Runes a = new Runes('\u{1f605}');
   print(""+new String.fromCharCodes(a));
   print(x.codeUnits);
   
  

  "\u{1f605}".runes.forEach((int a) { 
    var c = new String.fromCharCode(a);
    print(c);
  });
}

```
