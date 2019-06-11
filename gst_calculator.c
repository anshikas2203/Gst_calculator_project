#include<stdio.h>
#include<conio.h>
struct Tax_Calculation
{
	
	char customer_name[25];
	struct cosmetic_products
	{
		char item_name[100][25];
		int price[100];
	}cos;
	struct general_products
	{
		char item_name[100][25];
		int price[100];
	}gen;
	struct hotel_service
	{
		char item_name[100][25];
		int price[100];
	}hot;
	
}gst;
main()
{
	int i,n,v,nqty,t,gstp[100],total_bill=0,qtyc,gstpc[100],nc,qtyg,gstpg[100],ng;
	printf("Enter customer name :-\n");
	scanf("%s",&gst.customer_name);
	printf("PLEASE ENTER THE DETAILS CAREFUL:");
	printf("\n******GENERAL ITEMS CATEGORY**********\nGST RATES ON GENRAL PRODUCT IS 14 PERCENT\n");
	printf("\nEnter the total number of diffrent types of GENERAL items here :");
	scanf("%d",&ng);
	if(ng==0)
	{
		printf("NO GENRAL ITEMS SELECTED:\n");
	}
	else
	{
		for(i=0;i<ng;i++)
			{
				printf("\n%d NAME ",i+1);
				scanf("%s",&gst.gen.item_name[i]);
				printf("\nPrice of %s ",gst.gen.item_name[i]);
				scanf("%d",&gst.gen.price[i]);
				printf("\nQuantity ");
				scanf("%d",&qtyg);
				gstpg[i]=((gst.gen.price[i]*22)/100+gst.gen.price[i])*qtyg;
				total_bill=total_bill+gstpg[i];
			}
	}
	printf("\n******COSMETICS CATEGORY**********\nGST RATES ON COSMETICS PRODUCT IS 22 PERCENT\n");
	printf("\nEnter the total number of diffrent types of cosmetics items here :");
	scanf("%d",&nc);
	if(nc==0)
	{
		printf("NO COSMETICS ITEMS SELECTED:\n");
	}
	else
	{
		for(i=0;i<nc;i++)
			{
				printf("\n%d NAME ",i+1);
				scanf("%s",&gst.cos.item_name[i]);
				printf("\nPrice of %s ",gst.cos.item_name[i]);
				scanf("%d",&gst.cos.price[i]);
				printf("\nQuantity ");
				scanf("%d",&qtyc);
				gstpc[i]=((gst.cos.price[i]*22)/100+gst.cos.price[i])*qtyc;
				total_bill=total_bill+gstpc[i];
			}
	}
	
	printf("\n*********HOTEL SERVICES CATEGORY****************");
	printf("\nENTER THE TOTAL NUMBER OF ITEMS");
	scanf("%d",&t);
	printf("\nNUMBER OF NON-VEG Items ");
	scanf("%d",&n);
	if(n==0)
	{
		printf("\nNO NON VEG FOOD ITEMS PURCHASES MADE");
	}
	else
	{
		printf("\nNON VEG CATEGORY:");
		printf("\nGST RATE ON NON VEG ITEMS 18 PERCENT");
		for(i=0;i<t;i++)
		{
			if(i<n)
			{
			printf("\n%d NAME ",i+1);
			scanf("%s",&gst.hot.item_name[i]);
			printf("\nPrice of %s ",gst.hot.item_name[i]);
			scanf("%d",&gst.hot.price[i]);
			printf("\nQuantity ");
			scanf("%d",&nqty);
			gstp[i]=((gst.hot.price[i]*18)/100+gst.hot.price[i])*nqty;
			total_bill=total_bill+gstp[i];
			}
			else
			{
				if(i==n)
				{
					printf("\nNOW ENTER THE VEG ITEMS :");
					printf("\nGST RATES ON VEG ITEMS IS 12 PECENT");
				}
					printf("\n%d NAME ",i+1);
					scanf("%s",&gst.hot.item_name[i]);
					printf("\nPrice of %s ",gst.hot.item_name[i]);
					scanf("%d",&gst.hot.price[i]);
					printf("\nQuantity ");
					scanf("%d",&nqty);
					gstp[i]=((gst.hot.price[i]*12)/100+gst.hot.price[i])*nqty;
					total_bill=total_bill+gstp[i];
			
				
			}
		}
	}
	printf("\n\t****YOUR BIL*******");
	
	printf("\nTOTAL PRICE IS RS.%d",total_bill);
	
}

