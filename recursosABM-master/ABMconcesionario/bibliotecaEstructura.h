#ifndef BIBLIOTECAESTRUCTURA_H_INCLUDED
#define BIBLIOTECAESTRUCTURA_H_INCLUDED


typedef struct
{
    int id;
    char nombre[51];
    char apellido[51];
    int tarjeta;
    int estado;
} ePropietario;

/** \brief To indicate that all position in the array are empty,
 * this function put the flag (isEmpty) in TRUE in all
 * position of the array
 * \param list Employee* Pointer to array of employees
 * \param len int Array length
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int inicializarPropietarios(ePropietario[], int len);

/** \brief add in a existing list of employees the values received as parameters
 * in the first empty position
 * \param list employee*
 * \param len int
 * \param id int
 * \param name[] char
 * \param lastName[] char
 * \param salary float
 * \param sector int
 * \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok
 **/
int altaPropietarios(ePropietario[], int len, int id, char nombre[],char apellido[], int tarjeta);

/** \brief print the content of employees array
 *
 * \param list Employee*
 * \param length int
 * \return int
 *
 */
int mostrarListadoPropietarios(ePropietario[], int len);

/** \brief find an Employee by Id en returns the index position in array.
 *
 * \param list Employee*
 * \param len int
 * \param id int
 * \return Return employee index position or (-1) if [Invalid length or NULL
pointer received or employee not found]
 *
 */
int buscarPropietarioPorID(ePropietario[], int len,int idPropietario);


/** \brief Remove a Employee by Id (put isEmpty Flag in 1)
 *
 * \param list Employee*
 * \param len int
 * \param id int
 * \return int Return (-1) if Error [Invalid length or NULL pointer or if can't find a employee] - (0) if Ok
 *
 */
int bajaPropietario(ePropietario[], int len, int id);

/** \brief modify a existing list of employees the values received as parameters in the first empty position
 * \param list employee*
 * \param len int
 * \param id int
 * \param name[] char
 * \param lastName[] char
 * \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok
 **/
int modificacionPropietario(ePropietario[], int len, int id, char nombre[],char apellido[], int tarjeta, int option);

/** \brief Test
 *
 * \param list[] Employee
 * \param len int
 * \return int
 *
 */
int harcodePropietario(ePropietario[], int len);

/** \brief Sort the elements in the array of employees, the argument order
indicate UP or DOWN order
 *
 * \param list Employee*
 * \param len int
 * \param order int [1] indicate UP - [0] indicate DOWN
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int ordenarPropietarios(ePropietario[], int len, int order);



/** \brief
 *
 * \param list[] Employee
 * \param len int
 * \return int
 *
 */
int buscarLibrePropietarios(ePropietario[], int len);




#endif // BIBLIOTECAESTRUCTURA_H_INCLUDED
