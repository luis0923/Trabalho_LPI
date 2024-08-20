    #include <iostream>
    #include <string>
    using namespace std;

    class coisas_das_formas
    {
        protected:
        int arestas, raio, area_base, area_lateral, altura, opcao;
        const float pi = 3.14;
        

        public:

        void set_arestas(int a) {arestas = a;}
        void set_raio(int r) {raio = r;}
        void set_area_base(int ab) {area_base =  ab;}
        void set_area_lateral(int lateral) {area_lateral = lateral;}
        void set_altura(int h) {altura = h;}

        int get_arestas() {return arestas;}
        int get_raio() {return raio;}
        int get_base() {return area_base;}
        int get_lateral() {return area_lateral;}
        int get_altura() {return altura;}

        virtual int calcular_area()
        {
            int a, area;

            cout << "Quantas arestas possui o poligono? ";
            cin >> a;
            set_arestas(a);

            area = 0 * arestas;

            return area;
        }
        virtual int calcular_volume()
        {
            int a, volume;

            cout << "Quantas arestas possui o poligono? ";
            cin >> a;
            set_arestas(a);

            volume = 0;

            return volume;
        }

    };

    class cubo : public coisas_das_formas
    {
        public:


        int calcular_area() override
        {
            int a, area;

            cout << "Qual o tamanho das arestas do cubo? ";
            cin >> a;
            set_arestas(a);

            area = 6 * (arestas * arestas);


            cout << area << "\n";
            return area;
        }

        int calcular_volume() override
        {
            int a, volume;

            cout << "Qual o tamanho das arestas? ";
            cin >> a;
            set_arestas(a);

            volume = arestas * arestas;

            cout << volume << "\n";
            return volume;
        }
    

    };

    class esfera : public coisas_das_formas
    {
        public:
        int calcular_area() override
        {
            int r, area;

            cout << "Qual o Raio da esfera? ";
            cin >> r;
            set_raio(r);

            area = 4 * pi * raio;

            cout << area << "\n";
            return area;
        }
        int calcular_volume() override
        {
            int r, volume;

            cout << "Qual o Raio da esfera? ";
            cin >> r;
            set_raio(r);

            volume = (4.0 / 3.0) * raio * pi;
            cout << volume << "\n";
            return volume;

        }
    };



    int main()
    {
        cubo cube;
        esfera bola;

        cube.calcular_area();
        cube.calcular_volume();
        bola.calcular_area();
        bola.calcular_volume();

        return 0;
    }