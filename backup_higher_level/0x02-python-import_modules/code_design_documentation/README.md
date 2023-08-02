# CODE DESIGN THOUGHT PROCESS

## Build my own calculator

I'll use the argparse module to get all the command line arguments. then check
that value of argv is equal to 3 otherwise print the usage message and exit. if
the the check passes, create a series of if.. elif..else statememt to apply the
function that matches with the operator that was entered in the command line.
if non of the operation matches, the else statement executes and the program
exits 

## Easy print

Basically if you use the `dir()` on module names you will be able to see all
the names that are defined inside in the module. So running `dir(os)` on the
interpreter made me realise that the `sys` module was already defined inside
it, that way all I had to do was call the `sys` module `stdout` function 
through it so I could access the `write` function defined in `sys`  
