using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Simon_Sandor_1
{
    class Program
    {
        static int osztalyszintuGlobalisValtozo = 10;

        // Fuggveny definialas int tipusu visszateresi ertekkel.
        // A () zarojelekbol is lehet tudni, hogy fuggveny.
        static int osszegzo(int a24, int b24)
        {
            int s24 = a24 + b24;
            return s24; // Ez a visszateresi ertek
        }

        // Fuggveny definialasa visszateresi ertek nelkul a void kulcsszoval.
        // A fuggveny feladata osszeadas, ertekadas, kiiras, de visszateresi ertek nem lesz
        static void osszegzo2(int a25, int b25)
        {
            int s25 = a25 + b25;
            Console.WriteLine("Az 'osszegzo2' fuggveny feladata tobbek kozt kiirni: {0}", s25);
            Console.WriteLine();
        }

        static int osszegzo3(int a26, int b26)
        {
            return (a26 + b26);
        }

        static int kivono(int a27, int b27)
        {
            return (a27 - b27);
        }

        static int szorzo(int a28, int b28)
        {
            return (a28 * b28);
        }

        static double oszto(double a29, double b29)
        {
            return (a29 / b29);
        }

        static void negyzet(int a30)
        {
            Console.WriteLine(a30 * a30);
        }

        static int kob(int a30)
        {
            return (a30 * a30 * a30);
        }

        //Parameteratadas nelkuli () fuggvenydefinicio
        static void osztalyGlobalisValtozoKiirofuggveny()
        {
            Console.WriteLine("Az osztalyszintű globalisvaltozo = {0}", osztalyszintuGlobalisValtozo);
        }


        static void operatorokDemoFuggvenye()
        {
            //OPERATOROK
            //Aritmetikai operatorok
            int a7 = 5, b7 = 3, e;

            e = a7 + b7;
            e = a7 - b7;
            e = a7 * b7;
            e = a7 % b7;
            e = a7 / b7;

            // Ertekado operatorok
            //az operatorok hagyomanyos formajat hasznalva:
            a7 = a7 + b7;
            a7 = a7 - b7;
            a7 = a7 * b7;
            a7 = a7 % b7;
            a7 = a7 / b7;
            // Az elobbi sorokban az "a7" valtozo soronkent uj erteket kap, 
            //ezert az uj sorokban az összeg mas lesz, mint az "e" valtozo erteke feljebb.

            //az operatorok “tomoritett” formajat hasznalva:
            int a8 = 5, b8 = 3;
            a8 += b8;
            a8 -= b8;
            a8 *= b8;
            a8 /= b8;

            // Gyakorlas - aritmetikai operatorok - osszeadas
            string a24, b24;
            double c24;
            Console.WriteLine("Osszeadas gyakorlas");
            Console.WriteLine("Kerem az a24-et! ");
            a24 = Console.ReadLine();
            Console.WriteLine("Kerem az b24-et! ");
            b24 = Console.ReadLine();
            c24 = Convert.ToDouble(a24) + Convert.ToDouble(b24);
            Console.WriteLine("Az osszeguk = {0}", c24);

            // Gyakorlas - aritmetikai operatorok - kivonas
            string a25, b25;
            double c25;
            Console.WriteLine("Osszeadas gyakorlas");
            Console.WriteLine("Kerem az a25-ot! ");
            a25 = Console.ReadLine();
            Console.WriteLine("Kerem az b25-ot! ");
            b25 = Console.ReadLine();
            c25 = Convert.ToDouble(a25) + Convert.ToDouble(b25);
            Console.WriteLine("Az osszeguk = {0}", c25);

            // Gyakorlás - Kör területének kiszámítása
            string r;
            double area;
            Console.WriteLine("Kor teruletenek szamitasa");
            Console.WriteLine("Kerem a sugár nagyságát valós számmal!");
            r = Console.ReadLine();
            area = 3.14 * Convert.ToDouble(r) * Convert.ToDouble(r);
            Console.WriteLine("A kor terulete = {0}", area);


            // Önalló Gyakorlas - haromszog teruletenek kiszamítsa
            string alap, magassag;
            double area2;
            Console.WriteLine("Haromszog teruletenek szamitasa");
            Console.WriteLine("Add meg az alap hosszat valos szammal!");
            alap = Console.ReadLine();
            Console.WriteLine("Add meg a magassag hosszat valos szammal!");
            magassag = Console.ReadLine();
            double alapD = Convert.ToDouble(alap);
            double magassagD = Convert.ToDouble(magassag);
            area2 = 0.5 * alapD * magassagD;
            Console.WriteLine("A haromszog terulete= ", area2);


            // Gyakorlás - négyzet és köb
            double n1, negyzet, kob;
            Console.WriteLine("Negyzetertek es kobertek szamitas.");
            Console.WriteLine("Mely egesz szamnak szamitsam a negyzetet?");
            n1 = Convert.ToDouble(Console.ReadLine());
            //vagy: n1 = double.Parse(Console.ReadLine());
            negyzet = n1 * n1;
            kob = n1 * n1 * n1;
            Console.WriteLine("Negyzete: {0}, Kobe: {1}", negyzet, kob);

            // Gyakorlas - Szamsor osszegenek es atlaganak kiszamitasa
            double m1, m2, m3, osszeg, atlag;
            Console.WriteLine("Haromtagu szamsor osszegenek, atlaganak szamitasa \n");
            Console.WriteLine("Add meg az elso szamot!");
            m1 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("Add meg a masodik szamot!");
            m2 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("Add meg a harmadik szamot!");
            m3 = Convert.ToDouble(Console.ReadLine());
            osszeg = m1 + m2 + m3;
            atlag = osszeg / 3;
            Console.WriteLine("Összegük: {0}, Átlaguk: {1}", osszeg, atlag);

            // Feltételes értékadó operátorok  
            int a22 = 3;
            int b22 = 4;
            int c22;
            c22 = a22 < b22 ? a22 : b22;
            Console.WriteLine("Felteteles ertekado operatorok");
            Console.WriteLine("c22 erteke= {0}", c22);

            //Léptető (inkrementáló) operátorok
            // Ha egy kifejezésben csak egy változó szerepel, akkor mindegy, hogy postfixes, 
            //vagy prefixes alakját használjuk az operátoroknak. (a++ egyenértékű a ++a -val)
            Console.WriteLine("Lepteto operatorok");
            int a6 = 4;
            a6 = a6++;
            a6 = ++a6;
            a6 = a6--;
            a6 = --a6;

            //Inkrementáló operátorok önálló használata egyszerűbben
            int a62 = 10;
            a62++;
            ++a62;
            --a62;
            a62--;

            // Léptető és értékadó operátorok kombinációja

            // Az egyoperandusú operátorok (pl. a léptető: ++) és az értékadás ( = ) operátor együttes használata esetén (pl. x=++a5;)
            // a végrehajtás jobbról balra haladva történik. 
            //Először lesz végrehajtva a léptetés (++), utána az értékadás (=). 
            // Az 'x' értékadása előtt az 'a5' értéke 1-gyel nő 5 lesz, 
            // ezt kapja az x változó, tehát annak értéke is 5 lesz,
            int a5 = 4, x, y;
            x = ++a5;
            Console.WriteLine("Lepteto es ertekado operatorok kombinacioja");
            Console.WriteLine("a5 = {0}", a5);
            Console.WriteLine("x = {0}", x);

            // Az operátorok nem együttes használata esetén (pl. y=a5++;) a végrehajtás balról jobbra fog történni. 
            //Először az értékadás, utána a léptetés, mivel ezek az operátorok külön használva azonos precedencia értékűek. 
            //Eloszor az 'y' az értékadásban megkapja 'a5' pillanatnyi értékét az ötöt, 
            //majd az 'a5' értéke 1-gyel nő, azaz 6 lesz. 
            //Az operátorok mind egész, mind valós operátorokkal működnek.
            y = a5++;
            Console.WriteLine("a5 = {0}", a5);
            Console.WriteLine("y = {0}", y);

            // Összahasonlító (relációs) operátorok  
            int a23 = 5, b23 = 5, c23 = 10;
            bool d23;
            Console.WriteLine("Osszehasonlito (relacios) operatorok");
            d23 = a23 == b23;
            Console.WriteLine(d23);
            Console.WriteLine(a23 == b23);
            //printf("%d = %d erteke %d \n", a23, b23, a23 == b23);
            Console.WriteLine("{0} = {1} erteke= {2}", a23, b23, a23 == b23);
            Console.WriteLine("{0} = {1} erteke= {2}", a23, c23, a23 == c23);
            Console.WriteLine("{0} > {1} erteke= {2}", a23, b23, a23 > b23);
            Console.WriteLine("{0} > {1} erteke= {2}", a23, c23, a23 > c23);
            Console.WriteLine("{0} < {1} erteke= {2}", a23, b23, a23 < b23);
            Console.WriteLine("{0} < {1} erteke= {2}", a23, c23, a23 < c23);
            Console.WriteLine("{0} != {1} erteke= {2}", a23, b23, a23 != b23);
            Console.WriteLine("{0} != {1} erteke= {2}", a23, c23, a23 != c23);
            Console.WriteLine("{0} >= {1} erteke= {2}", a23, b23, a23 >= b23);
            Console.WriteLine("{0} >= {1} erteke= {2}", a23, c23, a23 >= c23);
            Console.WriteLine("{0} <= {1} erteke= {2}", a23, b23, a23 <= b23);
            Console.WriteLine("{0} <= {1} erteke= {2}", a23, c23, a23 <= c23);


            // Logikai operátorok
            Console.WriteLine("Logikai operatorok");
            int a10 = 5, b10 = 5, c10 = 10;
            bool d10;
            d10 = (a10 == b10) && (c10 > b10);
            Console.WriteLine("(a10 == b10) && (c10 > b10) erteke= {0}", d10);
            d10 = (a10 == b10) && (c10 < b10);
            Console.WriteLine("(a10 == b10) && (c10 < b10) erteke= {0}", d10);
            d10 = (a10 == b10) || (c10 < b10);
            Console.WriteLine("(a10 == b10) || (c10 < b10) erteke= {0}", d10);
            d10 = (a10 != b10) || (c10 < b10);
            Console.WriteLine("(a10 != b10) || (c10 < b10) erteke= {0}", d10);
            d10 = !(a10 != b10);
            Console.WriteLine("!(a10 == b10) erteke= {0}", d10);
            d10 = !(a10 == b10);
            Console.WriteLine("!(a10 == b10) erteke= {0}", d10);

        }

        static void elagazasokDemoFuggvenye()
        {
            //Elagazasok
            // IF utasitas
            double a19;
            Console.WriteLine("Kerek egy valos szamot 1 es 10 kozott!");
            a19 = Convert.ToDouble(Console.ReadLine());
            if (a19 > 1 && a19 < 10)
                Console.WriteLine("Jo ertek!");

            // IF - ELSE
            int a12, b12;
            Console.WriteLine("Kerek ket, kulonbozo egesz szamot, hogy eldontsem, melyik a nagyobb!");
            a12 = Convert.ToInt32(Console.ReadLine());
            b12 = Convert.ToInt32(Console.ReadLine());
            if (a12 > b12)
                Console.WriteLine("A nagyobbik ertek: {0}", a12);
            else
                Console.WriteLine("A nagyobbik ertek: {0}", b12);

            // SWITCH - CASE
            int a20;
            Console.WriteLine("Kerek egy egesz szamot 0 es 3 kozott!");
            a20 = Convert.ToInt32(Console.ReadLine());
            switch (a20)
            {
                case 0:
                    Console.WriteLine("Nulla volt ");
                    break;
                case 1: Console.WriteLine("Egy volt"); break;
                case 2: Console.WriteLine("Ketto volt"); break;
                case 3: Console.WriteLine("Harom volt"); break;
                default: Console.WriteLine("Ervenytelen adatbevitel"); break;
            }
            Console.WriteLine("Elhagytam a SWITCH utasitast.");

            string a20s;
            Console.WriteLine("Kerek egy egesz betűt 'a' es 'd' kozott!");
            a20s = Console.ReadLine();
            switch (a20s)
            {
                case "a":
                    {
                        Console.Write(" 'a' ");
                        Console.WriteLine(" volt ");
                        break;
                    }
                case "b":
                    Console.WriteLine(" 'b' ");
                    Console.WriteLine(" volt ");
                    break;
                case "c": Console.WriteLine(" 'c' volt"); break;
                case "d": Console.WriteLine(" 'd' volt"); break;
                default: Console.WriteLine("Ervenytelen adatbevitel"); break;
            }
            Console.WriteLine("Elhagytam a SWITCH utasitast.");

            char a20c;
            Console.WriteLine("Kerek egy egesz betűt 'a' es 'd' kozott!");
            a20c = Convert.ToChar(Console.ReadLine());
            switch (a20c)
            {
                case 'a':
                    {
                        Console.Write(" 'a' ");
                        Console.WriteLine(" volt ");
                        break;
                    }
                case 'b':
                    Console.WriteLine(" 'b' ");
                    Console.WriteLine(" volt ");
                    break;
                case 'c': Console.WriteLine(" 'c' volt"); break;
                case 'd': Console.WriteLine(" 'd' volt"); break;
                default: Console.WriteLine("Ervenytelen adatbevitel"); break;
            }
            Console.WriteLine("Elhagytam a SWITCH utasitast.");

            // IF - ELSE egymasba agyazva
            int a13;
            Console.WriteLine("Kerek egy egesz szamot, hogy eldontsem, pozitiv, negativ vagy nulla!");
            a13 = Convert.ToInt32(Console.ReadLine());
            if (a13 > 0)
                Console.WriteLine("A szam pozitiv.");
            else if (a13 < 0)
                Console.WriteLine("A szam negativ.");
            else
                Console.WriteLine("A szam nulla.");

            int a14;
            Console.WriteLine("Kerek egy egesz szamot, hogy eldontsem, nagyobb-e 5-tel!");
            a14 = Convert.ToInt32(Console.ReadLine());
            if (a14 > 5)
                Console.WriteLine("A szam nagyobb 5-nel.");
            else if (a14 < 5)
                Console.WriteLine("A szam kisebb 5-nel.");
            else
                Console.WriteLine("A szam egyenlo 5-tel.");

            int a15;
            Console.WriteLine("Kerek egy egesz szamot, hogy eldontsem, paros-e vagy paratlan!");
            a15 = Convert.ToInt32(Console.ReadLine());
            if (a15 % 2 == 0)
                Console.WriteLine("A szam paros.");
            else
                Console.WriteLine("A szam paratlan.");

            int a16;
            Console.WriteLine("Kerek egy egesz szamot, hogy eldontsem, oszthato-e (maradek nelkul) 5-tel!");
            a16 = Convert.ToInt32(Console.ReadLine());
            if (a16 % 5 == 0)
                Console.WriteLine("A szam oszthato 5-tel.");
            else
                Console.WriteLine("A szam nem oszthato 5-tel.");

            int a17, b17;
            Console.WriteLine("Kerek ket egesz szamot, hogy eldontsem, melyik a nagyobb, vagy egyenlok-e!");
            a17 = Convert.ToInt32(Console.ReadLine());
            b17 = Convert.ToInt32(Console.ReadLine());
            if (a17 > b17)
                Console.WriteLine("A nagyobbik ertek {0}", a17);
            else if (b17 > a17)
                Console.WriteLine("A nagyobbik ertek {0}", b17);
            else
                Console.WriteLine("A szamok egyenlok.");

            // Példafeladat egymásba ágyazott "if-else" szerkezetekre
            int a21, b21, c21;
            Console.WriteLine("Kerek harom egesz szamot, hogy csokkeno, majd novekvo sorrendbe allitsam oket");
            a21 = Convert.ToInt32(Console.ReadLine());
            b21 = Convert.ToInt32(Console.ReadLine());
            c21 = Convert.ToInt32(Console.ReadLine());
            if ((a21 >= b21) && (a21 >= c21))
            {
                if (b21 >= c21)
                {
                    Console.WriteLine("Csokkeno sorrend : {0} {1} {2}", a21, b21, c21);
                    Console.WriteLine("Novekvo sorrend : {0} {1} {2}", c21, b21, a21);
                }
                else
                {
                    Console.WriteLine("Csokkeno sorrend : {0} {1} {2}", a21, c21, b21);
                    Console.WriteLine("Novekvo sorrend : {0} {1} {2}", b21, c21, a21);
                }
            }
            else if ((b21 >= a21) && (b21 >= c21))
            {
                if (a21 >= c21)
                {
                    Console.WriteLine("Csokkeno sorrend : {0} {1} {2}", b21, a21, c21);
                    Console.WriteLine("Novekvo sorrend : {0} {1} {2}", c21, a21, b21);
                }
                else
                {
                    Console.WriteLine("Csokkeno sorrend : {0} {1} {2}", b21, c21, a21);
                    Console.WriteLine("Novekvo sorrend : {0} {1} {2}", a21, c21, b21);
                }
            }
            else if ((c21 >= a21) && (c21 >= b21))
            {
                if (a21 >= b21)
                {
                    Console.WriteLine("Csokkeno sorrend : {0} {1} {2}", c21, a21, b21);
                    Console.WriteLine("Novekvo sorrend : {0} {1} {2}", b21, a21, c21);
                }
                else
                {
                    Console.WriteLine("Csokkeno sorrend : {0} {1} {2}", c21, b21, a21);
                    Console.WriteLine("Novekvo sorrend : {0} {1} {2}", a21, b21, c21);
                }
            }

            //Az elobbi szamsorrend feladat megoldasa "else-if" szerkezettel
            int a22, b22, c22;
            Console.WriteLine("Kerek harom egesz szamot, hogy csokkeno, majd novekvo sorrendbe allitsam oket");
            a22 = Convert.ToInt32(Console.ReadLine());
            b22 = Convert.ToInt32(Console.ReadLine());
            c22 = Convert.ToInt32(Console.ReadLine());
            if ((a22 >= b22) && (b22 >= c22)) //&& (a22 >= c22)
            {
                Console.WriteLine("Csokkeno sorrend : {0} {1} {2}", a22, b22, c22);
                Console.WriteLine("Novekvo sorrend : {0} {1} {2}", c22, b22, a22);
            }
            else if ((a22 >= c22) && (c22 >= b22)) //&& (a22 >= b22)
            {
                Console.WriteLine("Csokkeno sorrend : {0} {1} {2}", a22, c22, b22);
                Console.WriteLine("Novekvo sorrend : {0} {1} {2}", b22, c22, a22);
            }
            else if ((b22 >= a22) && (a22 >= c22)) //&& (b22 >= c22)
            {
                Console.WriteLine("Csokkeno sorrend : {0} {1} {2}", b22, a22, c22);
                Console.WriteLine("Novekvo sorrend : {0} {1} {2}", c22, a22, b22);
            }
            else if ((b22 >= c22) && (c22 >= a22)) //&& (b22 >= a22)
            {
                Console.WriteLine("Csokkeno sorrend : {0} {1} {2}", b22, c22, a22);
                Console.WriteLine("Novekvo sorrend : {0} {1} {2}", a22, c22, b22);
            }
            else if ((c22 >= a22) && (a22 >= b22)) //&& (c22 >= b22)
            {
                Console.WriteLine("Csokkeno sorrend : {0} {1} {2}", c22, a22, b22);
                Console.WriteLine("Novekvo sorrend : {0} {1} {2}", b22, a22, c22);
            }
            else if ((c22 >= b22) && (b22 >= a22)) //&& (c22 >= a22)
            {
                Console.WriteLine("Csokkeno sorrend : {0} {1} {2}", c22, b22, a22);
                Console.WriteLine("Novekvo sorrend : {0} {1} {2}", a22, b22, c22);
            }
        }

        static void iteraciokDemoFuggvenye()
        {

            //Iterációk
            // WHILE ciklus
            int i = 1, n;
            Console.WriteLine("Az elso hany egesz szamot irjam ki novekvo sorrendben (WHILE)?");
            n = Convert.ToInt32(Console.ReadLine());
            while (i <= n)
            {
                Console.Write("{0}\t", i);
                i++;
            }


            // DO WHILE ciklus
            int i3 = 1, n3;
            Console.Write("\nAz elso hany egesz szamot irjam ki csokkeno sorrnedben (DO-WHILE)?");
            n3 = Convert.ToInt32(Console.ReadLine());
            i3 = n3;
            do
            {
                Console.Write("{0}\t", i3);
                i3--;
            }
            while (i3 >= 1);
            Console.WriteLine("Elhagytam a DO - WHILE ciklust.");

            // For ciklus
            Console.WriteLine("For ciklus DEMO");
            int i4 = 1, n4, osszeg4;
            Console.WriteLine("Az elso hany egesz szam osszeget szamoljam ki (FOR)?");
            n4 = Convert.ToInt32(Console.ReadLine());
            for (i4 = 1, osszeg4 = 0; i4 <= n4; i4++)
            {
                osszeg4 = osszeg4 + i4;
                // osszeg4 += i4;
                Console.Write("{0}\t", i4);
            }
            Console.WriteLine("Az elso {0} egesz szam osszege = {1}", n4, osszeg4);

            int osszeg2 = 0, i2 = 1, n2 = 50;
            Console.WriteLine("Az elso {0} egesz szam osszeget fogom kiszamolni (WHILE).", n2);
            while (i2 <= n2)
            {
                Console.Write("{0}\t", i2);
                osszeg2 = osszeg2 + i2;
                i2++;
            }
            Console.WriteLine("Az elso {0} egesz szam osszege = {1}", n2, osszeg2);

            // WHILE ciklus - gyakorlas
            int i5 = 1, n5, szamlalo = 2;
            Console.WriteLine("Az elso hany paros szamot irjam ki novekvo sorrendben (WHILE)?");
            n5 = Convert.ToInt32(Console.ReadLine());
            while (i5 <= n5)
            {
                Console.Write("{0}\t", szamlalo);
                szamlalo = szamlalo + 2;
                i5++;
            }

            // WHILE ciklus - gyakorlas
            int i6 = 1, n6, szamlalo6 = 1;
            Console.WriteLine("Az elso hany paratlan szamot irjam ki novekvo sorrendben (WHILE)?");
            n6 = Convert.ToInt32(Console.ReadLine());
            while (i6 <= n6)
            {
                Console.Write("{0}\t", szamlalo6);
                szamlalo6 = szamlalo6 + 2;
                i6++;
            }

            // Pelda a Break utasitasra, mely feltetel nelkul befejezi a ciklust
            Console.WriteLine("A Break utasitas DEMO");
            int i9 = 1;
            double n9, osszeg9 = 0;
            Console.WriteLine("Az elso nehany 0 es 10 kozotti valos szam osszeget fogom kiszamolni.");
            for (i9 = 1; i9 <= 10; i9++)
            {
                Console.Write("Add meg az {0}. egesz sorszamot!\t", i9);
                n9 = Convert.ToDouble(Console.ReadLine());

                if (n9 < 0)
                {
                    break;
                }
                osszeg9 = osszeg9 + n9;

            }
            Console.WriteLine("A megadott valos szamok osszege : {0}", osszeg9);

            // Pelda a Continue utasitasra, mely feltetel nelkul kihagyja a ciklus aktualis koret, es a kovetkezo korrel folytatja
            Console.WriteLine("A Continue utasitas DEMO");
            int i10 = 1;
            double n10, osszeg10 = 0;
            Console.WriteLine("Az elso nehany 0 es 10 kozotti valos szam osszeget fogom kiszamolni.");
            for (i10 = 1; i10 <= 10; i10++)
            {
                Console.Write("Add meg az {0}. osszeadando valos szamot!\t", i10);
                n10 = Convert.ToDouble(Console.ReadLine());

                if (n10 < 0)
                {
                    continue;
                }
                osszeg10 = osszeg10 + n10;

            }
            Console.WriteLine("A megadott valos szamok osszege : {0}", osszeg10);

            // FOR ciklusok egymasba agyazva
            int i7, j7, n7, m7;
            Console.WriteLine("Hany sorba irjak csillagokat?");
            n7 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Hany csillagot irjak egy sorba?");
            m7 = Convert.ToInt32(Console.ReadLine());
            for (i7 = 1; i7 <= n7; i7++)
            {
                for (j7 = 1; j7 <= m7; j7++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }

        }

        static void Main(string[] args)
        {
            //Kiírás képernyőre
            Console.Write("Mintaszó");
            Console.WriteLine("Varok egy veletlenszeru (random) billentyu leutesere!");
            //Várakozás a billentyűzeten történő random karakter leütésére
            Console.ReadKey();
            //Üres sor kiíratás
            Console.WriteLine();


            //OPERANDUSOK
            //Operandusok - konstansok
            const int a = 30;

            //Operandusok - valtozok (deklaralasuk és inicializalasuk)
            char betu;
            betu = 'A';
            // Az ertek nem idezojelek, hanem aposztrofok kozott van

            string szo;
            szo = "Alma";

            int d;
            d = 40;

            int szum;
            szum = 500 + 15;

            double f5 = 1.3;
            float f4 = 1.3f;

            double f = 1.6e-3; //1.6*10-3
            float f3 = 1.6e-3f;

            bool logikaiValtozo;
            logikaiValtozo = true;
            logikaiValtozo = false;
            //logikaiValtozo = 1; // igy hibas
            logikaiValtozo = Convert.ToBoolean(1);

            Console.WriteLine(betu);
            Console.WriteLine("a 'betu' valtozo erteke= {0}", betu); //itt {} között sorszámozott a változó

            Console.WriteLine(szo);
            Console.WriteLine("a 'szo' valtozo erteke= {0}", szo);
            Console.WriteLine("a 'szo' valtozo erteke= ", szo); //igy nem irja ki, bar szintaktikai hibat nem jelez

            Console.WriteLine(d);
            Console.WriteLine("a 'd' valtozo erteke= {0}", d); //igy jo
            Console.WriteLine("a 'd' valtozo erteke= ", d); //igy nem irja ki, bar szintaktikai hibat nem jelez
            Console.WriteLine("a 'szum' valtozo erteke= {0}", szum);

            Console.WriteLine(logikaiValtozo);

            //Speciális adattípust jelző kulcsszó: var
            //A var kulcsszo azt jelzi, hogy a Visual Studio-ra bizzuk az operandus 
            //adattípusának meghatározását az operandusnak történő értékadás alapján
            var alma = 1;
            //Az '1' karaktert "System.Int32" adattípusnak fogja minősíteni

            //Adattípus azonosító lekérdezése: GetType() függvény
            //A GetType függvény visszaadja a vonatkozó operandus adattípusát
            var almatipusa = alma.GetType();
            Console.WriteLine(almatipusa);
            //A "System.Int32" adattípust fogja kiírni

            //Implicit (automatikus) adattípus konverzió
            //a programozó beavatkozása nélkül, 
            //általában a szűkebb operandus információvszteség nélkül konvertálódik
            //a szélesebb operandus típusára
            int iss;
            double fs, ms;
            iss = 2;
            fs = 3.3;
            //Az int és a double típusú változók összeadása során hibaüzenet és
            //a tört érték elvesztése nélkül az összeg kiszámítódik, 
            //bár a GetType függvény nem jelzi, hogy a int típus átalakult volna.
            ms = iss + fs;
            Console.WriteLine("Az ms erteke = {0}", ms);
            var iss_tipusa = iss.GetType();
            Console.WriteLine("Az iss tipusa az összeadás után= {0}", iss_tipusa);
            var ms_tipusa = ms.GetType();
            Console.WriteLine("Az ms tipusa az összeadás után= {0}", ms_tipusa);



            // Kifejezett (explicit) adattipus konverzio (adattipus atalakitas)

            // Egész számból valós számmá alakító adattípus konverzio nelkul 
            // az osztas soran a hanyados elveszti a tort reszet,
            // (mivel int (egesz szam) tipusu valtozok kozott tortenik a muvelet,
            // igy csak az egesz resz erteket kapja meg a fiu valtozo
            int a3 = 12;
            int b = 5;
            double fiu;
            fiu = a3 / b;
            Console.WriteLine("A 'fiu' hanyados = {0:0.00}", fiu);

            // Egész számból valós számmá alakító adattípus konverzióval
            // az osztas soran a hanyados NEM VESZTI EL a tort reszet,
            //igy az egesz es a tort resz erteket is megkapja az f2 valtozo
            int a4 = 12, b5 = 5;
            double a4d, b5d, f2;
            float f10;
            a4d = Convert.ToDouble(a4);
            b5d = Convert.ToDouble(b5);
            f2 = a4d / b5d;
            Console.WriteLine("Az 'f2' hanyados = {0:0.00}", f2);
            f10 = (float)a4 / (float)b5; // Ez a 'C' nyevre jellemző konverzió forma
            Console.WriteLine("Az 'f10' hanyados = {0:0.00}", f10);

            // Valós számot karakterlánccá (string) alakító adattípus konverzió 
            double a4d1 = 1.123;
            string a4s = a4d1.ToString();
            Console.WriteLine("Az a4s erteke = {0:0.00}", a4s);
            Console.WriteLine(a4s);

            // Egész számot karakterlánccá (string) alakító adattípus konverzió 
            int a4i = 5;
            string a4is = a4i.ToString();
            Console.WriteLine("Az a4is erteke = {0:0.00}", a4is);
            Console.WriteLine(a4is);


            //Karakterláncból (string) valós számmá alakító adattípus konverzió
            string c5s = "200,12"; // a "200.12" rossz formatum
            double c5d = double.Parse(c5s); //A Parse függvény paramétere csak string típus lehet
            double c5d2 = Convert.ToDouble(c5s);
            Console.WriteLine("A c5d erteke = {0:0.00}", c5d);
            Console.WriteLine(c5d);
            Console.WriteLine("A c5d2 erteke = {0:0.00}", c5d2);
            Console.WriteLine(c5d2);
            //int c5i = int.Parse(c5d); //Ez a sor hibás, mert a paraméter nem string.


            //Karakterláncból (string) egész számmá alakító adattípus konverzió
            string c6s = "300"; // Törtszám megadása esetén futás idejű hibát jelez
            int c6i = int.Parse(c6s); //A Parse függvény paramétere csak string típus lehet
            int c6i2 = Convert.ToInt32(c6s);
            Console.WriteLine("A c6i erteke = {0}", c6i);
            Console.WriteLine(c6i);
            Console.WriteLine("A c6i2 erteke = {0}", c6i2);
            Console.WriteLine(c6i2);

            //Egy adattípus konverzió a 'C' nyelvben használt módszerrel
            int c7i = 12, c8i = 13, c9i = 14, c10i = 15;
            double c7d = Convert.ToDouble(c7i);
            double c8d = (double)c8i; // Ez a 'C' nyevre jellemző konverzió
            Console.WriteLine("A c7d erteke = {0}", c7d);
            Console.WriteLine(c7d);
            Console.WriteLine("A c8d erteke = {0}", c8d);
            Console.WriteLine(c8d);

            //Kiiras es konverzio egy utasitasban egymasba agyazott fuggvenyekkel
            Console.WriteLine(Convert.ToDouble(c9i));
            Console.WriteLine((double)c10i); // Ez a 'C' nyevre jellemző konverzió

            //Beolvasás képernyőről, billentyűzetről
            string a26;
            Console.WriteLine("Kerek egy egesz szamma alakithato karakterlancot!");
            a26 = Console.ReadLine(); //string adattípust olvas be
            Console.WriteLine("a26= {0}", a26);
            Console.WriteLine(a26);
            int a26x = Convert.ToInt32(a26);
            Console.WriteLine("a26x= {0}", a26x);
            Console.WriteLine(a26x);

            //Beolvasas es konverzio egy utasitasban egymasba agyazott fuggvenyekkel
            Console.WriteLine("Kérek két egész számot - speciális!");
            int d2 = Convert.ToInt32(Console.ReadLine());
            int d3 = int.Parse(Console.ReadLine());
            //int d4 = (int) Console.ReadLine(); // Ez szintaktikailag is hibas!
            Console.WriteLine(d2);
            Console.WriteLine(d3);

            // Függvények, eljárások

            //Paraméterátadásos saját definiálású fuggvenyek meghívása
            // Az "osszegzo" sajat fuggveny hivasa parameteratadassal, es
            // a visszateresi ertek elhelyezese az e24 valtozoban
            int c24 = 6, d24 = 7, e24;
            e24 = osszegzo(c24, d24);
            Console.WriteLine("Az 'osszegzo' meghivott fuggveny visszateresi erteke= {0}", e24);

            // Az "osszegzo2" visszateresi ertek nelkuli sajat fuggveny hivasa parameteratadassal
            int c25 = 10, d25 = 20, e25;
            osszegzo2(c25, d25);

            //Visszateresi ertekes sajat es idegen fuggvenyek hivasa
            string b26, a27, b27, a28, b28, a29, b29, a30, a31;
            Console.WriteLine("Kerem a ket egesz szamot az osszegzo3 fuggvenyhez");
            string a26a = Console.ReadLine();
            Console.WriteLine(a26a);
            int a26c = Convert.ToInt32(a26a);
            b26 = Console.ReadLine();
            int b26c = Convert.ToInt32(b26);
            Console.WriteLine("Az osszegzo3 meghivott fuggveny visszateresi erteke= {0}", osszegzo3(a26c, b26c));

            Console.WriteLine("Kerem a ket egesz szamot a kivono fuggvenyhez!");
            a27 = Console.ReadLine();
            b27 = Console.ReadLine();
            int a27c = Convert.ToInt32(a27);
            int b27c = Convert.ToInt32(b27);
            Console.WriteLine("A kivono meghivott fuggveny visszateresi erteke= {0}", kivono(a27c, b27c));

            Console.WriteLine("Kerem a ket egesz szamot a szorzo fuggvenyhez!");
            a28 = Console.ReadLine();
            b28 = Console.ReadLine();
            int a28c = Convert.ToInt32(a28);
            int b28c = Convert.ToInt32(b28);
            Console.WriteLine("A szorzo meghivott fuggveny visszateresi erteke= {0}", szorzo(a28c, b28c));

            Console.WriteLine("Kerem a ket egesz szamot az oszto fuggvenyhez!");
            a29 = Console.ReadLine();
            b29 = Console.ReadLine();
            int a29c = Convert.ToInt32(a29);
            int b29c = Convert.ToInt32(b29);
            Console.WriteLine("Az oszto meghivott fuggveny visszateresi erteke= {0}", oszto(a29c, b29c));

            Console.WriteLine("Kerem az egesz szamot a negyzet fuggvenyhez!");
            a30 = Console.ReadLine();
            int a30c = Convert.ToInt32(a30);
            negyzet(a30c);

            Console.WriteLine("Kerem az egesz szamot a kob fuggvenyhez!");
            a31 = Console.ReadLine();
            int a31c = Convert.ToInt32(a31);
            Console.WriteLine("A kob meghivott fuggveny visszateresi erteke= {0}", kob(a31c));


            //Parameteratadas nelkuli () saját definiálású  fuggvenyek meghívása

            operatorokDemoFuggvenye();

            osztalyGlobalisValtozoKiirofuggveny();

            Console.WriteLine(osztalyszintuGlobalisValtozo); //Ez nem saját függv, és van paraméterátadás

            elagazasokDemoFuggvenye();

            iteraciokDemoFuggvenye();

            Console.WriteLine("Varok egy veletlenszeru billentyu leutesere, hogy befejezzem a programot!");
            Console.ReadKey();
        }
    }
}
