#inclue <iostream>
using namespace std;

class bidangDatar{
    private:
        int x,y;
    public:
    bidangDatar(){
        x=0;
        y=0;
    }
    virtual void input(){}
    virtual float Luas (int a){return 0;}
    virtual float Keliling(int a){ return 0;}
    virtual void cekUkuran(){ return 0; }
    void setX(int a){ 
        this->x=a; 
    } 
    
    int getX(){
        return x; }

        
    }; 
         
  class Lingkaran:public bidangDatar{ 
        void input() {
        int r;
        cout << "Masukkan jari-jari lingkaran: ";
        cin >> r;
        setX(r);
	}
    float Luas(int r) {
        return 3.14 * r * r;
    }
    
    float Keliling(int r) {
        return 2 * 3.14 * r;
    }
};

class Persegipanjang: public bidangDatar{
    public:
    void input() {
		
    }
};
int main(){
    bidangDatar* bd;
    
    cout << "Lingkaran dibuat" << endl;
    bd = new Lingkaran();
    bd->input();
    int r = bd->getX();
    cout << "Luas Lingkaran = " << bd->Luas(r) << endl;
    cout << "Keliling Lingkaran = " << bd->Keliling(r) << endl;
    delete bd;

    cout << "Persegipanjang dibuat" << endl;
    bd = new Persegipanjang();
    bd->input();
    int sisi = bd->getX();
    cout << "Luas Persegipanjang = " << bd->Luas(sisi) << endl;
    cout << "Keliling Persegipanjang = " << bd->Keliling(sisi) << endl;
    delete bd;

    return 0;
}
