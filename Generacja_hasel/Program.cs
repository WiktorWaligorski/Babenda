namespace Generacja_hasel
{
    internal class Program
    {
        static string GeneratePassword()
        {
            string Capitals = "ABCDEFGHIJKLMNOPRSTQUVWXYZ";
            string Lowercase = Capitals.ToLower();
            string Digits = "0123456789";
            string Diacretic = "ąęćśółżźń";
            Diacretic += Diacretic.ToUpper();
            string Symbols = "!@#$%^&*()";
            string[] ArrayOfStrings = {Capitals, Lowercase, Digits, Diacretic, Symbols};
            int[,] UseCounter = { { 0, 3 }, { 0, 3 }, { 0, 2 }, { 0, 2 }, { 0, 2 } };

            string[] password = new string[12];
            Random random = new Random();

            for (int i = 0; i < password.Length; i++)
            {
                bool NextSlot = false;
                while (!NextSlot)
                {
                    int PickString = random.Next(0, ArrayOfStrings.Length);
                    if (UseCounter[PickString, 0] < UseCounter[PickString, 1])
                    {
                        string UsedString = ArrayOfStrings[PickString];
                        int RollChar = random.Next(0, UsedString.Length);
                        password[i] = UsedString[RollChar].ToString();
                        NextSlot = true;
                        Console.WriteLine(password[i]);
                    }
                }

            }

            return password.ToString();
        }
        static void Main(string[] args)
        {
            Console.WriteLine(GeneratePassword());
        }
    }
}
