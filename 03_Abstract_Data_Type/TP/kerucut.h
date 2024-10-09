#ifndef KERUCUT_H
#define KERUCUT_H

class Kerucut {
private:
    double jariJari;  // jari-jari alas kerucut
    double tinggi;    // tinggi kerucut

public:
    Kerucut();                            
    Kerucut(double r, double t);         


    void setJariJari(double r);
    void setTinggi(double t);

    double getJariJari() const;
    double getTinggi() const;

    // Method
    double hitungLuasAlas() const;        // menghitung luas alas (lingkaran)
    double hitungKelilingAlas() const;    // menghitung keliling alas
    double hitungLuasSelimut() const;     // menghitung luas selimut
    double hitungLuasPermukaan() const;   // menghitung luas permukaan total
    double hitungVolume() const;          // menghitung volume
        double hitungGarisPelukis() const;    // menghitung garis pelukis (sisi miring)

};
#endif