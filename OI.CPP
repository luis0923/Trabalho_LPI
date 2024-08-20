    #include <iostream>
    #include <string>
    using namespace std;

    class coisas_das_formas
    {
        protected:
        int area, arestas, raio, area_base, area_lateral, altura, opcao, volume;
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
            int a;

            cout << "Quantas arestas possui o poligono? ";
            cin >> a;
            set_arestas(a);

            area = 0 * arestas;

            return area;
        }
        virtual int calcular_volume()
        {
            int a;

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

    class piramide : public coisas_das_formas
    {
        int calcular_area() override
        {
        //Será que eu tenho que calcular as areas da base e lateral?
        }
        int calcular_volume() override
        {
         //Mesma icógnita   
        }
    };


    class paralelepipedo : public coisas_das_formas
    {
        int calcular_area() override
        {
            int aresta1, aresta2, aresta3;
            cout << "Respectivamente, digite os valores da Aresta 1, 2 e 3: \n";

            cin >> aresta1;
            cin >> aresta2;
            cin >> aresta3;

            area = (2 * aresta1 * aresta2) + (2 * aresta1 * aresta3) + (2 * aresta3 * aresta2);


            cout << area << "\n";
            return area;
            
        }
        int calcular_volume() override
        {
            int aresta1, aresta2, aresta3;
            cout << "Respectivamente, digite os valores da Aresta 1, 2 e 3: \n";

            cin >> aresta1;
            cin >> aresta2;
            cin >> aresta3;

            volume = aresta1 * aresta2 * aresta3;

            cout << volume << "\n";
            return volume;      
        }
    };



    

    int main()
    {
        cubo cube;
        esfera bola;
        paralelepipedo para;

        int (coisas_das_formas::*puteiro_area)() = &coisas_das_formas::calcular_area;
        int (coisas_das_formas::*puteiro_volume)() = &coisas_das_formas::calcular_volume;

        (cube.*puteiro_area)();
        (cube.*puteiro_volume)();

        (para.*puteiro_area)();
        (para.*puteiro_volume)();        

        (bola.*puteiro_area)();
        (bola.*puteiro_volume)();

        return 0;
    }