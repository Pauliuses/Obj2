#ifndef FUNKC_H
#define FUNKC_H

#include <vector>
#include <string>

class data {
    private:
        std::string vardas, pavarde;
        double galutinis = 0;
        int egz = 0;
        std::vector<int> paz;
    public:
        data() : galutinis(0), vardas(""), pavarde(""), egz(0) { }

        void SetVardas(std::string NaujasVardas) { vardas = NaujasVardas; }
        void SetPavarde(std::string NaujaPavarde) { pavarde = NaujaPavarde; }
        void SetGalutinis(double NaujasGalutinis) { galutinis = NaujasGalutinis; }
        void SetEgz(int NaujasEgz) { egz = NaujasEgz; }
        void SetPaz(int NaujasPaz) { paz.push_back(NaujasPaz);}

        inline std::string GetVardas() const { return vardas; }
        inline std::string GetPavarde() const { return pavarde; }
        inline double GetGalutinis() const { return galutinis; }
        inline int GetEgz() const { return egz; }
        inline std::vector<int> GetPaz() const { return paz; }
};

bool IsNumber(std::string);
bool isNumber(std::string);
int InputNumber(std::string);
void ReadFromFile(std::vector<data>&, std::string);
void CreateFile(int, int);
bool InputBool(std::string);
double AverageGrade(std::vector<int>);
double MedianGrade(std::vector<int>);
void Input(data&);
void FinalResult(std::vector<data>&, bool);
void Output(std::vector<data>&, std::string, int);
void Groups(std::vector<data>&, std::vector<data>&);
void SortByResult(std::vector<data>&, int);
bool SortByName(data, data);
bool SortBySurname(data, data);

#endif