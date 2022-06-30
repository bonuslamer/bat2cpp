# bat2cpp
![bat2cpp](https://user-images.githubusercontent.com/68444929/176368976-e533a704-bd8a-421f-8c9e-e597f702f975.png)

Convert batch to CPP (THIS IS STILL WORK IN PROGRESS, SO IT IS USELESS FOR NOW!)

# How it works.
This program will replace every `bat` language text into `cpp`

## Example 1
1. Write this in a batch file named `batfile.bat`
```
echo Hello!
```
2. Then put it in the same directory as `bat2cpp.exe`
3. Now run `bat2cpp.exe`
4. Then a file will appear that is called `Output.cpp`, It's the converted file.
5. Edit `Output.cpp` then add `include` and `int main()`, like this.
```
#include <iostream>
int main(){
  // THIS IS WHERE THE CONVERTED FUNCTION WOULD BE!
}
```
6. Just because it's work in progress, the converted function would be:
```
cout<<
hello
```
7. Put quotes `""` between `hello`, then at the last quote put `<<endl;`, like this.
```
cout<<
"hello"<<endl;
```
8. There you have it, Enjoy :D well it's work in progress so you wouldn't be enjoying it :/
## Update Reminder
Currently I am working on other functions...
# bat2cpp_simple
![bat2cpp_simple](https://user-images.githubusercontent.com/68444929/176446935-4a844b43-7f04-4ce9-98be-e6f071ae42aa.png)

A simplified version of bat2cpp, It's a command line when inputted the batch functions it will convert them immediately.
# Very Simplified
Made in batch.

## Usage
Drag and drop `helloworld.file` into `bat2cpp.bat`

When it's done, a file `Output.cpp` will appear.

## Make a file
If you want to make a file that has a batch code to convert it to CPP.

Make sure it has `begin` at the start.

## Functions Avaliable
1. `begin`
2. `echo`
3. `set`
# END OF README
