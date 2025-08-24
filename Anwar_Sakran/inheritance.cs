using System;

 namespace inheritance
{
    //شرح مفهوم الوراثه بشكل عام 

//عرفنا كلاس اضفناله خاصيه واحده وسلوك واحد
    class thermos_flask
       {
        //الخاصيه
      string tea = "Red tea";
        
        //السلوك
        public void pour()
        {
            Console.WriteLine(tea);

        }
       
       }
    //عرفنا كلاس ثاني ولم نعرف فيه اي خصائص او سلوكيات

    class cup : thermos_flask//هاذه عمليه الوراثه بعد رمز النقطتين نكتب اسم الكلاس الذي سيورث منه هاذا الكلاس 
    {

        
       //  بعد عمليه الوراثه يصير لداهاذا الكلاس كل شيئ في الكلاس الذي ورث منه الا الخاص فقط  
      
    }
    class Program
    {
        static void Main(string[] args)
        {
            //تعريف كائن من الكلاس المورث
            thermos_flask op = new thermos_flask();
            //استدعاالسلوك الموجود فيه
            op.pour();

            //تعريف كائن من الكلاس الوارث
            cup cU = new cup();
            //استدعال السلوك الذي ورثه 
            cU.pour();

        }
      
    }
}
