main () {
   int intensity;
   int brightness = 0;
   printf ("Enter the value of light intensity \n");
   scanf ("%d" , &intensity);
   if (intensity > 0 && intensity < 100) {
       printf ("Increase brightness to 100");
       brightness = brightness + 100;
   }
   else if (intensity >= 100 && intensity <= 500) {
       printf ("Increase brightness to 50");
       brightness = brightness + 50;
   }
   else if (intensity > 500) {
       printf ("Increase brightness to 10");
       brightness = brightness + 10;
   }
   else {
       printf ("Invalid input");
   }
}
