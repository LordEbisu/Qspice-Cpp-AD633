// Automatically generated C++ file on Mon Jul  7 19:32:44 2025
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD ad633.cpp kernel32.lib

union uData
{
   bool b;
   char c;
   unsigned char uc;
   short s;
   unsigned short us;
   int i;
   unsigned int ui;
   float f;
   double d;
   long long int i64;
   unsigned long long int ui64;
   char *str;
   unsigned char *bytes;
};

// int DllMain() must exist and return 1 for a process to load the .DLL
// See https://docs.microsoft.com/en-us/windows/win32/dlls/dllmain for more information.
int __stdcall DllMain(void *module, unsigned int reason, void *reserved) { return 1; }

// #undef pin names lest they collide with names in any header file(s) you might include.
#undef Y1
#undef Y2
#undef Z
#undef X2
#undef X1
#undef VCC
#undef W



extern "C" __declspec(dllexport) void ad633(void **opaque, double t, union uData *data)
{
   double  Y1  = data[0].d; // input
   double  Y2  = data[1].d; // input
   double  Z   = data[2].d; // input
   double  X2  = data[3].d; // input
   double  X1  = data[4].d; // input
   double  VCC = data[5].d; // input
   double &W   = data[6].d; // output

// Implement module evaluation code here:
   if (VCC > 8 || VCC < 18)
      W = (((X1 - X2)*(Y1-Y2))/10) + Z;
}
