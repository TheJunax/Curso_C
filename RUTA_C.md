# 🧠 Ruta de Aprendizaje de C — Curso Práctico

> **Objetivo:** consolidar los fundamentos ya estudiados y llegar a un nivel sólido de programación de sistemas, memoria, estructuras de datos y proyectos prácticos.
>
> **Entorno:** Linux + GCC + Visual Studio Code.
>
> **Metodología:** concepto → ejemplo → reto → revisión → checkpoint → proyecto.
>
> **Regla principal:** no avanzar solo por "terminar" temas. Un módulo se considera completado cuando existe comprensión práctica suficiente.

---

# 📊 Estado general

| Fase | Tema | Estado |
|---|---|---|
| 1 | Fundamentos de C | ✅ Completado |
| 2 | Funciones y modularización | ✅ Completado |
| 3 | Arrays y cadenas | ✅ Completado |
| 4 | Punteros | ✅ Completado |
| 5 | Memoria dinámica | ✅ Completado |
| 6 | Structs y estructuras de datos | 🟢 En progreso |
| 7 | Archivos | ⬜ Pendiente |
| 8 | C avanzado y sistemas | ⬜ Pendiente |

**Progreso orientativo:** Validación V1–V5 completada — Fase 6 parcial (Structs ✅, listas enlazadas omitidas) → Próximo: Fase 7 — Archivos.

> **Nota:** esta ruta fue adaptada. Las Fases 1–5 corresponden a conocimientos previos ya estudiados; se validan con retos prácticos (sección 🎓) antes de avanzar a la Fase 6.

---

# 📚 Cómo usamos este documento

Cada sesión sigue este ciclo:

1. 🧠 Concepto
2. 💻 Ejemplo
3. 🔍 Explicación
4. 🧪 Reto
5. 🐛 Revisión del código
6. 📝 Checkpoint
7. 🏆 Proyecto o avance de módulo

### Estados

- ⬜ Pendiente
- 🟡 Por validar
- 🟢 En progreso
- ✅ Completado
- 🔁 Repasar
- 🧭 Adelanto

---

# 🎓 VALIDACIÓN DE CONOCIMIENTOS PREVIOS

Las Fases 1–5 corresponden a conocimientos previos ya estudiados. Antes de avanzar a la Fase 6, cada fase se valida con un reto práctico resuelto en Linux/GCC, siguiendo las reglas del curso.

**Resultados posibles por checkpoint:**

- ✅ Validado → la fase se marca como completada en la tabla de estado.
- 🔁 A repasar → los temas débiles se registran en 🔁 REPASOS y se refuerzan antes de avanzar.

## Checkpoint V1 — Fundamentos (Fase 1)

**Reto:** calculadora interactiva con menú (`do while`), `switch`, las 4 operaciones, validación de división entre cero y opción para salir.

**Cubre:** variables, tipos, `printf`/`scanf`, operadores y casting, `if/else`, lógica booleana, `switch`, contadores/acumuladores, bucles.

**Resultado:** ✅ Validado (Sesión 5)

> **Nota:** reto adaptado — se validó con la Etapa 1 del Proyecto Integrador "Gestor de Calificaciones" (menú + validaciones reales de entrada), que cubre los conceptos listados (incluye casting en el promedio) y añade manejo robusto de entrada inválida.

## Checkpoint V2 — Funciones y modularización (Fase 2)

**Reto:** convertir la calculadora en proyecto modular (`main.c`, `operaciones.c`, `operaciones.h`) con funciones con parámetros y valor de retorno; compilar varios archivos con GCC.

**Cubre:** declaración/definición/llamada, parámetros, `return`, `void`, scope, prototipos, archivos `.h`/`.c`, include guards, compilación multi-archivo.

**Resultado:** ✅ Validado (Sesión 7)

## Checkpoint V3 — Arrays y cadenas (Fase 3)

**Reto:** programa que lea N calificaciones en un array (promedio, mayor, menor, búsqueda de un elemento, ordenamiento básico) y además pida un nombre y lo manipule con `strlen`/`strcpy`/`strcmp`.

**Cubre:** declaración e índices, recorrido, arrays multidimensionales básicos, strings como `char[]`, `\0`, funciones de `<string.h>`, entrada de texto.

**Resultado:** ✅ Validado (Sesión 7)

## Checkpoint V4 — Punteros (Fase 4)

**Reto:** función que intercambie dos variables mediante punteros; recorrer un array usando solo aritmética de punteros; explicar qué imprimen `&x`, `*p` y `p++`.

**Cubre:** direcciones de memoria, `&`, `*`, dereferenciación, paso por referencia, relación array/puntero, `scanf()` explicado con punteros.

**Resultado:** ✅ Validado (Sesión 8)

## Checkpoint V5 — Memoria dinámica (Fase 5)

**Reto:** array dinámico reservado con `malloc`, redimensionado con `realloc`, llenado por el usuario y liberado con `free`, validando siempre `NULL`. Verificar ausencia de fugas (con `valgrind` si está disponible).

**Cubre:** stack vs heap, `malloc`/`calloc`/`realloc`/`free`, memory leaks, dangling pointers, validación de asignaciones.

**Resultado:** ✅ Validado (Sesión 9)

---

# 🟢 FASE 1 — FUNDAMENTOS DE C

## Objetivo

Ser capaz de crear, compilar y ejecutar programas sencillos en C, utilizando variables, entrada/salida, operadores, condiciones y bucles.

---

## Módulo 1 — Entorno y primer programa

### Conceptos

- [x] Instalar GCC
- [x] Configurar VS Code
- [x] Terminal Linux
- [x] Compilar con `gcc`
- [x] Ejecutar programas con `./programa`
- [x] `#include`
- [x] `main()`
- [x] `return 0`
- [x] `printf()`
- [x] `\n`

### Ejercicios

- [x] Hola Mundo
- [x] Programa con varios `printf()`

### Checkpoint

- [x] Explicar qué hace `main()`
- [x] Explicar para qué sirve `#include <stdio.h>`
- [x] Compilar un programa manualmente
- [x] Ejecutarlo desde la terminal

**Estado:** ✅ Conceptos prácticos completados.

---

## Módulo 2 — Variables y tipos de datos

### Conceptos

- [x] Declaración de variables
- [x] Asignación
- [x] `int`
- [x] `float`
- [x] `double`
- [x] `char`
- [x] `char[]`
- [x] Strings/cadenas en C
- [x] `%d`
- [x] `%f`
- [x] `%c`
- [x] `%s`
- [x] `scanf()`

### Ejercicios

- [x] Programa de perfil personal
- [x] Edad
- [x] Altura
- [x] Peso
- [x] Año de nacimiento
- [x] Nombre e inicial

### Checkpoint

- [x] Elegir correctamente el tipo de dato para una variable
- [x] Explicar diferencia entre `char` y `char[]`
- [x] Utilizar correctamente `%d`, `%f`, `%c`, `%s`
- [x] Recibir datos mediante `scanf()`

**Estado:** ✅ Completado a nivel práctico.

---

## Módulo 3 — Operadores y conversiones

### Conceptos

- [x] Suma `+`
- [x] Resta `-`
- [x] Multiplicación `*`
- [x] División `/`
- [x] Módulo `%`
- [x] División entera
- [x] División decimal
- [x] Conversión de tipos
- [x] Casting
- [x] `(float)`

### Ejercicios

- [x] Calculadora de dos números enteros
- [x] Calculadora con números decimales
- [x] Diferencia entre división entera y decimal

### Checkpoint

- [x] Explicar por qué `10 / 3` puede producir `3`
- [x] Explicar qué hace `(float)`
- [x] Elegir tipos adecuados para una operación
- [x] Resolver operaciones con `int` y `float`

**Estado:** ✅ Completado a nivel práctico.

---

## Módulo 4 — Condicionales

### Conceptos

- [x] `if`
- [x] `else`
- [x] `else if`
- [x] `>`
- [x] `<`
- [x] `>=`
- [x] `<=`
- [x] `==`
- [x] `!=`
- [x] Diferencia entre `=` y `==`
- [x] Orden de evaluación de condiciones

### Ejercicios

- [x] Mayor o menor de edad
- [x] Clasificador de edades
- [x] Validación de edad negativa
- [x] Simplificación de condiciones
- [x] Sistema de autorización de entrada
- [x] Sistema de descuentos

### Checkpoint

- [x] Construir un `if/else` desde cero
- [x] Utilizar varios `else if`
- [x] Explicar `=` vs `==`
- [x] Ordenar condiciones correctamente
- [x] Simplificar condiciones sin cambiar el resultado

**Estado:** ✅ Completado a nivel práctico.

---

## Módulo 5 — Lógica booleana

**Estado actual:** ✅ Completado.

### Conceptos

- [x] `&&` — AND
- [x] `||` — OR
- [x] `!` — NOT
- [x] `bool`
- [x] `true`
- [x] `false`
- [x] `#include <stdbool.h>`
- [x] Valores `0` y `1`
- [x] Tablas de verdad
- [x] Combinación de condiciones
- [x] Negación de condiciones

### Ejercicios

- [x] Acceso con edad + autorización
- [x] Descuento por edad
- [x] Programa usando `!`
- [x] Programa usando `bool`
- [x] Condiciones combinadas
- [x] Ejercicios de tablas de verdad

### Checkpoint

- [x] Explicar `&&`
- [x] Explicar `||`
- [x] Explicar `!`
- [x] Explicar `0` y `1` como falso/verdadero
- [x] Utilizar `bool`
- [x] Resolver condiciones complejas sin ayuda

---

## Módulo 6 — `switch`

### Conceptos

- [x] `switch`
- [x] `case`
- [x] `break`
- [x] `default`
- [x] Cuándo utilizar `switch` vs `if/else`

### Ejercicios

- [x] Menú de opciones
- [x] Calculadora mediante `switch`
- [x] Menú interactivo

### Checkpoint

- [x] Crear un `switch` desde cero
- [x] Explicar `break`
- [x] Explicar `default`
- [x] Elegir entre `switch` e `if/else`

---

## Módulo 7 — Bucles

### Conceptos

- [x] `while`
- [x] `do while`
- [x] `for`
- [x] Contadores
- [x] Acumuladores
- [x] Bucles infinitos
- [x] `break`
- [x] `continue`
- [x] Bucles anidados

### Ejercicios

- [x] Contar del 1 al 10
- [x] Números pares
- [x] Tabla de multiplicar
- [x] Suma de números
- [x] Factorial
- [x] Menú repetitivo
- [x] Validación de entrada
- [x] Bucles anidados
- [x] Ejercicio 2 — Contador divisibles por 3 (`ej2_contador.c`)
- [x] Ejercicio 3 — Acumulador pares (`ej3_acumulador.c`)
- [x] Ejercicio 4 — Break con suma (`ej4_break.c`)
- [x] Ejercicio 5 — Continue sin divisibles por 3 (`ej5_continue.c`)
- [x] Ejercicio 6 — Notas con break (`ej6_integrado.c`)

### Checkpoint

- [x] Elegir entre `for`, `while` y `do while`
- [x] Crear un contador
- [x] Crear un acumulador
- [x] Utilizar `break`
- [x] Utilizar `continue`
- [x] Resolver un problema usando un bucle (ej6 pendiente)

---

## Módulo 8 — Proyecto integrador de Fase 1

### Proyecto: 🧮 Calculadora interactiva

Debe incluir:

- [x] Menú
- [x] Suma
- [x] Resta
- [x] Multiplicación
- [x] División
- [x] Validación de división por cero
- [x] Repetición del menú
- [x] Opción para salir
- [x] Entrada de datos
- [x] Condiciones
- [x] `switch`
- [x] Bucles

### Checkpoint Fase 1

- [x] Resolver un ejercicio sin asistencia
- [x] Explicar variables y tipos
- [x] Explicar operadores
- [x] Explicar `if/else`
- [x] Explicar operadores lógicos
- [x] Utilizar `switch`
- [x] Utilizar bucles
- [x] Completar proyecto integrador

**Estado:** ✅ Completado.

---

# 🔵 FASE 2 — FUNCIONES Y MODULARIZACIÓN

## Objetivo

Aprender a dividir programas grandes en funciones reutilizables y posteriormente en varios archivos.

## Módulo 1 — Funciones

- [x] Declaración
- [x] Definición
- [x] Llamada
- [x] Parámetros
- [x] `return`
- [x] Valor de retorno
- [x] Funciones `void`
- [x] Variables locales
- [x] Alcance/scope

### Ejercicios

- [x] Función suma
- [x] Función promedio
- [x] Función mayor de dos números
- [x] Funciones matemáticas
- [x] Calculadora mediante funciones

## Módulo 2 — Prototipos y modularización

- [x] Prototipos
- [x] Archivos `.c`
- [x] Archivos `.h`
- [x] `#include` propio
- [x] Compilación de varios archivos

## Proyecto

### 🧮 Calculadora modular

- [x] `main.c`
- [x] `operaciones.c`
- [x] `operaciones.h`
- [x] Menú
- [x] Funciones separadas

## Checkpoint Fase 2

- [x] Crear funciones
- [x] Pasar parámetros
- [x] Retornar valores
- [x] Separar código en archivos
- [x] Compilar varios archivos

---

# 🟣 FASE 3 — ARRAYS Y CADENAS

## Objetivo

Trabajar con colecciones de datos y texto.

## Módulo 1 — Arrays

- [ ] Declaración
- [ ] Índices
- [ ] Recorrido
- [ ] Modificación
- [ ] Arrays de `int`
- [ ] Arrays de `float`
- [ ] Arrays multidimensionales

### Ejercicios

- [ ] Promedio de notas
- [ ] Mayor y menor
- [ ] Buscar elemento
- [ ] Contar elementos
- [ ] Ordenamiento básico

## Módulo 2 — Strings

- [ ] Strings como arrays de `char`
- [ ] `\0`
- [ ] `strlen`
- [ ] `strcpy`
- [ ] `strcmp`
- [ ] `strcat`
- [ ] Entrada de texto

## Proyecto

### 📒 Agenda de contactos

- [ ] Nombre
- [ ] Teléfono
- [ ] Búsqueda
- [ ] Listado
- [ ] Edición
- [ ] Eliminación

## Checkpoint Fase 3

- [ ] Recorrer arrays
- [ ] Manipular strings
- [ ] Buscar información
- [ ] Ordenar datos
- [ ] Crear un programa con arrays

---

# 🔴 FASE 4 — PUNTEROS

## Objetivo

Comprender direcciones de memoria y trabajar directamente con referencias a datos.

## Módulo 1 — Conceptos básicos

- [ ] Dirección de memoria
- [ ] Operador `&`
- [ ] Operador `*`
- [ ] Declaración de punteros
- [ ] Dereferenciación
- [ ] Punteros e `int`
- [ ] Punteros y `float`
- [ ] `scanf()` explicado mediante punteros

## Módulo 2 — Punteros y arrays

- [ ] Relación array/puntero
- [ ] Aritmética de punteros
- [ ] Recorrer arrays con punteros
- [ ] Strings y punteros

## Módulo 3 — Punteros y funciones

- [ ] Paso por referencia
- [ ] Modificar variables desde funciones
- [ ] Punteros como parámetros
- [ ] Punteros a funciones — introducción

## Proyecto

### 🔄 Biblioteca de operaciones mediante punteros

- [ ] Intercambio de variables
- [ ] Manipulación de arrays
- [ ] Funciones que modifican datos
- [ ] Menú

## Checkpoint Fase 4

- [ ] Explicar qué es una dirección
- [ ] Explicar `&`
- [ ] Explicar `*`
- [ ] Declarar y utilizar punteros
- [ ] Modificar una variable mediante un puntero
- [ ] Recorrer un array mediante punteros

---

# 🟠 FASE 5 — MEMORIA DINÁMICA

## Objetivo

Aprender a reservar y liberar memoria manualmente.

## Conceptos

- [ ] Stack
- [ ] Heap
- [ ] `malloc`
- [ ] `calloc`
- [ ] `realloc`
- [ ] `free`
- [ ] Memory leaks
- [ ] Dangling pointers
- [ ] NULL
- [ ] Validación de asignaciones

## Ejercicios

- [ ] Array dinámico
- [ ] Redimensionar array
- [ ] Liberar memoria
- [ ] Detectar fugas

## Proyecto

### 📋 Lista dinámica de registros

- [ ] Crear
- [ ] Agregar
- [ ] Eliminar
- [ ] Modificar
- [ ] Buscar
- [ ] Liberar memoria

## Checkpoint Fase 5

- [ ] Explicar stack vs heap
- [ ] Utilizar `malloc`
- [ ] Utilizar `realloc`
- [ ] Utilizar `free`
- [ ] Evitar memory leaks
- [ ] Manejar errores de memoria

---

# 🟡 FASE 6 — STRUCTS Y ESTRUCTURAS DE DATOS

## Objetivo

Crear tipos de datos propios y estructuras de datos.

## Módulo 1 — Structs

- [x] `struct`
- [x] Campos
- [x] Acceso con `.`
- [x] `typedef`
- [x] Structs anidados
- [x] Arrays de structs
- [x] Punteros a structs
- [x] `->`

## Módulo 2 — Listas enlazadas

- [ ] Nodo
- [ ] Lista
- [ ] Insertar
- [ ] Eliminar
- [ ] Buscar
- [ ] Recorrer

## Módulo 3 — Otras estructuras

- [ ] Pila
- [ ] Cola
- [ ] Árbol básico
- [ ] Tabla hash — introducción

## Proyecto

### 📦 Sistema de inventario

- [ ] Productos
- [ ] Código
- [ ] Nombre
- [ ] Precio
- [ ] Cantidad
- [ ] Agregar
- [ ] Buscar
- [ ] Modificar
- [ ] Eliminar
- [ ] Listar

## Checkpoint Fase 6

- [ ] Crear structs
- [ ] Usar arrays de structs
- [ ] Usar punteros a structs
- [ ] Implementar lista enlazada
- [ ] Implementar pila
- [ ] Implementar cola

---

# 🟤 FASE 7 — ARCHIVOS Y PERSISTENCIA

## Objetivo

Guardar y recuperar información desde archivos.

## Conceptos

- [ ] `FILE`
- [ ] `fopen`
- [ ] `fclose`
- [ ] `fprintf`
- [ ] `fscanf`
- [ ] `fgets`
- [ ] `fputs`
- [ ] `fread`
- [ ] `fwrite`
- [ ] Archivos de texto
- [ ] Archivos binarios
- [ ] Modos `r`, `w`, `a`
- [ ] Manejo de errores

## Proyecto

### 🗄️ Sistema de inventario persistente

Extender el proyecto anterior para:

- [ ] Guardar productos
- [ ] Cargar productos
- [ ] Actualizar datos
- [ ] Eliminar datos
- [ ] Mantener información después de cerrar el programa

## Checkpoint Fase 7

- [ ] Abrir archivos
- [ ] Leer archivos
- [ ] Escribir archivos
- [ ] Trabajar con archivos binarios
- [ ] Manejar errores
- [ ] Crear aplicación persistente

---

# ⚫ FASE 8 — C AVANZADO Y PROGRAMACIÓN DE SISTEMAS

## Objetivo

Pasar de programas básicos a conceptos de bajo nivel y sistemas.

## Módulo 1 — Preprocesador

- [ ] `#define`
- [ ] Macros
- [ ] Include guards
- [ ] Compilación condicional

## Módulo 2 — Bitwise

- [ ] `&`
- [ ] `|`
- [ ] `^`
- [ ] `~`
- [ ] `<<`
- [ ] `>>`
- [ ] Máscaras de bits

## Módulo 3 — Compilación

- [ ] Preprocesado
- [ ] Compilación
- [ ] Ensamblado
- [ ] Linking
- [ ] Object files
- [ ] `gcc` avanzado
- [ ] Flags

## Módulo 4 — Make

- [ ] Makefile
- [ ] Targets
- [ ] Dependencias
- [ ] Compilación incremental

## Módulo 5 — Debugging

- [ ] GDB
- [ ] Breakpoints
- [ ] Watch
- [ ] Stack
- [ ] Variables
- [ ] Backtrace

## Módulo 6 — Análisis de memoria

- [ ] Valgrind
- [ ] Memory leaks
- [ ] Invalid reads
- [ ] Invalid writes

## Módulo 7 — Sistemas Linux

- [ ] Procesos
- [ ] `fork`
- [ ] Señales
- [ ] Pipes
- [ ] File descriptors
- [ ] Sockets
- [ ] Threads

## Proyectos avanzados

- [ ] Shell de Linux sencilla
- [ ] Servidor HTTP básico
- [ ] Cliente TCP
- [ ] Sistema cliente-servidor
- [ ] Mini intérprete
- [ ] Programa multihilo

## Checkpoint Fase 8

- [ ] Utilizar GDB
- [ ] Utilizar Valgrind
- [ ] Crear Makefile
- [ ] Entender compilación y linking
- [ ] Trabajar con procesos
- [ ] Trabajar con sockets
- [ ] Trabajar con threads

---

# 🏆 PROYECTOS FINALES

Una vez terminadas las fases, seleccionar varios proyectos para consolidar conocimientos.

## Proyecto 1 — Sistema de inventario

**Conceptos:** structs, arrays, funciones, memoria y archivos.

Estado: ⬜

## Proyecto 2 — Agenda de contactos

**Conceptos:** strings, structs, búsqueda, archivos.

Estado: ⬜

## Proyecto 3 — Shell sencilla

**Conceptos:** Linux, procesos, comandos, memoria.

Estado: ⬜

## Proyecto 4 — Servidor HTTP básico

**Conceptos:** sockets, redes, archivos.

Estado: ⬜

## Proyecto 5 — Proyecto libre

Elegir un problema real y resolverlo en C.

Estado: ⬜

---

# 🧭 ADELANTOS

Podemos estudiar superficialmente temas de fases futuras si aparecen durante una clase.

> Un adelanto NO marca el módulo completo como terminado.

### Registro

- 🧭 Memoria dinámica temprana (Fase 5): el gestor ya usa `malloc` + chequeo `NULL` + `free` desde la Etapa 1 (decisión de diseño del estudiante). Registrado como adelanto; NO marca módulos de Fase 5 — se formalizará en V5 (`realloc`, fugas, `valgrind`).
- 🧭 Punteros aplicados (Fase 4): clase y reto completos en Sesión 4; el gestor usa paso por referencia y recorrido con `*(base+i)` desde la Etapa 1. Formalización pendiente en V4 (swap con punteros, explicación de `p++`).
- 🧭 Fase 6 parcial: Módulo 1 (Structs) completado. Módulo 2 (Listas enlazadas) y Módulo 3 (Pila, Cola, Árbol) omitidos por decisión del estudiante en Sesión 11. Se avanza a Fase 7 (Archivos). Los structs的基础 son suficientes para archivos; listas enlazadas se pueden retomar después si se necesitan para proyectos avanzados.

---

# 🔁 REPASOS

Registrar aquí conceptos que necesiten reforzarse.

- [ ] Manejo de EOF en `scanf` (entrada agotada / Ctrl+D): hoy produce bucle infinito en el gestor cuando se prueba con pipes. Aplazado conscientemente en Sesión 5 — retomar en Fase 5 con salida elegante.
- [ ] 
- [ ] 
- [ ] 

---

# 🐛 ERRORES IMPORTANTES APRENDIDOS

Registrar errores que hayan servido para entender conceptos.

### Desplazamiento de elementos en un array (concepto del hueco)

Error:

```c
for(int i = *listSize; i < index; i--) {   // condición imposible de cumplir
    listArray[i] = listArray[i - 1];
}
listArray[index] = data;                    // pisa un elemento existente
```

Aprendizaje:

- Para insertar, los elementos se mueven **desde el final hacia atrás**, deteniéndose **antes** de tapar el hueco.
- Insertar "después del índice i" → el hueco está en `i + 1`.
- Regla general: el bucle corre mientras `i > hueco`, y el dato cae en `listArray[hueco]`. Mismo patrón que `insertAtBeginning` (donde el hueco es 0).

Solución:

```c
for(int i = *listSize; i > index + 1; i--) {
    listArray[i] = listArray[i - 1];
}
listArray[index + 1] = data;
```

### Lectura fuera de rango en `deleteAtIndex` (off-by-one)

Error:

```c
for(int i = index; i < *listSize; i++) {
    listArray[i] = listArray[i + 1];   // última vuelta lee listArray[*listSize]
}
```

Aprendizaje:

- Posiciones válidas: `0` a `*listSize - 1`. Leer `listArray[*listSize]` es memoria sin inicializar.
- Puede "funcionar" por suerte (el valor basura cae donde no se imprime), pero es un bug latente e intermitente.

Solución:

```c
for(int i = index; i < *listSize - 1; i++) {
    listArray[i] = listArray[i + 1];
}
```

### Contar separadores en la medición + errores compensados (LongestWord)

Error:

```c
while(sentence[i] != 0){
    if(sentence[i] == ' '){
        count--;                    // parche 1: restar tarde roba una letra a la palabra que terminó
        if(longestInt < count){ ... }
        count = 0;
    }
    i++;
    count++;                        // este ++ corre incluso cuando el carácter es espacio
}
for(int j = ind - 1; ...)           // parche 2: compensar en la impresión
```

Aprendizaje:

- El `count++` al final del bucle se ejecuta también en la iteración del espacio y contamina la medición de la palabra siguiente.
- Restar después (`count--`, `ind-1`) no corrige la causa: crea **errores compensados** que se cancelan entre sí; algunos tests pasan por casualidad pero el diseño queda frágil.
- Regla general: los separadores no pertenecen a ninguna palabra — se *detectan*, no se *cuentan*. La corrección va en la fuente del dato, no en quien lo consume.

Solución:

```c
if(sentence[i] == ' '){
    /* cerrar palabra: desafiar al récord, y SIEMPRE reiniciar */
    count = 0;
} else {
    count++;    // solo las letras cuentan
}
```

### El fantasma `\0`: arrancar en el terminador en vez de la última letra (reversa con punteros)

Error:

```c
// palabra[len] fue convertido a '\0' por la limpieza del fgets
for(int i = len; i >= 0; i--){
    printf("%c", *(palabra+i));   // primero imprime un '\0' invisible
}
printf("%s", reversePal);          // si reversePal[0] recibió ese '\0', imprime NADA
```

Aprendizaje:

- `len` es la posición del terminador, no de la última letra: la última letra vive en `len-1`.
- `%s` camina desde la dirección recibida y se detiene en el **primer** `\0`; si este está en la casilla 0, no imprime nada — síntoma silencioso y confuso.
- Un mismo error puede producir dos síntomas distintos (carácter fantasma + impresión muda). Buscar la causa raíz común antes de parchar cada síntoma.

Solución:

```c
for(int i = len - 1; i >= 0; i--){
    printf("%c", *(palabra+i));
}
```

### Éxito fantasma: validar el dato pero nunca preguntar si la lectura funcionó

Error:

```c
scanf("%f", &calificaciones[(*i)]);            // se ignora lo que devolvió scanf
if(*(calificaciones+(*i)) >= 0 && *(calificaciones+(*i)) <= 5){   // evalúa BASURA
    printf("Nota Agregada con exito \n");      // ¡aun habiendo escrito "abc"!
}
```

Aprendizaje:

- Si `scanf` falla, **no escribe nada**: la casilla conserva memoria sin inicializar. La memoria recién pedida a `malloc` suele venir en ceros → `0.0` pasa el rango 0–5 → se registra una nota fantasma.
- Reservar memoria ≠ inicializarla: `malloc` entrega "la habitación sin limpiar" (a veces ceros, a veces el dato del huésped anterior — demostrado con un float basura de 38 dígitos y con huellas del vecino de pila).
- Regla general: primero el contrato de lectura (`== 1`), después el rango del valor. Sin lectura confirmada, toda validación se evalúa sobre basura.

Solución:

```c
if(scanf("%f", &calificaciones[(*i)]) != 1){
    printf("Entrada invalida\n");
    limpiarBuffer();          // un scanf fallido deja SU línea intacta en el buffer
}
else if(*(calificaciones+(*i)) >= 0 && *(calificaciones+(*i)) <= 5){
    printf("Nota Agregada con exito \n");
    (*i)++;
}
```

### Tratar EOF como "entrada inválida" + `pausar()` en rama de error → bucle infinito

Error:

```c
if(scanf("%d", &opcion) != 1){
    limpiarBuffer();
    printf("Entrada invalida, intente de nuevo\n");
    continue;                  // con stdin agotado, esto gira PARA SIEMPRE
}
// y en la rama de error de agregarCalificacion:
pausar();                      // su getchar() se come el próximo token al probar con pipes
```

Aprendizaje:

- El contrato completo de `scanf` tiene **tres** respuestas: `1` (leyó), `0` (basura), `EOF` (-1: no queda nada por leer, jamás). Tratar EOF como basura tipeable = pedirle "intente de nuevo" a alguien que ya no puede escribir.
- Evidencia: 23M–95M líneas de menú en 2 segundos; un experimento SIN ninguna letra inválida también loopeó → eso aisló a EOF como culpable real (la letra solo iniciaba la cascada).
- En ramas de error va `limpiarBuffer()` (limpia y devuelve el control ya); `pausar()` espera un Enter humano que en un pipe no existe y consume el siguiente token (el `'7'` de salida).
- Interactivamente este bug es invisible (siempre hay teclado); solo explota con entrada canalizada o Ctrl+D. Por qué los tests automatizados valen oro.

Solución (patrón acordado; implementación formal en Fase 5):

```c
int leidos = scanf("%d", &opcion);
if(leidos == EOF){ /* entrada agotada: salir con gracia */ break; }
if(leidos == 0){ limpiarBuffer(); printf("Entrada invalida\n"); continue; }
```

### Truncado silencioso al guardar float en int (intercambio con punteros)

Error:

```c
void intercambiarCalificaciones(float *a, float *b){
    int temp = *a;   // *a es float, temp es int → trunca decimales
    *a = *b;
    *b = temp;       // pierde la parte decimal
}
// Resultado: 4.5 → 4.0 al intercambiar
```

Aprendizaje:

- Asignar un `float` a un `int` **trunca** silenciosamente la parte decimal — no redondea, no avisa, no produce warning con `-Wall -Wextra`.
- El tipo del temporal debe coincidir con el tipo de los datos que se manipulan. Regla general: si intercambias `float*`, el temporal es `float`.
- Este tipo de bug es particularmente peligroso porque el programa **funciona** — solo que produce datos incorrectos. No hay crash, no hay warning.

Solución:

```c
void intercambiarCalificaciones(float *a, float *b){
    float temp = *a;
    *a = *b;
    *b = temp;
}
```

### Dangling pointer al usar realloc sin actualizar el puntero original

Error:

```c
void agregarCalificacion(float *calificaciones, int *i, int *tamaño){
    if(*i == *tamaño){
        float *tmp = realloc(calificaciones, nuevo * sizeof(float));
        // tmp tiene la nueva dirección, pero calificaciones sigue con la vieja
        *tamaño = nuevoTamaño;
    }
    scanf("%f", &calificaciones[(*i)]);  // usa el puntero VIEJO → dangling si realloc movió
}
```

Aprendizaje:

- `realloc` puede **mover** la memoria a un sitio nuevo y liberar la vieja. Si la función recibe `float*` por valor, la copia local se actualiza pero el puntero de `main()` queda apuntando al sitio liberado.
- Para que una función pueda actualizar un puntero que vive en el caller, se necesita pasar `float **calificaciones` (puntero al puntero). Dentro se usa `*calificaciones` para acceder al puntero real.
- `*calificaciones = tmp` solo actualiza la copia local — no alcanza. El caller sigue con el puntero viejo.
- `realloc` puede no mover la memoria (扩展会 en el mismo sitio), por eso el bug es intermitente y difícil de reproducir.

Solución:

```c
int agregarCalificacion(float **calificaciones, int *i, int *tamaño){
    if(*i == *tamaño){
        float *tmp = realloc(*calificaciones, nuevo * sizeof(float));
        if(tmp == NULL){ return 1; }
        *calificaciones = tmp;  // actualiza el puntero de MAIN
        *tamaño = nuevoTamaño;
    }
    scanf("%f", &(*calificaciones)[(*i)]);
}
// En main: agregarCalificacion(&calificaciones, &i, &tamaño);
```

### Asignación fuera del bloque if → puntero nulo

Error:

```c
float *tempCalificaciones = NULL;
if(*i == *tamaño){
    tempCalificaciones = realloc(*calificaciones, ...);
    *calificaciones = tempCalificaciones;
}
*calificaciones = tempCalificaciones;  // FUERA del if → siempre se ejecuta
// Cuando no hay realloc: tempCalificaciones es NULL → *calificaciones = NULL → segfault
```

Aprendizaje:

- Las variables inicializadas en `NULL` siguen siendo `NULL` si no se les asigna otro valor.
- Si una línea está fuera de un bloque `if`, se ejecuta **siempre**, no solo cuando la condición se cumple.
- Resultado: el primer `scanf` intenta escribir en dirección `NULL` → segfault.

Solución:

```c
if(*i == *tamaño){
    float *tmp = realloc(*calificaciones, nuevo * sizeof(float));
    if(tmp == NULL){ return 1; }
    *calificaciones = tmp;  // DENTRO del if
    *tamaño = nuevoTamaño;
}
```

### Return de función sin asignar → struct vacío

Error:

```c
// La función devuelve un Evento modificado...
Evento crearEvento(Evento e1){
    strcpy(e1.nombre, "Juan");
    e1.costo = 1000000;
    return e1;
}

// ...pero el resultado nunca se guarda:
crearEvento(lista[0]);   // el struct modificado se descarta
// lista[0] sigue con basura → todos los campos en 0
```

Aprendizaje:

- Una función que `return` un valor **devuelve** ese valor al lugar donde se llamó. Si no lo guardas, se pierde.
- Es como ordenar comida para llevar y nunca recogerla: la comida existe, pero no la tienes.
- Regla general: si una función retorna algo que necesitas, **asigna el resultado** a una variable o al destino.

Solución:

```c
lista[0] = crearEvento(lista[0]);   // guarda el resultado
```

---

# 📝 CHECKPOINTS REALIZADOS

## Checkpoint V1 — Fundamentos ✅ (Sesión 5)

- **Reto:** Etapa 1 del Gestor de Calificaciones (adaptación de la calculadora propuesta): menú do-while/switch, alta/listado/estadísticas, validación de opción y de nota (formato + rango), guards de lista vacía, malloc/free.
- **Interrogatorio superado:** paso por referencia (`&`/`*`; sin `&` la función recibe el valor como dirección falsa → segfault demostrado, exit 139), reservar ≠ inicializar (fantasma 0.0; heap con basura; pila con datos del vecino), contrato de `scanf` (1 / 0 / basura en buffer / EOF), nombre de arreglo = dirección (`%s` sin `&`).
- **Verificación práctica:** batería automatizada 4/4 con `gcc -Wall -Wextra` (binario `output/gestor`).

## Checkpoint V2 — Funciones y modularización ✅ (Sesión 7)

- **Reto:** separar el Gestor de Calificaciones en `main.c` + `gestor.c` + `gestor.h` (prototipos, include guards, compilación multi-archivo con GCC).
- **Interrogatorio superado:** prototipos vs implementación (el `.h` es el "menú", el `.c` es la "cocina"), include guards (`#ifndef` evita redefiniciones), funciones privadas (no van al `.h`), compilación incremental (paso 1: `.c` → `.o`; paso 2: `.o` → binario).
- **Verificación práctica:** compilación limpia con `gcc -Wall -Wextra` (cero warnings), binario `output/gestor`.

## Checkpoint V3 — Arrays y cadenas ✅ (Sesión 7)

- **Reto:** implementar funciones de búsqueda, ordenamiento y cambio de nombre en el Gestor de Calificaciones (buscar por posición, bubble sort, `strcpy`).
- **Interrogatorio superado:** conversión de índices (1-indexed → 0-indexed), optimización de bubble sort (`-j` evita revisar elementos ya ordenados), diferencia entre `=` (copia un char) y `strcpy` (copia un string completo), validación de `scanf` (`== 1`).
- **Verificación práctica:** compilación limpia con `gcc -Wall -Wextra`, funciones operando correctamente.

## Checkpoint V4 — Punteros ✅ (Sesión 8)

- **Reto:** función `intercambiarCalificaciones` que intercambie dos notas mediante punteros; recorrido del array con `*(calificaciones+j)` en `mostrarCalificacion`.
- **Interrogatorio superado:** `&x` (dirección), `*p` (valor), `p++` (siguiente entero con salto por tipo), `&` obligatorio al pasar dirección (sin él → segfault), tipo del temporal importa (`int` trunca `float` silenciosamente).
- **Verificación práctica:** compilación limpia con `gcc -Wall -Wextra`, intercambio correcto preservando decimales (4.5 → 4.5, no 4.0).

## Checkpoint V5 — Memoria dinámica ✅ (Sesión 9)

- **Reto:** array dinámico con `realloc` que crece de 2→4→8 al llenarse, usando `float **` para actualizar el puntero de `main()`. Verificación con `valgrind` (0 leaks, 0 errors).
- **Interrogatorio superado:** memory leaks (olvidar `free`), `malloc` vs `calloc` (basura vs ceros), `realloc` y dangling pointer (necesidad de temporal + `float **`),为什么 `ptr = realloc(ptr,...)` es peligroso (si falla se pierde el original).
- **Verificación práctica:** valgrind "All heap blocks were freed -- no leaks are possible", 5 allocs / 5 frees, compilación limpia.

---

# 📈 REGISTRO DE SESIONES

## Sesión 1 — Reto AvanzaTech: lista sobre array

- Adaptación de este documento: Fases 1–5 marcadas 🟡 Por validar; creada sección 🎓 Validación de conocimientos previos (checkpoints V1–V5); historial anterior limpiado.
- Reto externo completado: lista sobre array (`Pruebas Whatsapp/Reto2AvanzaTech.c`).
  - Funciones implementadas: `findLength`, `insertAfterIndex`, `deleteAtIndex`.
- Concepto clave: el **hueco** al insertar/eliminar en arrays — mover elementos desde el final hacia atrás, deteniéndose antes del hueco.
- Bugs corregidos:
  - Condición invertida en el bucle de desplazamiento (`i < index`) → el bucle nunca giraba.
  - Dato insertado en `index` en lugar de `index + 1` → sobrescribía un elemento.
  - Off-by-one en `deleteAtIndex` (`i < *listSize`) → lectura fuera del rango válido; corregido a `i < *listSize - 1`.
- Compilación verificada con `gcc -Wall -Wextra`; las 5 salidas correctas.
- No realizado (opcional): validación contra `MAX_SIZE` e índices inválidos.

Estado: 🧪 Reto externo completado. Próximo: 🎓 Checkpoint V1 — Fundamentos (calculadora interactiva).

---

## Sesión 2 — Reto LongestWord (W3 Easy): palabra más larga

- Nuevo reto externo iniciado: encontrar la palabra más larga de una frase (`Pruebas W3/W3Practicas/Easy/LongestWord.c`, escrito por el estudiante).
- Lógica diseñada por él: medir palabras entre espacios y guardar los índices de la ganadora para imprimirla al final.
- ✅ Concepto validado: `fgets` conserva el `'\n'`; el estudiante lo reemplaza por `\0` y obtiene `len` manualmente (pregunta trampa #1 bien resuelta).
- Compilación con `gcc -Wall -Wextra`: **no compila** (`if()` vacío, línea 24); warnings de variables sin usar (`longest`, `idx`).
- Diagnóstico en curso: posible redundancia entre `count`, `tempCount` e `idx`; mezcla de dos estrategias (guardar índices vs. copiar a `longest[200]`).
- Técnica nueva introducida: *debugging con printf* (tarea pendiente: correr con `"hola si"` y observar la salida).
- Pregunta trampa #2 pendiente: ¿qué pasa con espacios dobles?
- Reto **no completado**; se continúa en la próxima sesión.

Estado: 🟢 Reto externo en progreso (LongestWord). Checkpoint V1 sigue pendiente.

---

## Sesión 3 — Reto LongestWord completado ✅

- Cierre del reto palabra más larga (`Pruebas W3/W3Practicas/Easy/LongestWord.c`). El estudiante reescribió su lógica partiendo de un diseño claro de variables (contador actual, récord `longestInt`, índice de inicio `ind`).
- Bugs corregidos por él tras revisión guiada:
  - El espacio se contaba como letra de la palabra siguiente → resuelto con `else { count++; }`: solo se cuentan letras, nunca separadores.
  - `count = 0` estaba dentro del `if` del récord → movido fuera: el reinicio ocurre en cada frontera, gane o pierda la palabra.
  - Impresión usaba la longitud como índice absoluto (`i < longestInt`) → corregido a `i < longestInt + ind`.
  - Antipatrón detectado y eliminado: **errores compensados** (`count--`, `ind-1`, segundo `count--`) que se cancelaban entre sí y hacían pasar tests por casualidad (registrado en 🐛).
- Verificación: 5 casos correctos (incluye espacios dobles y última palabra larga). Compila limpio con `-Wall -Wextra`.
- Mini-checkpoint aprobado: fórmula fin−longitud=inicio, reinicio en cada frontera, bloque final para la última palabra cerrada por `\0`.
- Extensión completada: validación de caracteres especiales con `isalpha()` (`ctype.h`). Nueva definición: palabra = secuencia de letras; cualquier no-letra cierra palabra. Archivo movido a `Medium/`. Verificado con 8 tests (incluye `don't` → partición por apóstrofe, `state-of-the-art` → guiones separan).
- Nota: los dos últimos ladrillos de la extensión (`ctype.h` + condición `!isalpha`) fueron aportados por el tutor por emergencia del estudiante; el diseño y el resto del código son suyos.
- Pulido pendiente (opcional): *shadowing* de `i` (externa + la del `for` de limpieza) y `#include <string.h>` sin uso.

Estado: ✅ Reto externo completado (LongestWord). Próximo: 🎓 Checkpoint V1 — Fundamentos.

---

## Sesión 4 — Clase de punteros + reto de reversa con punteros ✅

- Clase práctica de punteros (territorio Fase 4 Módulos 1–2), anclada en el propio LongestWord del estudiante:
  - Memoria como casillas direccionadas; `&` pregunta la dirección, `*` va hacia ella ("dos nombres, una sola casilla").
  - `scanf("%d", &n)` explicado por fin: parámetro de salida vía dirección.
  - Aritmética de punteros verificada en vivo: `sen[i] ≡ *(sen+i)`, saltos por tipo (`char*`=1 byte, `int*`=4 bytes).
  - Nombre de arreglo ya es dirección del primer elemento → por qué `fgets(palabra,...)` no lleva `&`.
- Reto completado: imprimir palabra al revés SOLO con aritmética de punteros, sin `[ ]` de acceso ni `string.h` (`Pruebas Varias/RetoPunteros.c`).
- Bugs del estudiante corregidos guiadamente:
  - Bucle muerto: condición invertida `i<0` (primo del bug de Sesión 1) → nunca corría.
  - Fantasma `\0`: arranque en `len` en vez de `len-1` → carácter invisible impreso y `%s` mudo (off-by-one).
  - Out of bounds: traducción errónea `*(palabra+500)` sobre arreglo de 500 (índices válidos 0–499).
- Decisión de diseño del estudiante: eliminar array auxiliar (`reversePal`) — imprimir, no guardar.
- Concepto sellado con demo: `%s` camina desde la dirección recibida e imprime hasta el primer `\0`.
- Compilación limpia `-Wall -Wextra`; tests: hola→aloh, anita→atina, reconocer→reconocer, a→a.

Estado: ✅ Reto de punteros completado. Próximo: 🎓 Checkpoint V1 — Fundamentos.

---

## Sesión 5 — Proyecto Integrador "Gestor de Calificaciones": Etapa 1 (V1) ✅

- Arranque del proyecto integrador que servirá de vehículo para validar V1–V5 (`Pruebas Varias/Validacion V1-V5.c`, código del estudiante).
- Funcionalidad de la Etapa 1: menú do-while+switch (7 opciones), alta/listado/estadísticas (promedio con casting `(float)`, mayor, menor), guard de lista vacía, escala 0–5 elegida por él, `malloc` + chequeo `NULL` + `free` al salir, paso por referencia con `int *i`.
- Bugs corregidos guiadamente en sesiones previas del proyecto: `#define` con `;`, firma `int *i` + llamada con `&i`, precedencia `(*i)++` vs `*i++`, `&` sobrante en `printf`, función usada antes de declararse, `break` faltantes en el `switch`.
- Metodología nueva: batería de tests automatizados con pipes (`printf ... | ./gestor`) y `timeout` para cazar bucles infinitos.
- Investigación forense del bucle infinito: letras como nota generaban ~23M líneas de menú. Causa doble — éxito fantasma (`scanf` falla → el rango se evalúa sobre memoria sin inicializar ≈ 0.0, pasa el check 0–5) más cascada hacia EOF. El experimento controlado decisivo: EOF puro SIN letras inválidas también loopeaba → aisló el bug real.
- Correcciones escritas por el estudiante: chequeo `if(scanf(...) != 1)` en `agregarCalificacion` (reutilizó su propio patrón del main) y swap `pausar()` → `limpiarBuffer()` en la rama de error (el `getchar()` de pausar se comía el `'7'` de salida en los pipes).
- Batería final 4/4 ✅: T1 flujo feliz (notas 4.5/3.0, promedio 3.8), T2 letras en menú (1 mensaje, exit 0), T3 letras en nota (rechazo limpio + Chaoo), T4 nota 9 fuera de rango (Nota invalida + salida limpia).
- Checkpoint V1 aprobado por interrogatorio (ver 📝). Demos de apoyo: segfault pasando valor donde va dirección (exit 139); heap recién reservado en ceros vs float basura de 38 dígitos tras reuso; arreglo local heredando datos de la función anterior en pila.
- Decisión registrada: manejo de EOF aplazado conscientemente (limitación conocida; interactivo no afecta) → 🔁 REPASOS, retomar en Fase 5.

Estado: ✅ Etapa 1 completa + Checkpoint V1 aprobado. Próximo: Etapa 2 (V2) — modularizar en `main.c` + `gestor.c` + `gestor.h`.

---

## Sesión 6 — Cierre breve: revelación de headers + misión Etapa 2 asignada

- Pregunta semilla respondida por el estudiante con intuición correcta: el `.h` propio se incluye "igual que stdio.h".
- Demo de cierre: `/usr/include/stdio.h` es un archivo de texto de 34 KB con puros prototipos (`printf` en la línea 363, `scanf` en 428, `getchar` en 582). Concepto sellado: `#include` = copiar/pegar texto del preprocesador; `<...>` busca en las carpetas del sistema, `"..."` busca primero en la carpeta del proyecto.
- Misión Etapa 2 (V2) asignada, **aún sin iniciar**: separar el gestor en `main.c` + `gestor.c` + `gestor.h`, incluir include guards (`#ifndef/#define/#endif`), compilar multi-archivo (`gcc -Wall -Wextra -g main.c gestor.c -o output/gestor`) y re-validar con la misma batería de 4 tests.
- Preguntas guía entregadas para decidir antes de escribir: ¿promesas o realidades van al `.h`?, ¿qué se queda solo en `main.c`?, ¿qué deben incluir ambos `.c`?

Estado: 🟢 Etapa 2 asignada (sin iniciar). Próxima sesión: revisión del split multi-archivo.

---

## Sesión 7 — Checkpoint V2 completado ✅: Separación en archivos

- Repaso de conceptos `.h` vs `.c` (analogía del restaurante: menú vs cocina vs mesero).
- Include guards explicados: `#ifndef/#define/#endif` evitan redefiniciones cuando un `.h` se incluye múltiples veces.
- Funciones privadas: si solo se usan dentro de `gestor.c`, no van al `.h`.
- **Archivos creados por el estudiante:**
  - `Pruebas Varias/Practicas OpenCode/Validacion V1-V5/gestor.h` — include guards + prototipos.
  - `Pruebas Varias/Practicas OpenCode/Validacion V1-V5/gestor.c` — implementaciones.
  - `Pruebas Varias/Practicas OpenCode/Validacion V1-V5/main.c` — menú y control (renombrado de `Validacion V1-V5.c`).
- **Correcciones menores aplicadas:**
  - Prototipos inconsistentes: `buscarCalificacion` → `void`, `ordenarCalificacion`/`cambiarNombre` → `int` (coincidencia entre `.h` y `.c`).
  - `return 0;` eliminado de función `void` (buscarCalificacion).
- **Compilación verificada:** `gcc -Wall -Wextra -g main.c gestor.c -o output/gestor` — cero warnings, cero errores.
- Checkpoint V2 aprobado por interrogatorio: prototipos vs implementación, include guards, funciones privadas, compilación incremental (`.c` → `.o` → binario).
- Limitación conocida: bucle infinito con pipes (EOF) persiste — es el bug de Sesión 5, no relacionado con la separación.

Estado: ✅ Checkpoint V2 aprobado. Próximo: Checkpoint V3 — Arrays y cadenas (Fase 3).

---

## Sesión 7 (continuación) — Checkpoint V3 completado ✅: Arrays y cadenas

- **Funciones implementadas en el gestor:**
  - `buscarCalificacion`: búsqueda por posición (1-indexed → 0-indexed), validación de rango y de `scanf`.
  - `ordenarCalificacion`: bubble sort de menor a mayor, bucle interno optimizado con `-j`.
  - `cambiarNombre`: copia de string con `strcpy()`.
- **Firmas actualizadas:** funciones reciben parámetros necesarios (`calificaciones`, `i`, `nombre`, `tamaño`).
- **Bugs corregidos:**
  - Off-by-one en búsqueda (`<` → `<=`).
  - Algoritmo de ordenamiento: comparación incorrecta (`j+1` → `k+1`), bucle interno sin optimizar.
  - Asignación de string: `nombre = tempNombre` → `strcpy(nombre, tempNombre)`.
  - Validación de `scanf`: `isalpha(scanf(...))` → `scanf(...) == 1`.
- **Compilación verificada:** cero warnings con `gcc -Wall -Wextra`.
- Checkpoint V3 aprobado por interrogatorio: conversión de índices, optimización de bubble sort (`-j`), diferencia entre `=` y `strcpy`.

Estado: ✅ Checkpoint V3 aprobado. Próximo: Checkpoint V4 — Punteros (Fase 4).

---

## Sesión 8 — Checkpoint V4 completado ✅: Punteros

- Mini-repaso de punteros: preguntas sobre `&x`, `*p`, `p++`, aritmética de punteros.
- **Función implementada:** `intercambiarCalificaciones(float *a, float *b)` con desreferenciación y temporal.
- **Bug corregido:** `int temp = *a` → `float temp = *a` (truncado silencioso de decimales).
- **Conceptos validados:** `&` para obtener dirección, `*` para desreferenciar, `*(base+i)` como equivalente de `base[i]`, `p++` salta al siguiente entero, `&` obligatorio al pasar dirección.
- **Interrogatorio superado:** explicación de `&x` (dirección), `*p` (valor), `p++` (siguiente entero), por qué sin `&` se produce segfault, por qué `int temp` trunca decimales.
- **Compilación verificada:** cero warnings con `gcc -Wall -Wextra`.
- Checkpoint V4 aprobado.

Estado: ✅ Checkpoint V4 aprobado. Próximo: Checkpoint V5 — Memoria dinámica (Fase 5).

---

## Sesión 9 — Checkpoint V5 completado ✅: Memoria dinámica

- **Reto:** array dinámico con `realloc` que crece al llenarse, usando `float **` para actualizar el puntero de `main()`.
- **Conceptos clave:** stack vs heap, `malloc`/`calloc`/`realloc`/`free`, memory leaks, dangling pointers.
- **Bugs corregidos:**
  - Dangling pointer: `float *calificaciones` → `float **calificaciones` para que la función actualice el puntero de `main()`.
  - `free(tempCalificaciones)` con valor `NULL` (realloc falló) → eliminado (no tiene sentido liberar `NULL`).
  - `*calificaciones = tempCalificaciones` fuera del bloque `if` → siempre ejecutaba, setting `*calificaciones = NULL` → segfault.
- **Interrogatorio superado:** memory leaks (olvidar `free`), `malloc` vs `calloc` (basura vs ceros), necesidad de `float **` para actualizar el puntero del caller, por qué `ptr = realloc(ptr,...)` es peligroso (si falla se pierde el original).
- **Verificación con valgrind:** "All heap blocks were freed — no leaks are possible", 5 allocs / 5 frees, 0 errores.
- **Validación completada:** los 5 checkpoints (V1–V5) están aprobados. Las Fases 1–5 están marcadas como completadas.

Estado: ✅ Checkpoint V5 aprobado. Validación V1–V5 completada. Próximo: Fase 6 — Structs y estructuras de datos.

---

## Sesión 11 — Repaso completo de Structs + Structs anidados

- **Repaso integral del Módulo 1 de Structs:** conceptos cubiertos en sesión anterior (struct, campos, `.`, typedef, arrays de structs, punteros a structs, `->`).
- **Structs anidados:** concepto explicado y practicado con el reto de eventos (struct `Fecha` anidado dentro de struct `Evento`).
- **Archivos creados:** `Pruebas Varias/Practicas OpenCode/StructsAnidados.c`.
- **Bug nuevo registrado:** return de función sin asignar — `crearEvento(lista[0])` devolvía un struct pero nunca se guardaba en `lista[0]`.
- **Concepto reforzado:** `Estudiante lista[]` como parámetro equivale a `Estudiante *lista` (el array ya es puntero al original).
- **Verificación:** compilación limpia con `gcc -Wall -Wextra`, salida correcta del reto (evento más caro con fecha y nombre).

Estado: ✅ Módulo 1 de Structs completado (todos los conceptos marcados). Módulo 2 (listas enlazadas) omitido por decisión del estudiante. Próximo: Fase 7 — Archivos.

---

## Sesión 10 — Fase 6 inicio: Structs y typedef

- **Conceptos cubiertos:** definición de `struct`, campos, acceso con `.`, `typedef`, arrays de structs, punteros a structs, operador `->`.
- **Archivos creados:** `Pruebas Varias/Practicas OpenCode/Structs.c` (programa de gestión de estudiantes con array de 3 structs, función de mayor promedio).
- **Bugs corregidos:**
  - `scanf("%.1f", (e.promedio))` → `scanf("%f", &e.promedio)` (formato de printf en scanf + falta de `&`).
  - `len = i` dentro del loop → `len` quedaba en 2 en lugar de 3 (off-by-one al contar elementos).
- **Concepto vendido:** `typedef` para eliminar repetición de `struct`, punteros a structs con `->` para modificar datos reales desde funciones.
- **Preferencia registrada:** datos de ejemplo por defecto → Juan, Maria, Messi.
- **Pendiente para próxima sesión:** structs anidados, reto de bonus con punteros a structs, listas enlazadas.

Estado: 🟢 Fase 6 / Módulo 1 en progreso — structs, typedef, arrays, punteros a structs cubiertos. Falta: structs anidados.

## Checkpoint V4 — Punteros ✅ (Sesión 8)

- **Reto:** función `intercambiarCalificaciones` que intercambie dos notas mediante punteros; recorrido del array con `*(calificaciones+j)` en `mostrarCalificacion`.
- **Interrogatorio superado:** `&x` (dirección), `*p` (valor), `p++` (siguiente entero con salto por tipo), `&` obligatorio al pasar dirección (sin él → segfault), tipo del temporal importa (`int` trunca `float` silenciosamente).
- **Verificación práctica:** compilación limpia con `gcc -Wall -Wextra`, intercambio correcto preservando decimales (4.5 → 4.5, no 4.0).

---

# 🎯 REGLAS DEL CURSO

1. Intentar resolver los retos antes de pedir la solución.
2. Los errores son parte del aprendizaje.
3. No avanzar automáticamente si un concepto fundamental no está claro.
4. Los checkpoints sirven para medir comprensión, no memoria.
5. Podemos hacer adelantos sin cambiar el orden oficial.
6. Cada fase debe terminar con al menos un proyecto.
7. El código debe ejecutarse realmente en Linux/GCC.
8. Siempre que sea posible, explicar primero el "por qué" y después la sintaxis.
9. Comparar con JavaScript solo cuando ayude a entender C.
10. Priorizar comprensión de memoria, tipos y comportamiento del lenguaje.

---

# 🏁 META FINAL

Al terminar esta ruta, el objetivo es que puedas:

- Escribir programas C desde cero.
- Compilar y depurar programas.
- Trabajar cómodamente en Linux.
- Comprender memoria y punteros.
- Gestionar memoria dinámicamente.
- Crear estructuras de datos.
- Trabajar con archivos.
- Crear programas modulares.
- Utilizar herramientas como GCC, GDB, Make y Valgrind.
- Crear programas que interactúen con Linux y redes.
- Leer y comprender código C de otros proyectos.
- Tener varios proyectos propios para continuar hacia sistemas, ciberseguridad, embedded, C++ u otras áreas.

---

# 📌 ESTADO ACTUAL

**Etapa:** 🟡 Fase 6 parcial — Structs completados, listas enlazadas/otras estructuras omitidas. → Fase 7 — Archivos (próxima)

**Proyecto activo:** 📦 Gestor de Calificaciones (validado V1–V5) + Structs.c + StructsAnidados.c

**Próximo:** Fase 7 — Archivos (FILE, fopen, fclose, fprintf, fscanf, fgets, modo r/w/a)

**Último concepto dominado:** structs anidados (struct dentro de struct, acceso en cascada). Antes: typedef, arrays de structs, punteros a structs, `->`, memoria dinámica, punteros, arrays, strings, funciones, fundamentos.

**Último ejercicio:** StructsAnidados.c — programa de eventos con struct `Fecha` anidado en `Evento`, función `mayorCosto` con retorno asignado. Antes: Structs.c, Gestor de Calificaciones Etapa 5 ✅.

**Limitación conocida:** EOF en `scanf` produce bucle infinito en pruebas canalizadas — aplazada conscientemente, retomar en Fase 5 (ver 🔁 REPASOS).

**Fases completadas:** Fase 1 ✅ (Sesión 5), Fase 2 ✅ (Sesión 7), Fase 3 ✅ (Sesión 7), Fase 4 ✅ (Sesión 8), Fase 5 ✅ (Sesión 9).
