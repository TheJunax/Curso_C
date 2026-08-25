---
name: progreso-ruta-c
description: Protocolo para leer y actualizar el progreso del curso de C en el archivo RUTA_C.md. Use when starting or ending a C tutoring session, completing modules, exercises, checkpoints or projects, logging sessions, recording learned errors, or updating course status.
---

# Progreso del curso C — RUTA_C.md

Este proyecto usa `RUTA_C.md` (raíz del proyecto) como única fuente de verdad del curso de C.

## Leer el estado (inicio de sesión)

1. **📊 Estado general**: tabla de fases con estados.
2. **📌 ESTADO ACTUAL** (final del archivo): fase activa, módulo, próximo tema, próximo reto.
3. Checkboxes pendientes del módulo activo.
4. **🔁 REPASOS**: conceptos que necesitan refuerzo antes de avanzar.

## Leyenda de estados

- ⬜ Pendiente
- 🟢 En progreso
- ✅ Completado
- 🔁 Repasar
- 🧭 Adelanto

## Reglas de marcado

- Marcar ✅ un concepto/ejercicio SOLO cuando exista comprensión práctica demostrada (código funcionando + checkpoint aprobado).
- Si el checkpoint falla → módulo 🔁 y registrar en REPASOS.
- Los adelantos (🧭) NO marcan módulos como completados; solo se registran en la sección **🧭 ADELANTOS**.
- Un módulo se cierra cuando: conceptos ✅ + ejercicios ✅ + checkpoint aprobado.
- Una fase se cierra con su proyecto integrador completado y checkpoint final aprobado.

## Actualizar al cierre de sesión o hito

1. **Checkboxes** del módulo correspondiente (`[ ]` → `[x]`).
2. **Tabla 📊 Estado general** y línea de progreso orientativo.
3. Nueva entrada en **📈 REGISTRO DE SESIONES**, formato:

   ```markdown
   ## Sesión N — Título corto

   - Temas vistos.
   - Archivos creados/modificados (`archivo.c`).
   - Bugs corregidos o aprendidos.
   - Checkpoints realizados.

   Estado: 🟢 Fase X / Módulo Y [estado detallado].
   ```

4. Errores valiosos en **🐛 ERRORES IMPORTANTES APRENDIDOS**, formato:

   ```markdown
   ### Concepto afectado

   Error:

   ```c
   // código que falla
   ```

   Aprendizaje:

   - Por qué falla y qué regla general se aprende.

   Solución:

   ```c
   // código corregido
   ```
   ```

5. Checkpoints realizados en **📝 CHECKPOINTS REALIZADOS**.
6. **📌 ESTADO ACTUAL**: fase, módulo, próximo tema, próximo reto, último concepto dominado, último ejercicio, fases completadas.

## Numeración de sesiones

El número de sesión es el consecutivo de la última entrada en REGISTRO DE SESIONES + 1.
