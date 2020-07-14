# SafePass++
## Single header Password Input Library. 
```cpp
std::string str;
int inp;
str = safepass::Input(str, '*', inp, 25);
safepass::MinCharacterLimit(str, "Password length should be 7 character length\nTips: Use Up and Down characters, numbers and signs for your password.\n", 7); 
```
##### SafePass++ is licensed with MIT License. 
