#include "pch.h"

using namespace System;

ref class Algorytm
{
public:double skalar(array<double>^ x, array<double>^ y)
{
    double w = 0.0;
    for (int i = 0; i < x->Length; i++)
    {
        w += x[i] * y[i];
    }
    return w;
}
};

int main(array<System::String^>^ args)
{
    Console::Write(L"Podaj n: ");
    int n = int::Parse(Console::ReadLine());
    array<double>^ x = gcnew array<double>(n);
    array<double>^ y = gcnew array<double>(n);
    for (int i = 0; i < n; i++)
    {
        Console::Write(L"Podaj x[{0}]:", i + 1);
        x[i] = double::Parse(Console::ReadLine());
        Console::Write(L"Podaj y[{0}]:", i + 1);
        y[i] = double::Parse(Console::ReadLine());
    }
    Algorytm^ at = gcnew Algorytm();
    double s = at->skalar(x, y);
    Console::WriteLine(L"Obliczony iloczyn skalarny = {0}", s);
    Console::ReadKey();
    return 0;
}