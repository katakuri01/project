
//عبدالرحمن_الجراد
using System;
class Student
{
    public string Name;
    public int ID;
    public int Age;
    public int Level;
}
class Teacher
{
    public string Name;
    public int ID;
    public string Maj;
}
class Subject
{
    public string Name;
    public string teaher_m;
}
class College
{
    public Student[] Students = new Student[100];
    public int K = 0;
    public Teacher[] Teachers = new Teacher[20];
    public int Q = 0;
    public Subject[] Subjects = new Subject[20];
    public int J = 0;
    public void studendt_function()
    {
        int ss = 1;
        while (ss == 1)
        {
            Student op = new Student();
            Console.WriteLine("________________________________");
            Console.Write("| Enter the name:");
            op.Name = Console.ReadLine();
            Console.WriteLine("________________________________");
            Console.Write("Enter the ID:");
            op.ID = int.Parse(Console.ReadLine());
            Console.WriteLine("|_______________________________|");
            Console.Write("| Enter the age:");
            op.Age = int.Parse(Console.ReadLine());
            Console.WriteLine("|_______________________________|");
            Console.WriteLine("| Enter the level:");
            Console.WriteLine("________________________________|");
            op.Level = int.Parse(Console.ReadLine());
            Students[K] = op;
            K++;
            Console.Clear();
            Console.WriteLine("_______________________________");
            Console.WriteLine("|Add another? yes=1 | no=2     |");
            Console.WriteLine("|______________________________|");
            ss = int.Parse(Console.ReadLine());
            Console.Clear();
        }

    }
    public void Teacher_function()
    {
        int ss = 1;
        while (ss == 1)
        {
           
            Teacher op = new Teacher();
            Console.WriteLine("|______________________|");
            Console.Write("| Enter the name:");
            op.Name = Console.ReadLine();
            Console.WriteLine("_______________________");
            Console.Write("Enter the ID:");
            op.ID = int.Parse(Console.ReadLine());
            Console.WriteLine("|______________________|");
            Console.Write("| Enter the Maj:");
            op.Maj = Console.ReadLine();
            Console.Write("|______________________|");
            Teachers[Q] = op;
            Q++;
            Console.Clear();
            Console.WriteLine("_______________________________");
            Console.WriteLine("|Add another? yes=1 | no=2     |");
            Console.WriteLine("|______________________________|");
            ss = int.Parse(Console.ReadLine());
            Console.Clear();
        }
    }

    public void Subject_function()
    {
        int ss = 1;
        while (ss == 1)
        {

            Subject op = new Subject();
            Console.WriteLine("________________________");
            Console.Write("| Enter the name:");
            op.Name = Console.ReadLine();
            Console.WriteLine("|_______________________|");
            Console.Write("| Enter the teacher:");
            op.teaher_m = Console.ReadLine();
            Subjects[J] = op;
            J++;
            Console.Clear();
            Console.WriteLine("_______________________________");
            Console.WriteLine("|Add another? yes=1 | no=2     |");
            Console.WriteLine("|______________________________|");
            ss = int.Parse(Console.ReadLine());
            Console.Clear();
        }
    }
    public void print(out int BB)
    {
        Console.Clear();
        Console.WriteLine("__________[STUDINTS]_________");
        for (int i = 0; i <= K - 1; i++)
        {
            Console.WriteLine("| name: {0} |ID: {1} |age: {2} |level: {3} |", Students[i].Name, Students[i].ID, Students[i].Age, Students[i].Level);
        }
        Console.WriteLine("__________[TEACHERS]_________");
        for (int i = 0; i <= Q - 1; i++)
        {
            Console.WriteLine("| name: {0} |ID: {1} |Maj: {2} |", Teachers[i].Name, Teachers[i].ID, Teachers[i].Maj);
        }
        Console.WriteLine("__________[SUBJECTS]_________");
        for (int i = 0; i <= J - 1; i++)
        {
           
            Console.WriteLine("| name: {0} |course instructor: {1} |", Subjects[i].Name, Subjects[i].teaher_m);
        }
        Console.WriteLine("_____________________________________________");
        Console.WriteLine("| To go back:1                               |");
        Console.WriteLine("|____________________________________________|");
        Console.WriteLine("| To go main, enter any oter number |");
        Console.WriteLine("|____________________________________________|");
        BB = int.Parse(Console.ReadLine());
        Console.Clear();
    }
}

class CS : College { }
class IT : College { }
class CSEC : College { }

class Program
{
    static void Main()
    {
        go:
        Console.WriteLine("_____________________________ ");
        Console.WriteLine("| Compuuter Science:1        |");
        Console.WriteLine("|____________________________|");
        Console.WriteLine("| information Technology:2   |");
        Console.WriteLine("|____________________________|");
        Console.WriteLine("| Cybersecurity:3            |");
        Console.WriteLine("|____________________________|");
        Console.WriteLine("| To exit the applocation:4  |");
        Console.WriteLine("|____________________________|");
        Console.Write(":");
        string g = Console.ReadLine();
        Console.Clear();
        switch (g)
        {
            case "1":
                CS op = new CS();
                while (true)
                {
                    Console.WriteLine("_____________________________________");
                    Console.WriteLine("| To add anew studint:1              |");
                    Console.WriteLine("|____________________________________|");
                    Console.WriteLine("| To add anew teacher:2              |");
                    Console.WriteLine("|____________________________________|");
                    Console.WriteLine("| To ass anew subject:3              |");
                    Console.WriteLine("|____________________________________|");
                    Console.WriteLine("| To display department information:4|");
                    Console.WriteLine("|____________________________________|");
                    Console.WriteLine("| To returnto the nain menu:5        |");
                    Console.WriteLine("|____________________________________|");
                    Console.WriteLine("| To exit the applocation:6          |");
                    Console.WriteLine("|____________________________________|");
                    Console.Write(":");
                    string G = Console.ReadLine();
                    Console.Clear();
                    if (G == "1")
                    {
                        op.studendt_function();
                        continue;

                    }
                    else if (G == "2")
                    {
                        op.Teacher_function();
                        continue;

                    }
                    else if (G == "3")
                    {
                        op.Subject_function();
                        continue;
                    }
                    else if (G == "4")
                    {
                        int m;
                        op.print(out m);
                        if (m == 1)
                        {
                            continue; 
                        }
                        else
                        {
                            goto go;
                        }
                         
                       
                    }
                    else if (G == "5")
                    {
                        goto go;
                    }
                    else if (G == "6")
                    {
                        break;
                    }
                    else
                    {
                        Console.WriteLine("___________________________________________________");
                        Console.WriteLine("|Error: invalid aption selected; please try again |");
                        Console.WriteLine("___________________________________________________");
                        continue;
                    }

                }
                break;
            case "2":
                IT op1 = new IT();
                while (true)
                {
                    Console.WriteLine("_____________________________________");
                    Console.WriteLine("| To add anew studint:1              |");
                    Console.WriteLine("|____________________________________|");
                    Console.WriteLine("| To add anew teacher:2              |");
                    Console.WriteLine("|____________________________________|");
                    Console.WriteLine("| To ass anew subject:3              |");
                    Console.WriteLine("|____________________________________|");
                    Console.WriteLine("| To display department information:4|");
                    Console.WriteLine("|____________________________________|");
                    Console.WriteLine("| To returnto the nain menu:5        |");
                    Console.WriteLine("|____________________________________|");
                    Console.WriteLine("| To exit the applocation:6          |");
                    Console.WriteLine("|____________________________________|");
                    Console.Write(":");
                    string G = Console.ReadLine();
                    Console.Clear();
                    if (G == "1")
                    {
                        op1.studendt_function();
                        continue;

                    }
                    else if (G == "2")
                    {
                        op1.Teacher_function();
                        continue;

                    }
                    else if (G == "3")
                    {
                        op1.Subject_function();
                        continue;
                    }
                    else if (G == "4")
                    {
                        int m;
                        op1.print(out m);
                        if (m == 1)
                        {
                            continue;
                        }
                        else
                        {
                            goto go;
                        }

                      
                    }
                    else if (G == "5")
                    {
                        goto go;
                    }
                    else if (G == "6")
                    {
                        break;
                    }
                    else
                    {
                        Console.WriteLine("___________________________________________________");
                        Console.WriteLine("|Error: invalid aption selected; please try again |");
                        Console.WriteLine("___________________________________________________");
                        continue;
                    }

                }

                break;
            case "3":
                CSEC op2 = new CSEC();
                while (true)
                {
                    Console.WriteLine("_____________________________________");
                    Console.WriteLine("| To add anew studint:1              |");
                    Console.WriteLine("|____________________________________|");
                    Console.WriteLine("| To add anew teacher:2              |");
                    Console.WriteLine("|____________________________________|");
                    Console.WriteLine("| To ass anew subject:3              |");
                    Console.WriteLine("|____________________________________|");
                    Console.WriteLine("| To display department information:4|");
                    Console.WriteLine("|____________________________________|");
                    Console.WriteLine("| To returnto the nain menu:5        |");
                    Console.WriteLine("|____________________________________|");
                    Console.WriteLine("| To exit the applocation:6          |");
                    Console.WriteLine("|____________________________________|");
                    Console.Write(":");
                    string G = Console.ReadLine();
                    Console.Clear();
                    if (G == "1")
                    {
                        op2.studendt_function();
                        continue;

                    }
                    else if (G == "2")
                    {
                        op2.Teacher_function();
                        continue;

                    }
                    else if (G == "3")
                    {
                        op2.Subject_function();
                        continue;
                    }
                    else if (G == "4")
                    {
                        int m;
                        op2.print(out m);
                        if (m == 1)
                        {
                            continue;
                        }
                        else
                        {
                            goto go;
                        }

                        
                    }
                    else if (G == "5")
                    {
                        goto go;
                    }
                    else if (G == "6")
                    {
                        break;
                    }
                    else
                    {
                        Console.WriteLine("___________________________________________________");
                        Console.WriteLine("|Error: invalid aption selected; please try again |");
                        Console.WriteLine("___________________________________________________");
                        continue;
                    }

                }

                break;

            case "4":

                break;

            default:
                Console.WriteLine("___________________________________________________");
                Console.WriteLine("|Error: invalid aption selected; please try again |");
                Console.WriteLine("___________________________________________________");
                goto go;
               
        }
    }
}
