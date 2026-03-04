# The bread programming language commands

Bread is transpiled into c++, and compiled from there with gcc
In bread, every integer, boolean and string must be defined before being used and assigned a value of anything

`print/Hello World!` - Prints hello world, No quotes required! If you want to print a string or integer or boolean, you just have to write the name of the string, boolean or integer.
`int/foo/5` - Define an integer (example: foo with the value of 5)
`bol/foo/true` - define a boolean (example: foo = true) When printing booleans, they will be displayed as 0 or 1 based on if its false or true.
`str/foo/bar` - define a string (example: foo = bar)
`in/foo` - get an input from the user that will be stored in a string (example: input will be stored in foo)

## Functions?
## SHORTCUTS TO BE IMPLEMENTED SOON!
In bread, functions are shortcuts.
Shortcuts always have to be defined at the top of the .bread file and must start with
`shrtct/shortcutname`
and end with
`endshtrct/`
You do not need to add tabs while defining what a shortcut does.
Here is an example of a shortcut.
```
shrtct/foo
    print/Im a shortcut!
    int/ran/1
endshrtct/
```