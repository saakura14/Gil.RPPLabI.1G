#ifndef PRESTAMOSASIGNADOSACLIENTES_H_INCLUDED
#define PRESTAMOSASIGNADOSACLIENTES_H_INCLUDED


typedef struct{
	int idCliente;
	int idPrestamo;
	float importe;
	int cuotas;
	int isEmpty;
	int saldado;
}Prestamo;

/**
* \brief Muestra el cliente con mas prestamos filtrado por saldado o no, segun elija el usuario
 * \param aCliente para usar el array entero
 * \param  Limite del array de clientes
 *\param aPrestamo para usar el array entero
 *\param lenPrestamos para limite de prestamos
 *\param saldados para pedirle al usuario si quiere ver los saldados o los no saldados
 * \return Retorna 0 (EXITO) y -1 (ERROR)
 *
 */
int mostrarClienteConMasPrestamosFiltradoPorSaldado(eCliente* aCliente, int lenClientes, Prestamo* aPrestamo, int lenPrestamos, int saldados);
/**
* \brief Muestra el cliente con mas prestamos
 * \param aCliente para usar el array entero
 * \param  Limite del array de clientes
 *\param aPrestamo para usar el array entero
 *\param lenPrestamos para limite de prestamos
 * \return Retorna 0 (EXITO) y -1 (ERROR)
 */
int mostrarClienteConMasPrestamos(eCliente* aCliente, int lenClientes, Prestamo* aPrestamo, int lenPrestamos);
/**
* \brief DMuestra la cantidad de prestamos que tiene un cliente
 * \param aPrestamo para usar el array entero
 * \param  Limite del array de prestamos
 *\param ID del cliente para asignarlo al prestamo
 *\param saldados para pedirle al usuario si quiere ver los saldados o los no saldados
 * \return Retorna el contador de prestamos
 */
int cantidadDePrestamosParaCliente(Prestamo* aPrestamo, int lenPrestamos, int idCliente,int saldados);

/**
* \brief Muestra la cantidad de prestamos mayores a $1000
 * \param aPrestamo para usar el array entero
 * \param  Limite del array de prestamos
 *\param importe ingresado por el usuario
 * \return Retorna 0 (EXITO) y -1 (ERROR)
 */
int mostrarCantidadPrestamosMayoresAImporteSeleccionado(Prestamo* aPrestamo, int len, int importe);
/**
* \briefMuestra la cantidad de prestamos que son de 12 cuotas y estan saldados.
 * \param aPrestamo para usar el array entero
 * \param  Limite del array de prestamos
 * \return Retorna 0 (EXITO) y -1 (ERROR)
 */
int mostrarPrestamosDeDoceCuotasSaldados(Prestamo* aPrestamo, int len);
/**
* \brief Muestra la cantidad de prestamos que tienen la cantidad de cuotas ingresados por el usuario
 * \param aPrestamo para usar el array entero
 * \param  Limite del array de prestamos
 *\param cuotas, para que el usuario pueda ingresar la cantidad de cuotas por parametro.
 * \return Retorna 0 (EXITO) y -1 (ERROR)
 */
int mostrarPrestamosActivosFiltradoPorCantDeCuotas(Prestamo* aPrestamo, int len, int cuotas);

void cargarPrestamoDatos (Prestamo auxiliar[],Prestamo prestamos[], int tamPrestamo, int idPrestamo);
int cantidadDePrestamosOtorgados(Prestamo* aPrestamo, int len);

#endif // PRESTAMOSASIGNADOSACLIENTES_H_INCLUDED
