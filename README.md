# printf
### Description
Holberton School's printf ensures students grasp core concepts such as va_arg, va_list, and va_end. Other basic concepts such as loops, arrays, and structs were employed in the making of this function.

### Environment
This function was developed and tested on `Ubuntu 14.04 LTS` via Vagrant in VirtualBox.

### Usage and Installation
Clone the repository, create a main.c file, then compile using gcc.
```
$ git clone https://github.com/AfaMadza/printf.git
```
### Compilation

This code was compiled with the following flags:
` $ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c -o _printf `

###### Example code

```
int main(void)
{
	_printf("Hello %s\n", "World");
	return (0);
}
=========================================
$ ./printf
Hello World
$
```

### Authors

* [**Kevin Yook**](https://github.com/yook00627)
* [**Spencer Taylor**](https://github.com/set808)

<p align="center">
<a href="https://www.holbertonschool.com"><img src="https://intranet.hbtn.io/assets/holberton-logo-simplified-d4e8a1e8bf5ad93c8c3ce32895b4b53749b477b7ba7342d7f064e6883bcd3be2.png"></a>
</p>
