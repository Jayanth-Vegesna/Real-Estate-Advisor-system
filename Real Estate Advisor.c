
/*---Real Estate Advisor-------------------------------------------------*/
/*-----------------------------------------------------------------------*/

/*---Pre-processor directives--------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<conio.h>

/*---Decleration of functions-------------------------------------------*/
void freeze();

/*---Main function------------------------------------------------------*/
int main()
{
/*---Variable declaration-----------------------------------------------*/
    int value, index, bathrooms=0, bedrooms=0, budget=0, area=0;
    int property_selection, loan_selection, phone;
    char search[30], name[30];
    struct property
    {
        int index_number;
        char name[50];
        int square_feet, num_bathrooms, num_bedrooms, price;
    } properties[100];
/*---Property decleration-----------------------------------------------*/
    for (int i=0;i!=100; i++)
    {
        properties[i].index_number = 0;
        strcpy(properties[i].name, "None");
        properties[i].square_feet = 0;
        properties[i].num_bathrooms = 0;
        properties[i].num_bedrooms = 0;
        properties[i].price = 0;
    }
    /* Property 1 */
        properties[0].index_number = 1;
        strcpy(properties[0].name, "Purab Soni");
        properties[0].square_feet = 1000;
        properties[0].num_bathrooms = 2;
        properties[0].num_bedrooms = 2;
        properties[0].price = 100000;
    /* Property 2 */
        properties[1].index_number = 2;
        strcpy(properties[1].name, "Kushagra Gupta");
        properties[1].square_feet = 1400;
        properties[1].num_bathrooms = 2;
        properties[1].num_bedrooms = 5;
        properties[1].price = 200000;

    /* Property 3 */
        properties[2].index_number = 3;
        strcpy(properties[2].name, "Jayanth Vegesna");
        properties[2].square_feet = 2000;
        properties[2].num_bathrooms = 3;
        properties[2].num_bedrooms = 6;
        properties[2].price = 500000;

    /* Property 4 */
        properties[3].index_number = 4;
        strcpy(properties[3].name, "Samrath Upadhyay");
        properties[3].square_feet = 3000;
        properties[3].num_bathrooms = 3;
        properties[3].num_bedrooms = 5;
        properties[3].price = 400000;

    /* Property 5 */
        properties[4].index_number = 5;
        strcpy(properties[4].name, "Nirmaljeet Kaur");
        properties[4].square_feet = 5000;
        properties[4].num_bathrooms = 4;
        properties[4].num_bedrooms = 7;
        properties[4].price = 1000000;

/*---Opening Menu-------------------------------------------------------*/
    while(1)
        {
        selection1:
        system("cls");
        printf("_____________________________________________________________________________\n\n");
        printf("Main Menu\n");
        printf("_____________________________________________________________________________\n\n");
        printf("Please select one of the following options by entering a number 1-6: \n");
        printf("1. Display all available properties\n");
        printf("2. Modify records\n");
        printf("3. Search feature\n");
        printf("4. Apply filters\n");
        printf("5. Buy menu\n");
        printf("6. Exit The advisor system\n");
        printf("_____________________________________________________________________________\n");
            scanf("%d", &value);
        switch(value)
        {
/*---Property Display-------------------------------------------------*/
            case 1:
                selection4:
                system("cls");
                printf("The avaliable properties are:\n ");
                for (int i=0;i!=100; i++)
                {
                    if(properties[i].index_number != 0)
                    {
                        printf("_____________________________________________________________________________\n");
                        printf(" Index no: %d\n",properties[i].index_number);
                        printf(" Name: %s\n", properties[i].name);
                        printf(" Square feet: %d\n",properties[i].square_feet);
                        printf(" Number of Bathrooms: %d\n",properties[i].num_bathrooms);
                        printf(" Number of bedrooms: %d\n",properties[i].num_bedrooms);
                        printf(" Price: %d\n",properties[i].price);
                        printf("_____________________________________________________________________________\n");
                    }
                }           
                freeze();
                goto selection1;
/*---Record Modification------------------------------------------------*/
            case 2:
    /*---Record Menu----------------------------------------------------*/
                system("cls");
                selection2:
                printf("_____________________________________________________________________________\n\n");
                printf("Record Modification Menu\n");
                printf("_____________________________________________________________________________\n\n");
                printf("Please select one of the following options by entering a number 1-4: \n");
                printf("1. Add new record\n");
                printf("2. Edit record\n");
                printf("3. Delete record\n");
                printf("4. Return to previous\n");
                printf("_____________________________________________________________________________\n");
                    scanf("%d", &value);
                switch(value)
                {
    /*---Add Record----------------------------------------------------*/
                    case 1:
                        printf("Enter index number of new property [index range: 1 to 100]:");
                        scanf("%d", &index);
                        properties[index-1].index_number = index;
                        printf("Enter property name: ");
                        scanf("%s", properties[index-1].name);
                        printf("Enter property square feet: ");
                        scanf("%d", &properties[index-1].square_feet);
                        printf("Enter number of bathrooms: ");
                        scanf("%d", &properties[index-1].num_bathrooms);
                        printf("Enter number of bedrooms: ");
                        scanf("%d", &properties[index-1].num_bedrooms);
                        printf("Enter property price: ");
                        scanf("%d", &properties[index-1].price);
                        system("cls");
                        printf("New entry has been added.\n");
                        freeze();
                        goto selection1;
    /*---Edit Record---------------------------------------------------*/
                    case 2:
                        system("cls");
                        printf("The avaliable properties to edit are:\n ");
                        for (int i=0;i!=100; i++)
                        {   
                            if(properties[i].index_number != 0)
                            {
                                printf("_____________________________________________________________________________\n");
                                printf(" Index no: %d\n",properties[i].index_number);
                                printf(" Name: %s\n", properties[i].name);
                                printf(" Square feet: %d\n",properties[i].square_feet);
                                printf(" Number of Bathrooms: %d\n",properties[i].num_bathrooms);
                                printf(" Number of bedrooms: %d\n",properties[i].num_bedrooms);
                                printf(" Price: %d\n",properties[i].price);
                                printf("_____________________________________________________________________________\n");
                            }
                        }
                        printf("Enter index number of property to edit: ");
                        scanf("%d", &index);
                        properties[index-1].index_number = index;
                        printf("Enter property name: ");
                        scanf("%s", properties[index-1].name);
                        printf("Enter property square feet: ");
                        scanf("%d", &properties[index-1].square_feet);
                        printf("Enter number of bathrooms: ");
                        scanf("%d", &properties[index-1].num_bathrooms);
                        printf("Enter number of bedrooms: ");
                        scanf("%d", &properties[index-1].num_bedrooms);
                        printf("Enter property price: ");
                        scanf("%d", &properties[index-1].price);
                        system("cls");
                        printf("Entry has been changed.\n");
                        freeze();
                        goto selection1;
    /*---Delete Record----------------------------------------------------*/
                    case 3:
                        printf("Enter index number of property to delete: ");
                        scanf("%d", &index);
                        properties[index-1].index_number = 0;
                        strcpy(properties[index-1].name, "None");
                        properties[index-1].square_feet = 0;
                        properties[index-1].num_bathrooms = 0;
                        properties[index-1].num_bedrooms = 0;
                        properties[index-1].price = 0;
                        printf("Entry has been deleted.\n");
                        system("cls");
                        freeze();
                        goto selection1;
                    case 4:
                        goto selection1;
                    default:
                        system("cls");
                        printf("Invalid input. Returning to Record Modification Menu");
                        goto selection2;
                }

/*---Search Feature--------------------------------------------------*/
            case 3:
                system("cls");
                printf("_____________________________________________________________________________\n\n");
                printf("Search Menu\n");
                printf("Please Enter the name of property\n");
                printf("_____________________________________________________________________________\n\n");
                scanf("%s", search);
                system("cls");
                for (int i=0;i!=100; i++)
                {
                    if(strstr(properties[i].name,search) != NULL)
                    {
                        printf("The following properties match the search entered %s: \n", search);
                        printf("_____________________________________________________________________________\n\n");
                        printf(" Index no: %d\n",properties[i].index_number);
                        printf(" Name: %s\n", properties[i].name);
                        printf(" Square feet: %d\n",properties[i].square_feet);
                        printf(" Number of Bathrooms: %d\n",properties[i].num_bathrooms);
                        printf(" Number of bedrooms: %d\n",properties[i].num_bedrooms);
                        printf(" Price: %d\n",properties[i].price);
                        printf("_____________________________________________________________________________\n\n");
                    }
                }
                freeze();
                goto selection1;
/*---Filter Menu-----------------------------------------------------*/
            case 4:
                selection3:
                    system("cls");
                    printf("_____________________________________________________________________________\n\n");
                    printf("Filter Menu\n");
                    printf("_____________________________________________________________________________\n\n");
                    printf("Please select one of the following options by entering a number from 1-6: \n");
                    printf("1. Budget\n");
                    printf("2. Area\n");
                    printf("3. Number of bathrooms\n");
                    printf("4. Number of bedrooms\n");
                    printf("5. No filters\n");
                    printf("6. Return to previous\n");
                    printf("_____________________________________________________________________________\n");
                        scanf("%d",&value);
                    switch(value)
                    {
                    case 1:
                        printf("Enter the maximum budget: \n");
                        scanf("%d",&budget);
                        break;
                    case 2:
                        printf("Enter the minimum Area in square feet: \n");
                        scanf("%d",&area);
                        break;
                    case 3:
                        printf("Enter the number of bathrooms: \n");
                        scanf("%d",&bathrooms);
                        break;
                    case 4:
                        printf("Enter the number of bedrooms: \n");
                        scanf("%d",&bedrooms);
                        break;
                    case 5:
                        printf("No filters have been selected. \n");
                        break;
                    case 6:
                        goto selection1;
                    default:
                        printf("Invalid input. Returning to filter selection\n");
                        goto selection3;
                        break;
                    }
                system("cls");
                printf(" The selected filters is: \n");
                printf("_____________________________________________________________________________\n");
                if (bathrooms!= 0)
                {
                    printf("Properties with %d bathrooms\n", bathrooms);
                    for (int i=0;i!=100; i++)
                    {
                        if(properties[i].num_bathrooms == bathrooms)
                        {
                            printf("_____________________________________________________________________________\n");
                            printf(" Index no: %d\n",properties[i].index_number);
                            printf(" Name: %s\n", properties[i].name);
                            printf(" Square feet: %d\n",properties[i].square_feet);
                            printf(" Number of Bathrooms: %d\n",properties[i].num_bathrooms);
                            printf(" Number of bedrooms: %d\n",properties[i].num_bedrooms);
                            printf(" Price: %d\n",properties[i].price);
                            printf("_____________________________________________________________________________\n");
                        }
                    }
                    bathrooms = 0;  
                }
                if (bedrooms!=0)
                {
                    printf("Properties with %d bedrooms\n", bedrooms);
                    for (int i=0;i!=100; i++)
                    {
                        if(properties[i].num_bedrooms == bedrooms)
                        {
                            printf("_____________________________________________________________________________\n");
                            printf(" Index no: %d\n",properties[i].index_number);
                            printf(" Name: %s\n", properties[i].name);
                            printf(" Square feet: %d\n",properties[i].square_feet);
                            printf(" Number of Bathrooms: %d\n",properties[i].num_bathrooms);
                            printf(" Number of bedrooms: %d\n",properties[i].num_bedrooms);
                            printf(" Price: %d\n",properties[i].price);
                            printf("_____________________________________________________________________________\n");
                        }
                    }
                    bedrooms = 0;  
                }
                if (budget!=0)
                {
                    printf("Properties with price less than %d\n", budget);
                    for (int i=0;i!=100; i++)
                    {
                        if(properties[i].price < budget && properties[i].price !=0)
                        {
                            printf("_____________________________________________________________________________\n");
                            printf(" Index no: %d\n",properties[i].index_number);
                            printf(" Name: %s\n", properties[i].name);
                            printf(" Square feet: %d\n",properties[i].square_feet);
                            printf(" Number of Bathrooms: %d\n",properties[i].num_bathrooms);
                            printf(" Number of bedrooms: %d\n",properties[i].num_bedrooms);
                            printf(" Price: %d\n",properties[i].price);
                            printf("_____________________________________________________________________________\n");
                        }
                    }
                    budget = 0;  
                }    
                if (area!=0)
                {
                    printf("Properties with area greater than %d\n", area);
                    for (int i=0;i!=100; i++)
                    {
                        if(properties[i].square_feet > area)
                        {
                            printf("_____________________________________________________________________________\n");
                            printf(" Index no: %d\n",properties[i].index_number);
                            printf(" Name: %s\n", properties[i].name);
                            printf(" Square feet: %d\n",properties[i].square_feet);
                            printf(" Number of Bathrooms: %d\n",properties[i].num_bathrooms);
                            printf(" Number of bedrooms: %d\n",properties[i].num_bedrooms);
                            printf(" Price: %d\n",properties[i].price);
                            printf("_____________________________________________________________________________\n");
                        }
                    } 
                    area = 0;
                }
                if (value==5)
                {
                    printf("No filters were selected, displaying all properties:\n");
                    for (int i=0;i!=100; i++)
                    {
                        if(properties[i].index_number != 0)
                        {
                            printf("_____________________________________________________________________________\n");
                            printf(" Index no: %d\n",properties[i].index_number);
                            printf(" Name: %s\n", properties[i].name);
                            printf(" Square feet: %d\n",properties[i].square_feet);
                            printf(" Number of Bathrooms: %d\n",properties[i].num_bathrooms);
                            printf(" Number of bedrooms: %d\n",properties[i].num_bedrooms);
                            printf(" Price: %d\n",properties[i].price);
                            printf("_____________________________________________________________________________\n");
                        }
                    }      
                }
                freeze();
                goto selection1;
/*---Buy Menu----------------------------------------------------------*/
            case 5:
                system("cls");
                printf("_____________________________________________________________________________\n\n");
                printf("Buy Menu\n");
                printf("_____________________________________________________________________________\n\n");
                printf("Enter the index number of the property which you wish to buy\n");
                printf("Enter 0 to view avialable properties\n");
                printf("_____________________________________________________________________________\n");
                scanf("%d", &property_selection);
                if (property_selection==0)
                    goto selection4;
                printf("The selected property is: \n");
                printf("_____________________________________________________________________________\n\n");
                printf(" Index no: %d\n",properties[property_selection-1].index_number);
                printf(" Name: %s\n", properties[property_selection-1].name);
                printf(" Square feet: %d\n",properties[property_selection-1].square_feet);
                printf(" Number of Bathrooms: %d\n",properties[property_selection-1].num_bathrooms);
                printf(" Number of bedrooms: %d\n",properties[property_selection-1].num_bedrooms);
                printf(" Price: %d\n",properties[property_selection-1].price);
                printf("_____________________________________________________________________________\n\n");
                printf("Do you wish to look at avaliable loans? 1:Yes, 2:No\n");
                printf("_____________________________________________________________________________\n");
                scanf("%d", &value);
                if (value == 1)
                {
                    system("cls");
                    printf("These are the avaliable loan options:\n");
                    printf("_____________________________________________________________________________\n\n");
                    printf("1. HDFC                    600,000                     11   percent\n");
                    printf("2. YES                     500,000                     9    percent\n");
                    printf("3. SBI                     500,000                     9.5  percent\n");
                    printf("4. PNB                     400,000                     6    percent\n");
                    printf("_____________________________________________________________________________\n");
                    printf("Enter loan selection: ");
                    scanf("%d", &loan_selection);
                    switch(loan_selection)
                    {
                        case 1:
                            break;
                        case 2:
                            break;
                        case 3:
                            break;
                        case 4:
                            break;
                        default:
                            printf("No loan has been selected \n");
                    }
                }
                system("cls");
                printf("_____________________________________________________________________________\n");
                printf("Please enter the following details \n");
                printf("Name: \n");
                scanf("%s", name);
                printf("Phone number: \n");
                scanf("%d", &phone);
                printf("_____________________________________________________________________________\n");
                printf("Your details have been saved. You will be contacted later by an advisor.\n");
                printf("_____________________________________________________________________________\n");
                freeze();
                goto selection1;
/*---Exit---------------------------------------------------------------*/
            case 6:
                printf("Exiting program...");
                exit(0);
                break;
            default:
                system("clr");
                printf("Invalid input.\n");
                goto selection1;
                break;
        }
    }
}

void freeze()
{
    printf("_____________________________________________________________________________\n");
    printf("Please enter 0 to return to Main menu\n");
    printf("_____________________________________________________________________________\n");
    int value=1;
    while (1)
    {
        scanf("%d", &value);
        if (value==0)
            return;
    }
}