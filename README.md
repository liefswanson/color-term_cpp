# color-termpp
A small simple terminal ansi-color library that comes with the option of being a header only library (currently no windows support)


# adding to your project
for the header only grab "color-term_inl.hpp" and put it in your includes

However, because header only libraries which do not use templates are evil you may also use this library as a compiled object!

for the compiled object, you will want to...

```
git clone
cd color-termpp
[insert c++ compiler here] color-term.cpp -c -O3 -o color-term.a
```

and then add term-color.a directly to your project as one of the objects to link against
finally place color-term.hpp in your includes

# usage
of controlling the forground color most things work as toggles
eg.```cout << term::light::on;``` will turn on lighter colors (results may vary based on terminal)
...and```cout << term::light::off;``` will disable them again.
Finally... to reset everything, ```term::reset```

total list of flags are...
- ```term::ital::[on/off]```  italics
- ```term::light::[on/off]``` lighter colors
- ```term::uline::[on/off]``` underline
- ```term::blink::[on/off]``` slow blinking (no fast blinking, it is bad)

colors list
- ```term::black```
- ```term::red```
- ```term::green```
- ```term::yellow```
- ```term::blue```
- ```term::purple```
- ```term::cyan```
- ```term::white```

background colors are a little different, they must be used as such ```term::bg::light::cyan```, or ```term::bg::cyan```
