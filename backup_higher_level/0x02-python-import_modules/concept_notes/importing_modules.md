## What is `__main__`?

In Python, `'__main__'` is a special name used for two important constructs:
- the name of the top-level environment of the running program
- the `__main__.py` file in Python packages

`'__main__'` is the name of the enviroment where "top-level code" is run. 

This special name is usually equal to the string that is assigned to the global
variable `__name__` when a Python module or file is exectued in the top-level
code enviroment.

`__name__  == '__main__'`


`'__main__'` is the default name of the enviroment created when you invoke the python
interpreter without passing a file or module.

"Top-level code" environment can also refer to the starting or entry point of your program; The first
Python module/file you pass to the python interpreter. it can be refered to as "top-level" 
because it imports all other modules that your program needs.

In this "top-level" enviroment, the global variable `__name__` is set as the
name of the file/module (without the `.py` extension) 

`__name__` = <imported-module-name>


## What is `__name__`?
`__name__` is a global variable. Within a module, the module name (as a string)
is automatically assigned to the global variable `__name__`

if the module file is executed in the "top-level code" enviroment, the
value in the `__name__` variable becomes the name of the top-level code enviroment.

Hence

`__name__ == '__main__'`

So by checking if the value in `__name__` is equal to `'__main__'` a module can
discover whether or not it is running in the top-level code enviroment. This
allows a common idiom for conditionally executing code when the module is not
initialized from an import statement:

```python
if __name__ == '__main__':
    # Execute when the module is not initialized from an import statement

```

## What happens when you import a module that contains executable codes (script codes)
if you import a module that contains script codes from another module, the
script codes would unintentionally execute as well.

This is where using the `if __name__ == '__main__'` code block comes in handy.
Code within this block won't run unless the module is executed in the top-level
environment.
