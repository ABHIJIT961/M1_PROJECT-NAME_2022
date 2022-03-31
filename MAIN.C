#include <stdio.h>

int main() 
{
  char class;
  int temptype;
  int currencytype;
  int masstype;
  int valueforF; // value for Fahreinheit;
  int valueforC; // value for Celsius;
  int INRtoUSD; // User input for INRtoUSD;
  int INRtoCAD; // User input for INRtoCAD;
  int INRtoPKR; // User input for INRtoPKR;
  int insertounce; // User input for Ounce;
  int userinputGram; // User input for Gram;
  int fahrenheitToCelcius; // variable that stores the converted F->C;
  int celciusToFahrenheit; // variable that stores the converted C->F;
  float USDtoEURO ; // varaible that stores the converted USD->EURO;
  float USDtoJPY; // Keeps the converted USD->JPY;
  float USDtoRMB; // Keeps the converted USD->RMB;
  float ounceToPounds; // Keeps the converted Ounce->Pounds;
  float gramsToPounds; // Keeps the converted Grams->Pounds;
  
  printf("Unit Conversion! \n");
  printf("list for conversion to choose from: \n");
  printf("Temperature(T),Currency(C),Mass(M) \n");
  printf("enter the letter you want to convert.\n");
  scanf("%c",&class);
  
  if(class == 'T'){
      printf("Temperature Conversion! \n");
      printf("list for conversion to choose from: \n");
      printf("Enter 1 for F->C. \n");
      printf("Enter 2 for C->F. \n");
      scanf("%d",&temptype);
      if(temptype == 1){
          printf("enter data for Fahrenheit: \n");
          scanf("%d",&valueforF);
          fahrenheitToCelcius =  ((valueforF-32) * (5.0/9.0));
          printf("Celcius: %d",fahrenheitToCelcius);
      }
      else if(temptype == 2){
        printf("enter data for Celcius: \n");
        scanf("%d",&valueforC);
        celciusToFahrenheit = ((9.0/5.0)*valueforC + 32);
        printf("Fahrenheit: %d",celciusToFahrenheit);
      }
      else
        printf("enter the correct type. \n");
  }
  
  else if(class == 'C') {
      printf("Welcome to Currency Converter! \n");
      printf("Enter 1 for INRtoUSD. \n");
      printf("Enter 2 for INRtoCAD. \n");
      printf("Enter 3 for INRtoPKR. \n");
      scanf("%d",&currencytype);
      if(currencytype == 4){
          printf("Please enter the INR amount: \n");
          scanf("%d",&INRtoUSD);
          INRtoUSD = INRtoUSD * 0.87;
          printf("Euro: %.2f",INRtoUSD); // %.2f = rounds the float to only 2 decimal places;
      }
      else if(currencytype == 5){
          printf("Please enter the INR amount: \n");
          scanf("%d",&INRtoCAD);
          INRtoCAD = INRtoCAD * 111.09;
          printf("JPY: %.2f",INRtoCAD);
      }
      else if(currencytype == 6) {
        printf("Please enter the INR amount: \n");
        scanf("%d",&INRtoPKR);
        INRtoPKR = INRtoPKR * 6.82;
        printf("RMB: %.2f",INRtoPKR);
      }
      else
        printf("Please enter correct type. \n");
   }
  else if(class == 'M'){
      printf("Mass Converter! \n");
      printf("Enter 1 for ounces to pounds. \n");
      printf("Enter 2 for gram to pounds. \n");
      scanf("%d",&masstype);
      if(masstype == 2){
          printf("enter the ounce amount: \n");
          scanf("%d",&insertounce);
          ounceToPounds = insertounce * 0.0625;
          printf("Pounds: %.2f",ounceToPounds);
      }
      else if(masstype == 3) {
          printf("enter the gram amount: \n");
          scanf("%d",&userinputGram);
          gramsToPounds = userinputGram * 0.00220462;
          printf("Pounds: %.2f",gramsToPounds);
      }
      else 
        printf("enter the correct details. \n");
   }
  return 0;
}
