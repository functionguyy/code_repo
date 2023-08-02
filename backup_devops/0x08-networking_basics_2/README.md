# 0x08. Networking basics #1

## Port listening on Localhost
To figure this problem, I had to visit the man page.  This time I was checking
the description of the `nc` command:
```Shell
$ man nc
```
`nc`(or netcat) is an all-purpose command for anything related to TCP, UDP,
UNIX domain sockets.

from the man page, I learned that, it is quite simple to build a very basic
client/server model using `nc`. For example to listen on port `1234` for a connection,
we start `nc`:
```Shell
$ nc -l 1234
```
`nc` is listening on port `1234` for a connection. The `-l` option tells `nc`
to listen for an incoming connect rather than initiating a connection to a
remote host.

The *distination* and *port* to listen on can be specified:
```shell
$ nc -l distination_host 12345

```
Read more: `man nc`
