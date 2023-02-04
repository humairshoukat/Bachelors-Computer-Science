using System.Collections;

namespace Assemblies
{
    public class Class1
    {
        public int Add(int a, int b)
        {
            return a + b;
        }
        public int Sub(int a, int b)
        {
            return a - b;
        }

        public int Mul(int a, int b)
        {
            return a * b;
        }

        public int Div(int a, int b)
        {
            return a / b;
        }

        public int Fun(List<int> arr)
        {
            int min=0;
            int max=0;
            int avg=0;
            for(int i = 0; i < arr.Count; i++)
            {
                avg=avg+arr[i];
                for(int j=0; j<arr.Count; j++)
                {
                    if(arr[i] > arr[j])
                    {
                        max = arr[i];   
                    }
                    if(arr[i] < arr[j])
                    {
                        min = arr[i];
                    }
                }
            }
            avg=avg/arr.Count;
            return min+max+avg;
        }
    }
}