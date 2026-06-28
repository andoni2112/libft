*Este proyecto ha sido creado como parte del currículo de 42 por apascual.*

# Libft

## Descripción

Libft es un proyecto del currículo de 42 cuyo objetivo es crear una librería propia en C. Esta librería reproduce el comportamiento de varias funciones estándar de la libc y añade funciones auxiliares para trabajar con strings, memoria, conversión de tipos, escritura en file descriptors y listas enlazadas.

El proyecto permite reforzar conceptos fundamentales del lenguaje C, como punteros, arrays, memoria dinámica, `malloc`, `free`, estructuras, punteros dobles, Makefiles, archivos de cabecera y compilación modular.

La librería generada se llama:

```bash
libft.a
```

Esta librería puede reutilizarse en futuros proyectos de 42.

---

## Descripción detallada de la librería

La librería está organizada en varios bloques de funciones.

### Funciones de comprobación de caracteres

* `ft_isalpha`: comprueba si el carácter es una letra.
* `ft_isdigit`: comprueba si el carácter es un número.
* `ft_isalnum`: comprueba si el carácter es una letra o un número.
* `ft_isascii`: comprueba si el valor pertenece a la tabla ASCII.
* `ft_isprint`: comprueba si el carácter es imprimible.

### Funciones de conversión de caracteres

* `ft_toupper`: convierte una letra minúscula a mayúscula.
* `ft_tolower`: convierte una letra mayúscula a minúscula.

### Funciones de strings

Estas funciones trabajan con cadenas de caracteres terminadas en `'\0'`:

* `ft_strlen`: calcula la longitud de una string.
* `ft_strchr`: busca la primera aparición de un carácter dentro de una string.
* `ft_strrchr`: busca la última aparición de un carácter dentro de una string.
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

* `ft_atoi`: convierte una string a un entero.
* `ft_itoa`: convierte un entero a una string reservada con memoria dinámica.

### Funciones con memoria dinámica

Estas funciones crean nuevas strings o bloques de memoria usando `malloc`:

* `ft_calloc`: reserva memoria e inicializa todos sus bytes a cero.
* `ft_strdup`: duplica una string en memoria nueva.
* `ft_substr`: extrae una parte de una string.
* `ft_strjoin`: une dos strings en una nueva.
* `ft_strtrim`: elimina caracteres concretos del principio y del final de una string.
* `ft_split`: divide una string en un array de strings usando un separador.

### Funciones de aplicación sobre strings

* `ft_strmapi`: crea una nueva string aplicando una función a cada carácter.
* `ft_striteri`: aplica una función a cada carácter de una string modificándola directamente.

### Funciones de escritura en file descriptors

* `ft_putchar_fd`: escribe un carácter.
* `ft_putstr_fd`: escribe una string.
* `ft_putendl_fd`: escribe una string seguida de salto de línea.
* `ft_putnbr_fd`: escribe un número entero.

---

## Listas enlazadas

La librería también incluye funciones para trabajar con listas enlazadas simples.

Una lista enlazada está formada por nodos. Cada nodo contiene un contenido genérico y un puntero al siguiente nodo.

La estructura utilizada es:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

Cada nodo tiene dos partes:

* `content`: guarda el contenido del nodo.
* `next`: apunta al siguiente nodo de la lista o a `NULL` si es el último.

Ejemplo visual:

```text
[nodo 1] -> [nodo 2] -> [nodo 3] -> NULL
```

### Funciones de listas enlazadas

* `ft_lstnew`: crea un nuevo nodo.
* `ft_lstadd_front`: añade un nodo al principio de una lista.
* `ft_lstsize`: cuenta cuántos nodos tiene una lista.
* `ft_lstlast`: devuelve el último nodo de una lista.
* `ft_lstadd_back`: añade un nodo al final de una lista.
* `ft_lstdelone`: elimina un solo nodo usando una función `del` para liberar su contenido.
* `ft_lstclear`: elimina una lista completa y libera todos sus nodos.
* `ft_lstiter`: recorre una lista y aplica una función a cada contenido.
* `ft_lstmap`: crea una nueva lista aplicando una función a cada contenido de la lista original.

Estas funciones permiten practicar estructuras, punteros a estructuras, punteros dobles, recorrido de listas, gestión de memoria y liberación correcta de recursos.

---

## Estructura del proyecto

```text
.
├── Makefile
├── README.md
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
├── ft_putnbr_fd.c
├── ft_lstnew.c
├── ft_lstadd_front.c
├── ft_lstsize.c
├── ft_lstlast.c
├── ft_lstadd_back.c
├── ft_lstdelone.c
├── ft_lstclear.c
├── ft_lstiter.c
└── ft_lstmap.c
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

## Ejemplo de uso con listas enlazadas

Ejemplo sencillo creando un nodo:

```c
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*node;

	node = ft_lstnew("hola");
	if (node == NULL)
		return (1);
	printf("%s\n", (char *)node->content);
	free(node);
	return (0);
}
```

Compilación:

```bash
make
cc -Wall -Wextra -Werror main.c libft.a -o test
```

Ejecución:

```bash
./test
```

Salida esperada:

```text
hola
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

* Referencias clásicas:

  * The C Programming Language, Brian W. Kernighan y Dennis M. Ritchie.
  * GNU C Library Manual.
  * cppreference.com.
  * Subject del proyecto Libft de 42.
  * Tutoriales sobre punteros, memoria dinámica, estructuras, listas enlazadas y Makefiles en C.

### Uso de IA

Durante el proceso de estudio y desarrollo se han consultado herramientas de inteligencia artificial como apoyo complementario para comprender conceptos de C y resolver dudas teóricas.

El uso de IA se ha limitado a tareas de apoyo, como:

* Explicación de conceptos relacionados con punteros, memoria dinámica, strings, estructuras, listas enlazadas y Makefiles.
* Aclaración del comportamiento esperado de funciones de la librería estándar de C.
* Revisión de errores de compilación y estilo.
* Generación de ejemplos de prueba externos no incluidos en la entrega final.

La implementación final, las pruebas, la integración en el repositorio y la validación del proyecto han sido realizadas por el autor.

---

## Estado del proyecto

Funciones principales de Libft implementadas.

Funciones de listas enlazadas implementadas.

La librería puede compilarse con:

```bash
make
```

El resultado final es:

```bash
libft.a
```
