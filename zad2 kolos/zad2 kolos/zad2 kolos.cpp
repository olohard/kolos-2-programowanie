#include "pch.h"

using namespace System;
using namespace System::IO;
using namespace System::Text;

ref class Algorytm {
    public: void sortowanie_b¹belkowe(array<String^>^ arr) {
        for (int i = 0; i < arr->Length-1; i++)
        {
            for (int j = 0; j < arr->Length - i - 1; j++)
            {
                if (Convert::ToDouble(arr[j]) > Convert::ToDouble(arr[j + 1]))
                {
                    String^ placeholder = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = placeholder;
                }
            }
        }
    }
};

int main(array<System::String ^> ^args)
{
    StreamReader^ plik = nullptr;

    try {
        plik = gcnew StreamReader(L"dane.txt");
    }

    catch(Exception^ e) {
        Console::WriteLine(L"B³¹d: {0}", e->Message);
        Console::ReadKey();
        return -1;
    }

    String^ s = plik->ReadLine();
    array<String^>^ ds = s->Trim()->Split();

    Algorytm^ algorytm = gcnew Algorytm();

    Console::WriteLine("Przed sortowaniem");

    for each (String^ number in ds) {
        Console::WriteLine(number);
    }

    Console::WriteLine("Po sortowaniu");
    
    algorytm->sortowanie_b¹belkowe(ds);

    for each (String ^ number in ds) {
        Console::WriteLine(number);
    }


    return 0;
}
