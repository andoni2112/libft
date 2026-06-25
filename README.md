*Este proyecto ha sido creado como parte del currículo de 42 por andpascu.*

# Libft

## Descripción

Libft es el primer proyecto del Common Core de 42. El objetivo principal es crear una librería propia en C que reproduzca el comportamiento de varias funciones estándar de la libc, además de implementar funciones auxiliares para trabajar con strings, memoria dinámica, conversión de tipos y escritura en file descriptors.

Este proyecto sirve para reforzar conceptos fundamentales del lenguaje C, como punteros, arrays, memoria, `malloc`, `free`, Makefiles, archivos de cabecera y compilación modular.

La librería generada se llama:

```bash
libft.a
```

Esta librería puede ser reutilizada en futuros proyectos de 42.

---

## Descripción detallada de la librería

La librería contiene funciones divididas en varios bloques.

### Funciones de comprobación de caracteres

Estas funciones analizan un carácter y devuelven si cumple una condición concreta:

* `ft_isalpha`: comprueba si el carácter es una letra.
* `ft_isdigit`: comprueba si el carácter es un número.
* `ft_isalnum`: comprueba si el carácter es una letra o un número.
* `ft_isascii`: comprueba si el valor pertenece a la tabla ASCII.
* `ft_isprint`: comprueba si el carácter es imprimible.

### Funciones de conversión de caracteres

Estas funciones transforman caracteres:

* `ft_toupper`: convierte una letra minúscula a mayúscula.
* `ft_tolower`: convierte una letra mayúscula a minúscula.

### Funciones de strings

Estas funciones trabajan con cadenas de caracteres terminadas en `'\0'`:

* `ft_strlen`: calcula la longitud de una string.
* `ft_strchr`: busca la primera aparición de un carácter.
* `ft_strrchr`: busca la última aparición de un carácter.
* `ft_strncmp`: compara dos strings hasta un número máximo de caracteres.
* `ft_strnstr`: busca una substring dentro de otra string con límite de longitud.
* `ft_strlcpy`: copia una string en un buffer respetando su tamaño.
* `ft_strlcat`: concatena strings respetando el tamaño del buffer.

### Funciones de memoria

Estas funciones trabajan directamente con bloques de memoria:

* `ft_memset`: rellena una zona de memoria con un byte concreto.
* `ft_bzero`: pone a cero una zona de memoria.
* `ft_memcpy`: copia memoria de un origen a un destino.
* `ft_memmove`: copia memoria de forma segura incluso si hay solapamiento.
* `ft_memchr`: busca un byte dentro de una zona de memoria.
* `ft_memcmp`: compara dos zonas de memoria.

### Funciones de conversión

Estas funciones convierten entre tipos:

* `ft_atoi`: convierte una string a un entero.
* `ft_itoa`: convierte un entero a una string reservada con `malloc`.

### Funciones con memoria dinámica

Estas funciones crean nuevas strings usando memoria dinámica:

* `ft_calloc`: reserva memoria e inicializa todos sus bytes a cero.
* `ft_strdup`: duplica una string en memoria nueva.
* `ft_substr`: extrae una parte de una string.
* `ft_strjoin`: une dos strings en una nueva.
* `ft_strtrim`: elimina caracteres concretos del principio y del final de una string.
* `ft_split`: divide una string en un array de strings usando un separador.

### Funciones de aplicación sobre strings

Estas funciones aplican una función recibida por parámetro sobre una string:

* `ft_strmapi`: crea una nueva string aplicando una función a cada carácter.
* `ft_striteri`: aplica una función a cada carácter de una string modificándola directamente.

### Funciones de escritura en file descriptors

Estas funciones escriben en un file descriptor:

* `ft_putchar_fd`: escribe un carácter.
* `ft_putstr_fd`: escribe una string.
* `ft_putendl_fd`: escribe una string seguida de salto de línea.
* `ft_putnbr_fd`: escribe un número entero.

---

## Estructura del proyecto

```text
.
├── Makefile
├── libft.h
├── ft_isalpha.c
├── ft_isdigit.c
├── ft_isalnum.c
├── ft_isascii.c
├── ft_isprint.c
├── ft_strlen.c
├── ft_memset.c
├── ft_bzero.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_strlcpy.c
├── ft_strlcat.c
├── ft_toupper.c
├── ft_tolower.c
├── ft_strchr.c
├── ft_strrchr.c
├── ft_strncmp.c
├── ft_memchr.c
├── ft_memcmp.c
├── ft_strnstr.c
├── ft_atoi.c
├── ft_calloc.c
├── ft_strdup.c
├── ft_substr.c
├── ft_strjoin.c
├── ft_strtrim.c
├── ft_split.c
├── ft_itoa.c
├── ft_strmapi.c
├── ft_striteri.c
├── ft_putchar_fd.c
├── ft_putstr_fd.c
├── ft_putendl_fd.c
└── ft_putnbr_fd.c
```

---

## Instrucciones

### Compilación

Para compilar la librería:

```bash
make
```

Esto genera el archivo:

```bash
libft.a
```

### Limpiar archivos objeto

```bash
make clean
```

Este comando elimina los archivos `.o`.

### Limpiar todo

```bash
make fclean
```

Este comando elimina los archivos `.o` y también la librería `libft.a`.

### Recompilar desde cero

```bash
make re
```

Este comando ejecuta una limpieza completa y vuelve a compilar la librería.

---

## Ejemplo de uso

Después de compilar la librería con `make`, se puede usar en un archivo externo.

Ejemplo:

```c
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%zu\n", ft_strlen("hola"));
	return (0);
}
```

Compilación:

```bash
cc -Wall -Wextra -Werror main.c libft.a -o test
```

Ejecución:

```bash
./test
```

Salida esperada:

```text
4
```

---

## Normas y restricciones

El proyecto sigue las reglas de 42:

* Código escrito en C.
* Compilación con `-Wall -Wextra -Werror`.
* Uso de `Makefile`.
* Uso de `libft.h` como archivo de cabecera principal.
* Respeto de la Norminette.
* Gestión correcta de memoria dinámica.
* Liberación de memoria cuando corresponde.
* No incluir archivos de prueba en la entrega final.

---

## Recursos

Recursos utilizados para estudiar y comprender los conceptos del proyecto:

* Manual de C:

  * `man strlen`
  * `man memset`
  * `man memcpy`
  * `man memmove`
  * `man strchr`
  * `man atoi`
  * `man calloc`
  * `man malloc`
  * `man free`
  * `man write`

* Documentación y referencias:

  * The C Programming Language, Brian W. Kernighan y Dennis M. Ritchie.
  * GNU C Library Manual.
  * cppreference.com.
  * Tutoriales y explicaciones sobre punteros, memoria dinámica y Makefiles en C.
  * Documentación interna y subject del proyecto Libft de 42.

### Uso de IA

Durante el proceso de estudio y desarrollo se han consultado herramientas de inteligencia artificial como apoyo complementario para comprender conceptos de C y resolver dudas teóricas.

El uso de IA se ha limitado a tareas de apoyo, como:

* Explicación de conceptos relacionados con punteros, memoria dinámica, strings y Makefiles.
* Aclaración del comportamiento esperado de funciones de la librería estándar de C.
* Revisión de errores de compilación y estilo.
* Generación de ejemplos de prueba externos no incluidos en la entrega final.

La implementación final, las pruebas, la integración en el repositorio y la validación del proyecto han sido realizadas por el autor.


---

## Estado del proyecto

Parte obligatoria de Libft implementada.

La librería puede compilarse con:

```bash
make
```

y utilizarse enlazando el archivo:

```bash
libft.a
```
