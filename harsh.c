#include  <stdio.h>

int main()
{
     char category;
  int tempChoice,currencyChoice,massChoice,userinputF,userinputC,userinputUSDtoEuro,userinputUSDtoJPY,userinputRStoUSD,userinputUSDtoRS; 
  int userinputOunce,userinputGram,fahrenheitToCelcius,celciusToFahrenheit; 
  float USDtoEURO,USDtoJPY,USDtoRS,RStoUSD,ounceToPounds,userinputkg,gramsToPounds,gramsTokg,kgTogram; 
  
  printf("_______WELCOME TO UNIT CONVERTOR!_______ \n");
  printf("Here is a list of conversation to choose from: \n");
  printf("TEMPERATURE(T),CURRENCY(C),MASS(M) \n");
  printf("Please enter the letter you want to convert:\n");
  scanf("%c",&category);
  
  if(category == 'T'){
      printf("Welcome to Temperature Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius: \n");
      printf("Enter 2 for Celsius to Fahrenheit: \n");
      scanf("%d",&tempChoice);
      if(tempChoice == 1){
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&userinputF);
          fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
          printf("Celcius: %d",fahrenheitToCelcius);
      }
      else if(tempChoice == 2){
        printf("Please enter the Celcius degree: \n");
        scanf("%d",&userinputC);
        celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
        printf("Fahrenheit: %d",celciusToFahrenheit);
      }
      else
        printf("Please enter the correct choice. \n");
  }
  
  else if(category == 'C') {
      printf("Welcome to Currency Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for RS to USD: \n");
      printf("Enter 2 for USD to RS: \n");
      printf("Enter 3 for USD to JPY: \n");
      printf("Enter 4 for USD to Euro: \n");
      
      scanf("%d",&currencyChoice);
      if(currencyChoice == 4){
          printf("Please enter the USD amount: \n");
          scanf("%d",&userinputUSDtoEuro);
          USDtoEURO = userinputUSDtoEuro * 0.87;
          printf("Euro: %.2f",USDtoEURO);                                                                                                                                                                                                                               
      }
      else if(currencyChoice == 3){
          printf("Please enter the USD amount: \n");
          scanf("%d",&userinputUSDtoJPY);
          USDtoJPY = userinputUSDtoJPY * 111.09;
          printf("JPY: %.2f",USDtoJPY);
      }
      else if(currencyChoice == 2){
          printf("Please enter the USD amount: \n");
          scanf("%d",&userinputUSDtoRS);
          USDtoRS = userinputUSDtoRS * 76.49;
          printf("RS: %.2f",USDtoRS);
      }

        else if(currencyChoice == 1){
        printf("Please enter the RS amount: \n");
        scanf("%d",&userinputRStoUSD);
        RStoUSD = userinputRStoUSD/76.49;
        printf("RS: %.2f",RStoUSD);
     }  
        else printf("Please enter correct choice. \n");
   }
  else if(category == 'M'){
      printf("Welcome to Mass Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for ounces to pounds: \n");
      printf("Enter 2 for gram to pounds: \n");
      printf("Enter 3 for gram to kg: \n");
      printf("Enter 4 for kg to gram: \n");
      scanf("%d",&massChoice);
      if(massChoice == 1){
          printf("Please enter the ounce amount: \n");
          scanf("%d",&userinputOunce);
          ounceToPounds = userinputOunce * 0.0625;
          printf("Pounds: %.2f",ounceToPounds);
      }
      else if(massChoice == 2) {
          printf("Please enter the gram amount: \n");
          scanf("%d",&userinputGram);
          gramsToPounds = userinputGram * 0.00220462;
          printf("Pounds: %.2f",gramsToPounds);
      }
      else if(massChoice == 3) {
          printf("Please enter the gram amount: \n");
          scanf("%d",&userinputGram);
          gramsTokg = userinputGram/1000;
          printf("Kg: %.2f",gramsTokg);
      }
      else if(massChoice == 4) {
          printf("Please enter the kg amount: \n");
          scanf("%f",&userinputkg);
          gramsTokg = userinputkg *1000.00;
          printf("Grams: %.2f",gramsTokg);
      }
      else 
        printf("Please enter the correct choice!!! \n");
   }
   printf("\n  HAVE YOURSELF A GOOD DAY   ");
    
   
    
    return 0;
}