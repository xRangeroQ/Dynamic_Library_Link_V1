// Include Guard
#ifndef DLL
#define DLL

// API
#ifdef BUILD
#define API __declspec(dllexport)
#else
#define API __declspec(dllimport)
#endif

// extern "C"
extern "C" {

    // SUM
    API int sum(int a, int b);
    API int sub(int a, int b);

}

// End If
#endif