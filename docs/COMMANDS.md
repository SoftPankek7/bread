# The bread programming language commands

Bread is transpiled into c++, and compiled from there with gcc

`print/Hello World!` - Prints hello world, No quotes required!
`int/foo/5` - Define an integer (example: foo with the value of 5)
`bol/foo/true` - define a boolean (example: foo = true)
`str/foo/bar` - define a string (example: foo = bar)

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