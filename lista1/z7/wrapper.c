// gcc -I/usr/include/python3.10 wrapper.c -o wrapper -lpython3.10

#include <Python.h>

typedef struct {
    int x;
    int y;
} DiofantEquationSolution;



int factorial_loop(int n);
int gcd_loop(int a, int b);
DiofantEquationSolution diofant_loop(int a, int b, int c);
int factorial_recursion(int n);
int gcd_recursion(int a, int b);
DiofantEquationSolution diofant_recursion(int a, int b, int c);


int factorial_loop(int n)
{
    PyObject *pModule, *pFunc, *pArgs, *pValue;

    
    Py_Initialize();

    PyObject *sys = PyImport_ImportModule("sys");
    PyObject *path = PyObject_GetAttrString(sys, "path");
    PyList_Append(path, PyUnicode_FromString("/home/valeriia/studia/JPP/lista1/z7"));
    Py_DECREF(sys);
    Py_DECREF(path);

    
    pModule = PyImport_ImportModule("library");

    
    if (!pModule)
    {
        PyErr_Print();
        return -1;
    }

 
    pFunc = PyObject_GetAttrString(pModule, "factorial_loop");

    
    if (!pFunc || !PyCallable_Check(pFunc))
    {
        if (PyErr_Occurred())
            PyErr_Print();
        return -1;
    }

    
    pArgs = PyTuple_New(1);
    PyTuple_SetItem(pArgs, 0, PyLong_FromLong(n));

    
    pValue = PyObject_CallObject(pFunc, pArgs);

    
    int result = (int)PyLong_AsLong(pValue);

    
    Py_DECREF(pModule);
    Py_DECREF(pFunc);
    Py_DECREF(pArgs);
    Py_DECREF(pValue);

    
    Py_Finalize();

    return result;
}


int gcd_loop(int a, int b)
{
    PyObject *pModule, *pFunc, *pArgs, *pValue;

    
    Py_Initialize();

    PyObject *sys = PyImport_ImportModule("sys");
    PyObject *path = PyObject_GetAttrString(sys, "path");
    PyList_Append(path, PyUnicode_FromString("/home/valeriia/studia/JPP/lista1/z7"));
    Py_DECREF(sys);
    Py_DECREF(path);

    
    pModule = PyImport_ImportModule("library");

    
    if (!pModule)
    {
        PyErr_Print();
        return -1;
    }

    
    pFunc = PyObject_GetAttrString(pModule, "gcd_loop");

    
    if (!pFunc || !PyCallable_Check(pFunc))
    {
        if (PyErr_Occurred())
            PyErr_Print();
        return -1;
    }

    
    pArgs = PyTuple_New(2);
    PyTuple_SetItem(pArgs, 0, PyLong_FromLong(a));
    PyTuple_SetItem(pArgs, 1, PyLong_FromLong(b));

    
    pValue = PyObject_CallObject(pFunc, pArgs);

    
    int result = (int)PyLong_AsLong(pValue);

    
    Py_DECREF(pModule);
    Py_DECREF(pFunc);
    Py_DECREF(pArgs);
    Py_DECREF(pValue);

    
    Py_Finalize();

    return result;
}


DiofantEquationSolution diofant_loop(int a, int b, int c) {
    PyObject *pModule, *pFunc, *pArgs, *pValue;

    
    Py_Initialize();

    
    PyObject *sys = PyImport_ImportModule("sys");
    PyObject *path = PyObject_GetAttrString(sys, "path");
    PyList_Append(path, PyUnicode_FromString("/home/valeriia/studia/JPP/lista1/z7"));
    Py_DECREF(sys);
    Py_DECREF(path);

    
    pModule = PyImport_ImportModule("library");

    
    if (!pModule) {
        PyErr_Print();
        return (DiofantEquationSolution) {0, 0};
    }

    
    pFunc = PyObject_GetAttrString(pModule, "diofant_loop");

    
    if (!pFunc || !PyCallable_Check(pFunc)) {
        if (PyErr_Occurred()) PyErr_Print();
        return (DiofantEquationSolution) {0, 0};
    }

    
    pArgs = PyTuple_New(3);
    PyTuple_SetItem(pArgs, 0, PyLong_FromLong(a));
    PyTuple_SetItem(pArgs, 1, PyLong_FromLong(b));
    PyTuple_SetItem(pArgs, 2, PyLong_FromLong(c));

    
    pValue = PyObject_CallObject(pFunc, pArgs);

    
    if (!pValue) {
        PyErr_Print();
        return (DiofantEquationSolution) {0, 0};
    }

    
    int x = (int)PyLong_AsLong(PyObject_GetAttrString(pValue, "x"));
    int y = (int)PyLong_AsLong(PyObject_GetAttrString(pValue, "y"));

    
    DiofantEquationSolution solution = {x, y};

    
    Py_DECREF(pModule);
    Py_DECREF(pFunc);
    Py_DECREF(pArgs);
    Py_DECREF(pValue);

    
    Py_Finalize();

    
    return solution;
}


int factorial_recursion(int n)
{
    PyObject *pModule, *pFunc, *pArgs, *pValue;

    
    Py_Initialize();

    PyObject *sys = PyImport_ImportModule("sys");
    PyObject *path = PyObject_GetAttrString(sys, "path");
    PyList_Append(path, PyUnicode_FromString("/home/valeriia/studia/JPP/lista1/z7"));
    Py_DECREF(sys);
    Py_DECREF(path);

    
    pModule = PyImport_ImportModule("library");

    
    if (!pModule)
    {
        PyErr_Print();
        return -1;
    }

    
    pFunc = PyObject_GetAttrString(pModule, "factorial_recursion");

    
    if (!pFunc || !PyCallable_Check(pFunc))
    {
        if (PyErr_Occurred())
            PyErr_Print();
        return -1;
    }

    
    pArgs = PyTuple_New(1);
    PyTuple_SetItem(pArgs, 0, PyLong_FromLong(n));

    
    pValue = PyObject_CallObject(pFunc, pArgs);

    
    int result = (int)PyLong_AsLong(pValue);

    
    Py_DECREF(pModule);
    Py_DECREF(pFunc);
    Py_DECREF(pArgs);
    Py_DECREF(pValue);

    
    Py_Finalize();

    return result;
}


int gcd_recursion(int a, int b)
{
    PyObject *pModule, *pFunc, *pArgs, *pValue;

    
    Py_Initialize();

    PyObject *sys = PyImport_ImportModule("sys");
    PyObject *path = PyObject_GetAttrString(sys, "path");
    PyList_Append(path, PyUnicode_FromString("/home/valeriia/studia/JPP/lista1/z7"));
    Py_DECREF(sys);
    Py_DECREF(path);

    
    pModule = PyImport_ImportModule("library");

    
    if (!pModule)
    {
        PyErr_Print();
        return -1;
    }

   
    pFunc = PyObject_GetAttrString(pModule, "gcd_recursion");

    
    if (!pFunc || !PyCallable_Check(pFunc))
    {
        if (PyErr_Occurred())
            PyErr_Print();
        return -1;
    }

    
    pArgs = PyTuple_New(2);
    PyTuple_SetItem(pArgs, 0, PyLong_FromLong(a));
    PyTuple_SetItem(pArgs, 1, PyLong_FromLong(b));

    
    pValue = PyObject_CallObject(pFunc, pArgs);

    
    int result = (int)PyLong_AsLong(pValue);

    
    Py_DECREF(pModule);
    Py_DECREF(pFunc);
    Py_DECREF(pArgs);
    Py_DECREF(pValue);

    
    Py_Finalize();

    return result;
}


DiofantEquationSolution diofant_recursion(int a, int b, int c) {
    PyObject *pModule, *pFunc, *pArgs, *pValue;

    
    Py_Initialize();

   
    PyObject *sys = PyImport_ImportModule("sys");
    PyObject *path = PyObject_GetAttrString(sys, "path");
    PyList_Append(path, PyUnicode_FromString("/home/valeriia/studia/JPP/lista1/z7"));
    Py_DECREF(sys);
    Py_DECREF(path);

   
    pModule = PyImport_ImportModule("library");

    
    if (!pModule) {
        PyErr_Print();
        return (DiofantEquationSolution) {0, 0};
    }

    
    pFunc = PyObject_GetAttrString(pModule, "diofant_recursion");

    
    if (!pFunc || !PyCallable_Check(pFunc)) {
        if (PyErr_Occurred()) PyErr_Print();
        return (DiofantEquationSolution) {0, 0};
    }

    
    pArgs = PyTuple_New(3);
    PyTuple_SetItem(pArgs, 0, PyLong_FromLong(a));
    PyTuple_SetItem(pArgs, 1, PyLong_FromLong(b));
    PyTuple_SetItem(pArgs, 2, PyLong_FromLong(c));

   
    pValue = PyObject_CallObject(pFunc, pArgs);

    
    if (!pValue) {
        PyErr_Print();
        return (DiofantEquationSolution) {0, 0};
    }

  
    int x = (int)PyLong_AsLong(PyObject_GetAttrString(pValue, "x"));
    int y = (int)PyLong_AsLong(PyObject_GetAttrString(pValue, "y"));

    
    DiofantEquationSolution solution = {x, y};

    
    Py_DECREF(pModule);
    Py_DECREF(pFunc);
    Py_DECREF(pArgs);
    Py_DECREF(pValue);

    
    Py_Finalize();

   
    return solution;
}

int main() {
    
    int a = 12, b = 18, c = 30;
    
    
    DiofantEquationSolution solution = diofant_loop(a, b, c);
    
    
    printf("Factorial (loop) of 5 is %d\n", factorial_loop(5));
    printf("GCD (loop) of %d and %d is %d\n", a, b, gcd_loop(a, b));
    printf("Diofant solution (loop) for %dx + %dy = %d: x = %d, y = %d\n",
           a, b, c, solution.x, solution.y);
    printf("Factorial (recursion) of 5 is %d\n", factorial_recursion(5));
    printf("GCD (recursion) of %d and %d is %d\n", a, b, gcd_recursion(a, b));
    printf("Diofant solution (recursion) for %dx + %dy = %d: x = %d, y = %d\n",
           a, b, c, solution.x, solution.y);

    return 0;
}

