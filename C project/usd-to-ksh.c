#include <stdio.h>

int main(void) {
  double usd, ksh, rate;

  // Get the USD amount from the user
  printf("Enter amount in USD: ");
  scanf("%lf", &usd);

  // Convert USD to KSH using the exchange rate
  rate = 130.00; // current exchange rate (as of March 2023)
  ksh = usd * rate;

  // Output the result as an HTML page
  printf("Content-type: text/html\n\n");
  printf("<html>\n");
  printf("<head><title>USD to KSH Conversion</title></head>\n");
  printf("<body>\n");
  printf("<h1>USD to KSH Conversion</h1>\n");
  printf("<p>USD %.2f = KSH %.2f</p>\n", usd, ksh);
  printf("</body>\n");
  printf("</html>\n");

  return 0;
}
