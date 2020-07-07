#ifndef REPUESTOS_H_INCLUDED
#define REPUESTOS_H_INCLUDED






/**
* \brief Muestra el cliente con mas prestamos
 * \param aCliente para usar el array entero
 * \param  Limite del array de clientes
 *\param aPrestamo para usar el array entero
 *\param lenPrestamos para limite de prestamos
 * \return Retorna 0 (EXITO) y -1 (ERROR)
 */
int mostrarClienteConMasPrestamos(Cliente* aCliente, int lenClientes, Prestamo* aPrestamo, int lenPrestamos);
#endif // REPUESTOS_H_INCLUDED
