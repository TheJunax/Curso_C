# AGENTS.md — Instrucciones del proyecto

## Git: Auto-commit al cerrar sesión

Al final de cada sesión de tutoría de C, **siempre** ejecutar estos pasos en orden:

1. **Actualizar `RUTA_C.md`** con el progreso de la sesión (checkpoints, sesión, estado actual)
2. **Hacer commit** de todos los cambios:
   ```bash
   cd "/home/thejunax/Documentos/Pruebas C"
   git add .
   git commit -m "Sesión N: [resumen breve del avance]"
   ```
3. **Hacer push** a GitHub:
   ```bash
   git push
   ```

### Reglas del commit
- El mensaje debe incluir el número de sesión y un resumen corto
- Ejemplo: `"Sesión 8: Checkpoint V4 — punteros validados"`
- Si hay varios hitos en una sesión, incluirlos todos: `"Sesión 7: V2 + V3 validados"`

### Configuración de git
- Usuario: `thejunax`
- Email: `juanpimu24@gmail.com`
- Repo: `https://github.com/TheJunax/Curso_C.git`
- Rama: `main`
