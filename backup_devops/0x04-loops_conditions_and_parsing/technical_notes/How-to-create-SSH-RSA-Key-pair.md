# How to create a SSH RSA key pair on Linux

One effective way of securing SSH access to your remote serve is to use a
public-private key pair. This means that a *public* key is placed on the server
and a *private* key is placed on your local machine. 

This article provides steps for generating RSA keys on Linux by using the
command `ssh-keygen`:

## Generate keys
On your linux/Ubuntu terminal, run the following command
```
ssh-keygen -t rsa
```
the above command will load a prompt asking you to input a name for the file
that your private key should be saved in, you can use any name you like. The 
name used for you private key file will be automaticaly used as the
name for the public key file but with a `.pub` extension. 

Next another prompt will load asking you for a passphrase which is like a
password you can ignore this prompt if you don't want to use a passphrase
while logging into your remote server. But if you wish to use a passphrase,
make sure to save the passphrase that you save the passphrase in a secure
location because a lost passphrase cannot be recovered.
The output will be similar to this:
```shell
Generating public/private rsa key pair.
Enter file in which to save the key (/home/a/.ssh/id_rsa): 
Created directory '/home/a/.ssh'.
Enter passphrase (empty for no passphrase): 
Enter same passphrase again: 
Your identification has been saved in /home/a/.ssh/id_rsa.
Your public key has been saved in /home/a/.ssh/id_rsa.pub.
The key fingerprint is:
3e:4f:05:79:3a:9f:96:7c:3b:ad:e9:58:37:bc:37:e4 a@A
```

After you have completed the above steps, you private key and public key files
are ready. [Then you'll need to copy the public key to your server](https://askubuntu.com/questions/4830/easiest-way-to-copy-ssh-keys-to-another-machine/4833#4833)

