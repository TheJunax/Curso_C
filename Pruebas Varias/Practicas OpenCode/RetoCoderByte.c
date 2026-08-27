#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char nombre[50];
    int cantidad;
    float precio;
} Producto;

int inicializarInventario(Producto **inventario, int *cantidadProductos, int *capacidad) {
    *cantidadProductos =0;
    *capacidad = 3;
    *inventario = (Producto*)malloc((*capacidad) * sizeof(Producto));
    if(*inventario == NULL){
      printf("Error al asignar memoria");
      return 1;
    }
    return 0;
    /*Esta función debe:
* Inicializar cantidadProductos en 0.
* Inicializar capacidad en 3.
* Reservar memoria dinámica para guardar inicialmente 3 productos.
* Usar malloc.
* Verificar si la memoria fue asignada correctamente.*/
}

int agregarProducto(Producto **inventario, int *cantidadProductos, int *capacidad, int id, char nombre[], int cantidad, float precio) {
    int nuevaCapacidad = (*capacidad) * 2;
    Producto *tempInventario = NULL;
    if(*cantidadProductos == *capacidad){
      tempInventario = (Producto*)realloc(*inventario, nuevaCapacidad* sizeof(Producto));
      if(tempInventario == NULL){
        printf("Error al Agrandar memoria");
        return 1;
      }
      *inventario = tempInventario;
      *capacidad = nuevaCapacidad;
    }
    ((*inventario)+(*cantidadProductos))->id = id;
    strcpy(((*inventario)+(*cantidadProductos))->nombre,nombre);
    ((*inventario)+(*cantidadProductos))->cantidad = cantidad;
    ((*inventario)+(*cantidadProductos))->precio = precio; 

    (*cantidadProductos)++;
    return 0;   
    /*Esta función debe:
* Agregar un nuevo producto al final del inventario.
* Si el inventario está lleno, debe duplicar su capacidad usando realloc.
* Usar un puntero temporal al hacer realloc para no perder la memoria original si falla.
* Actualizar correctamente cantidadProductos.*/
}

int buscarProductoPorId(Producto *inventario, int cantidadProductos, int id) {
    for(int i=0; i<cantidadProductos;i++){
      if(inventario[i].id == (id)){
        return i;
      }
    }
    return -1;
    /*Esta función debe:
* Buscar un producto por su id.
* Retornar el índice donde se encuentra el producto.
* Retornar -1 si no existe.*/
}

void actualizarCantidad(Producto *inventario, int cantidadProductos, int id, int nuevaCantidad) {
    int encontro =1;
    for(int i=0; i<cantidadProductos;i++){
      if(inventario[i].id == (id)){
        inventario[i].cantidad = nuevaCantidad;
        encontro = 0;
        break;
        }
    }
    if(encontro == 1){
        printf("Producto con ID %d no encontrado\n", id);
    }
    
    /*Esta función debe:
* Buscar un producto por su id.
* Si existe, actualizar su cantidad.
* Si no existe, imprimir: Producto con ID X no encontrado. */
}

float calcularValorTotal(Producto *inventario, int cantidadProductos) {
    float sumaTotal =0;
    for(int i=0; i<cantidadProductos;i++){
      sumaTotal += (inventario[i].cantidad) * (inventario[i].precio);
    }
    return sumaTotal;
    /*Esta función debe:
* Calcular el valor total del inventario.
* El valor de cada producto es: cantidad * precio
* Retornar la suma total. */
}

void imprimirInventario(Producto *inventario, int cantidadProductos) {
    for(int i=0; i<cantidadProductos;i++){
      printf("ID: %d | Nombre: %s | Cantidad: %d | Precio: %.2f\n", inventario[i].id, inventario[i].nombre,inventario[i].cantidad, inventario[i].precio);
    }
    /*Esta función debe imprimir todos los productos con el siguiente formato:
    ID: 1 | Nombre: Teclado | Cantidad: 10 | Precio: 25.50 */
}

void eliminarProducto(Producto **inventario, int *cantidadProductos,int id){
    for(int i=0; i<*cantidadProductos;i++){
        /*if(i == (*cantidadProductos)){
                (*cantidadProductos)--;
                break;
            }*/
        if((*inventario)[i].id == id){
            for(int j=i;j< (*cantidadProductos)-1; j++){
                /*if(j == (*cantidadProductos)-1){
                    break;
                }*/
                (*(*inventario+j)).id = (*(*inventario+(j+1))).id;
                strcpy((*(*inventario+j)).nombre ,(*(*inventario+(j+1))).nombre);
                (*(*inventario+j)).cantidad = (*(*inventario+(j+1))).cantidad;
                (*(*inventario+j)).precio = (*(*inventario+(j+1))).precio;
            }
            (*cantidadProductos)--;
            break;
        }
    }
}

void liberarInventario(Producto **inventario, int *cantidadProductos, int *capacidad) {
    free(*inventario);
    *inventario = NULL;
    *cantidadProductos = 0;
    *capacidad = 0;
    /*Esta función debe:
* Liberar la memoria dinámica con free.
* Colocar el puntero inventario en NULL.
* Reiniciar cantidadProductos y capacidad a 0. */
}

int main() {
    Producto *inventario = NULL;
    int cantidadProductos = 0;
    int capacidad = 0; // Se inicializa en 3 dentro de inicializarInventario()

    inicializarInventario(&inventario, &cantidadProductos, &capacidad);

    agregarProducto(&inventario, &cantidadProductos, &capacidad, 1, "Teclado", 10, 25.50);
    agregarProducto(&inventario, &cantidadProductos, &capacidad, 2, "Mouse", 15, 12.75);
    agregarProducto(&inventario, &cantidadProductos, &capacidad, 3, "Monitor", 5, 150.00);

    printf("Inventario inicial:\n");
    imprimirInventario(inventario, cantidadProductos);

    agregarProducto(&inventario, &cantidadProductos, &capacidad, 4, "Audifonos", 8, 40.00);

    printf("\nInventario despues de agregar un producto:\n");
    imprimirInventario(inventario, cantidadProductos);

    actualizarCantidad(inventario, cantidadProductos, 2, 20);

    printf("\nInventario despues de actualizar cantidad:\n");
    imprimirInventario(inventario, cantidadProductos);

    int indice = buscarProductoPorId(inventario, cantidadProductos, 3);

    if (indice != -1) {
        printf("\nProducto encontrado:\n");
        printf("ID: %d | Nombre: %s | Cantidad: %d | Precio: %.2f\n",
               inventario[indice].id,
               inventario[indice].nombre,
               inventario[indice].cantidad,
               inventario[indice].precio);
    } else {
        printf("\nProducto no encontrado.\n");
    }

    float total = calcularValorTotal(inventario, cantidadProductos);
    printf("\nValor total del inventario: %.2f\n", total);

    int id =4;
    eliminarProducto(&inventario, &cantidadProductos,id);
    printf("\nInventario despues de eliminar el ID %d:\n", id);
    imprimirInventario(inventario, cantidadProductos);

    total = calcularValorTotal(inventario, cantidadProductos);
    printf("\nValor total del inventario: %.2f\n", total);

    liberarInventario(&inventario, &cantidadProductos, &capacidad);

    return 0;
}