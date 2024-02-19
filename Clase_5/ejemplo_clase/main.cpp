#include<iostream>

using namespace std;

int main(){
    
   int a, b, c;
   a = 10;
   b = 3;

   c = (a%b*a/3)/(b%a-b/a);
   /* c = (1*10/3) / (3%10-3/10) */
   /* c = (10/3) / (3%10-3/10) */
   /* c = 3 / (3%10-3/10) */
   /* c = 3 / (3%10-3/10) */
   /* c = 3 / (3-3/10) */
   /* c = 3 / (3-0) */
   /* c = 3 / 3 */
   /* c = 1 */
   cout<<"C: "<<c<<endl;

   bool x = true;
   bool y = false;

   bool z = !(x^y||x&&x)&&y;
   // z = 0 (false) *
   // () -> ^ -> && -> || -> ! -> &&
   // z = 1 (true)
   cout<<"Z: "<<z<<endl;

   int m, n;

   cin>>m; //capturar un valor para m a traves del teclado
   n = m;

   if(m >= 9){
       m += 9 - m; // 9 - 120 = -111 -> m = m + (-111) = 9
   }

   n /= m; // n = n / m -> 120 / 9 -> 13.3333 -> 13
   cout<<"N: "<<n<<endl; */

   float aa, bb;
   cin>>aa;

   bb = aa/2; //bb = 3.5 / 2 = 1.75

   if(bb >= 1){
       aa += bb; // aa = aa + bb -> aa = 3.5 + 1.75 -> 5.25
   }

   if(aa > bb){ // (5.25 > 1.75)
       bb += aa; // bb = bb + aa = 7.0
   }

   cout<<"aa + bb = "<<aa+bb<<endl; // 5.25 + 7.0 = 12.25

   int var1 = 2;
   float var2 = 3;
   bool b1 = var1 > var2, b2 = var2 > var1, b3 = var2/var1 > var1/var2;
   // b1 = (int)2 > (float)3 = (float)2 > (float)3 = 2 > 3 = false 
   // b2 = (float)3 > (float)2 = true
   // b3 = (float)3/(float)2 > (float)2/(float)3 = 1 > 0 = true
   cout<<"b1: "<<b1<<endl;
   cout<<"b2: "<<b2<<endl;
   cout<<"b3: "<<b3<<endl;

   if(b3){
       if(b2){
           var1++; // var1 = 3
       }
       else{
           var1 += 2;
       }
   }
   else{
       if(b1){
           var1 += 3;
       }
       else{
           var1 += 4;
       }
   }
   cout<<"var1: "<<var1<<endl;
   return 0;
}
