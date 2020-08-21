#include <stdio.h>
#include <conio.h>

main() {
	
	int in;
	char msg[100];
		
	system("color F1");
	printf("\n....................................................................\n\n");
	printf("\t :...INCOME TAX INDIA 2019-20...: \n");
	printf("\n....................................................................\n\n");
	printf("\tCalculation is based on maximum annual income 1Cr\n");

	printf("\n\tEnter your annual income: ");
	scanf("%d",&in);
	
	if(in<=250000) {
		sprintf(msg, "You don't have to pay any tax");	
	} else if(in>=250000 && in<=500000) {
		int cal1 = in*9/100;
		int cal2 = in-cal1;
		
		printf("\n\tYou have pay Rs. %d of your annual income\n",cal1);
		sprintf(msg, "Your income after deducting the tax is : Rs.%d",cal2);
	} else if(in>=500000 && in<=1000000) {
		int cal3 = in*24/100;
		int cal4 = in-cal3;

		printf("\n\tYou have pay Rs. %d of your annual income\n",cal3);
		sprintf(msg, "Your income after deducting the tax is : Rs.%d",cal4);
	} else if(in>=1000000 && in<=5000000) {
		int cal5 = in*34/100;
		int cal6 = in-cal5;
		
		printf("\n\tYou have pay Rs. %d of your annual income\n",cal5);
		sprintf(msg, "Your income after deducting the tax is : Rs.%d",cal6);
	} else if(in>=5000000 && in<=10000000) {
		int cal7 = in*44/100;
		int cal8 = in-cal7;
		
		printf("\n\tYou have pay Rs. %d of your annual income\n",cal7);
		sprintf(msg, "Your income after deducting the tax is : Rs.%d",cal8);
	} else if(in>=10000000) {
		int cal9 = in*49/100;
		int cal10 = in-cal9;
		
		printf("\n\tYou have pay Rs. %d of your annual income\n",cal9);
		sprintf(msg, "Your income after deducting the tax is : Rs.%d",cal10);
	} else {
		printf("\n\tPlease recheck your input!!");
	}
	
	FILE *fp;
	fp=fopen("TaxReport2019-20.txt","a");
	fprintf(fp,".......................................................................................\n");
	fprintf(fp,"INCOME TAX INDIA 2019-20\n");
	fprintf(fp,".......................................................................................\n");
	fprintf(fp,"Up to Rs. 2.5 lakhs = No Tax\n\n");
	fprintf(fp,"Above Rs. 2.5 lakhs to Rs. 5 lakhs = 5pct + 4pct cess\n\n");
	fprintf(fp,"Above Rs. 5 lakhs to Rs. 10 lakhs = 20pct + 4pct cess\n\n");
	fprintf(fp,"Above Rs. 10 lakhs to Rs. 50 lakhs = 30pct + 4pct cess\n\n");
	fprintf(fp,"Above Rs. 50 lakhs to Rs. 1 crore = 30pct + 10pct surcharge + 4pct cess\n\n");
	fprintf(fp,"Above Rs. 1 crore = 30pct + 15pct surcharge + 4pct cess\n\n");
	fprintf(fp,".......................................................................................\n");
	fprintf(fp,"Your annual income is : Rs.%d\n",in);
	fprintf(fp,"%s\n",msg);
	fprintf(fp,".......................................................................................\n");
	fclose(fp);
	
	printf("\n\n\tTax report saved...");   
	
	getch();
}
