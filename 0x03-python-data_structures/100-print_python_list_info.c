#include <Python.h>
#include <stdio.h>
/**
 * print_python_list_info - Prints some basic info about Python lists
 * @p: PyObject pointer
 * return: None
 */
void print_python_list_info(PyObject *p)
{
	int size, allocated, i;

	size = Py_SIZE(p);
	allocated = ((PyListObject *) p)->allocated;
	printf("[*] Size of the Python List = %d\n", size);
	printf("[*] Allocated = %d\n", allocated);

	for (i = 0; i < size; i++)
	{
		printf("", i, Py_TYPE(PyList_GetItem(p, i))->tp_name);
	}
}
