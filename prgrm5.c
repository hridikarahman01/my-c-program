main()
{
    float km_diff,meter,feet,inch,cm;
    printf("Enter difference between 2 cities (km):\t");
    scanf("%f",&km_diff);

    meter=km_diff*1000;
    feet=meter*3.28;
    inch=feet*12;
    cm=meter*100;

    printf("distance in meter is: %.2f\n",meter);
    printf("distance in feet is: %.2f\n",feet);
    printf("distance in inch is: %.2f\n",inch);
    printf("distance in cm is: %.2f\n",cm);

}
