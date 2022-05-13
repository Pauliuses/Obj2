#ifndef FUNKC_H
#define FUNKC_H

#include <vector>
#include <string>

class Zmogus {
    protected:
        std::string vardas, pavarde;
    public:
        inline std::string GetVardas() const { return vardas; }
        inline std::string GetPavarde() const { return pavarde; }
        virtual void SetVardas(std::string v) = 0;
        virtual void SetPavarde(std::string p) = 0;
        Zmogus(std::string vard = " ", std::string pav = " ") : vardas{vard}, pavarde{pav}{}
};

class data: public Zmogus{
    private:
        double galutinis = 0;
        int egz = 0;
        std::vector<int> paz;
    public:
        data(std::string NaujasVardas, std::string NaujaPavarde, double NaujasGalutinis);
        data(std::vector<int> paz = { 0 }, int egz = 0, double galutinis = 0, std::string vard = " ", std::string pav = "") : Zmogus{vard, pav} {}

        data(const data& student) { // copy constructor
            vardas = student.vardas;
            pavarde = student.pavarde;
            galutinis = student.galutinis;
            egz = student.egz;
            paz = student.paz;
        }

        ~data() { paz.clear(); } // destructor

        data operator=(const data& student){ // assign operator
            if(this == &student)
                return *this;
            vardas = student.vardas;
            pavarde = student.pavarde;
            galutinis = student.galutinis;
            egz = student.egz;
            paz = student.paz;
            return *this;
        }

        // setters
        void SetVardas(std::string NaujasVardas) { vardas = NaujasVardas; }
        void SetPavarde(std::string NaujaPavarde) { pavarde = NaujaPavarde; }
        void SetGalutinis(double NaujasGalutinis) { galutinis = NaujasGalutinis; }
        void SetEgz(int NaujasEgz) { egz = NaujasEgz; }
        void SetPaz(int NaujasPaz) { paz.push_back(NaujasPaz);}

        // getters
        inline std::string GetVardas() const { return vardas; }
        inline std::string GetPavarde() const { return pavarde; }
        inline double GetGalutinis() const { return galutinis; }
        inline int GetEgz() const { return egz; }
        inline std::vector<int> GetPaz() const { return paz; }

        void readData(std::vector<data> &list, std::string filename);

        friend bool compareNames (const data& A, const data& B) {return A.vardas < B.pavarde;}
        friend bool compareSurnames (const data& A, const data& B) {return A.pavarde < B.pavarde;}
        friend bool compareFinals (const data& A, const data& B) {return A.galutinis < B.galutinis;}


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