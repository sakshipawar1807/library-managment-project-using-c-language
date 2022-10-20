#include<stdio.h>
#define size 50

struct student
{
	char F_name[10];
	char M_name[10];
	char L_name[10];
	char adress[10];
	int r_no;
};
struct book
{
	int B_id;
	char book_auther_name[10];
	char book_name[10];
	int price;
};

struct student s1[size],s2[size],s3[size];
struct book B1[size],B2[size],B3[size];
 char name[10];
 int rno,id,ret,choice,num,d_rno,d_idno;


void insert_student_fy();
void insert_student_sy();
void insert_student_ty();
void display_student_fy();
void display_student_sy();
void display_student_ty();
int search_student_fy();
int search_student_sy();
int search_student_ty();
void delete_student_fy();
void delete_student_sy();
void delete_student_ty();


void insert_books_fy();
void insert_books_sy();
void insert_books_ty();
void display_books_fy();
void display_books_sy();
void display_books_ty();
int search_books_fy();
int search_books_sy();
int search_books_ty();
void delete_book_fy();
void delete_book_sy();
void delete_book_ty();


int main()
{
	
	printf(" wlc to my managment system\n");
	while(1)
	{
		puts("........menu.......");
		puts("1.insert");
		puts("2.delete");
		puts("3.display");
		puts("4.search");
		puts("5.book managment");
		puts("6.exit");
		
		printf("enter your choice=");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				puts("**menu**");
				puts("1.student");
				puts("2.book");
				
				printf("enter your choice=");
				scanf("%d",&choice);
				
				switch(choice)
				{
					case 1:
						puts("##menu##");
						puts("1.fy");
						puts("2.sy");
						puts("3.ty");
						
						printf("enter your choice=");
						scanf("%d",&choice);
						
						switch(choice)
						{
							case 1:
								printf("how many student you want=");
								scanf("%d",&num);
								insert_student_fy();
								break;
							case 2:
								printf("how many student you want=");
								scanf("%d",&num);
								insert_student_sy();
								break;
							case 3:
								printf("how many student you want=");
								scanf("%d",&num);
								insert_student_ty();
								break;		
						}
						break;
						
					case 2:
						puts("..menu..");
						puts("1.fy");
						puts("2.sy");
						puts("3.ty");
						
						printf("enter your choice=");
						scanf("%d",&choice);
						
						switch(choice)
						{
							case 1:
								printf("how many books you want to insert=");
								scanf("%d",&num);
								insert_books_fy();
								break;
							case 2:
								printf("how many books you want to insert=");
								scanf("%d",&num);
								insert_books_sy();
								break;
							case 3:
								printf("how many books you want to insert=");
								scanf("%d",&num);
								insert_books_ty();
								break;		
						}
						break;	
				}
				break;
			case 2:
				puts("menu");
				puts("1.student");
				puts("2.book");
				
				printf("enter your choice=");
				scanf("%d",&choice);
				
				switch(choice)
				{
					case 1:
						puts("menu");
						puts("1.fy");
						puts("2.sy");
						puts("3.ty");
						printf("enter your choice=");
						scanf("%d",&choice);
						switch(choice)
						{
							case 1:
								printf("enter student roll no you want to remove=");
								scanf("%d",&d_rno);
								delete_student_ty();
								break;
							case 2:
								printf("enter student roll no you want to remove=");
								scanf("%d",&d_rno);
								delete_student_sy();
								break;
							case 3:
								printf("enter student roll no you want to remove=");
								scanf("%d",&d_rno);
								delete_student_ty();
								break;		
						}
						break;
					case 2:
						puts("menu");
						puts("1.fy");
						puts("2.sy");
						puts("3.ty");
						printf("enter your choice=");
						scanf("%d",&choice);
						switch(choice)
						{
							case 1:
								printf("enter book id no you want to remove=");
								scanf("%d",&d_idno);
								delete_book_fy();
								break;
							case 2:
								printf("enter book id  no you want to remove=");
								scanf("%d",&d_idno);
								delete_book_sy();
								break;
							case 3:
								printf("enter book id no you want to remove=");
								scanf("%d",&d_idno);
								delete_book_ty();
								break;
						}
						break;	
				}
				break;
			case 3:
				puts("menu");
				puts("1.student");
				puts("2.book");
				
				printf("enter your choice=");
				scanf("%d",&choice);
				
				switch(choice)
				{
					case 1:
						puts("menu");
						puts("1.fy");
						puts("2.sy");
						puts("3.ty");
						
						printf("enter your choice=");
						scanf("%d",&choice);
						
						switch(choice)
						{
							case 1:
								display_student_fy();
								break;
							case 2:
								display_student_sy();
								break;
							case 3:
								display_student_ty();
								break;		
						}
						break;
					case 2:
						puts("^^menu^^");
						puts("1.fy");
						puts("2.sy");
						puts("3.ty");
						printf("enter your choice=");
						scanf("%d",&choice);
						switch(choice)
						{
							case 1:
								display_books_fy();
								break;
							case 2:
								display_books_sy();
								break;
							case 3:
								display_books_ty();
								break;	
						}
						break;	
				}
				
				break;
			case 4:
				puts("menu");
				puts("1.student");
				puts("2.book");
				
				printf("enter your choice=");
				scanf("%d",&choice);
				
				switch(choice)
				{
					case 1:
						puts("menu");
						puts("1.fy");
						puts("2.sy");
						puts("3.ty");
						
						printf("enter your choice=");
						scanf("%d",&choice);
						
						switch(choice)
						{
							case 1:
								printf("enter student name you want search=");
								scanf("%s",&name);
								printf("enter roll number=");
								scanf("%d",&rno);
								ret=search_student_fy();
								if(ret==1)
								{
									printf("student found\n");
									
								}
								else
								{
									printf("student not found\n");
								}
								break;
							case 2:
								printf("enter student name you want search=");
								scanf("%s",&name);
								printf("enter roll number=");
								scanf("%d",&rno);
								ret=search_student_sy();
								if(ret==1)
								{
									printf("student found\n");
								}
								else
								{
									printf("student not found\n");
								}
								break;	
							case 3:
								printf("enter student name you want search=");
								scanf("%s",&name);
								printf("enter roll number=");
								scanf("%d",&rno);
								ret=search_student_ty();
								if(ret==1)
								{
									printf("student found\n");
								}
								else
								{
									printf("student not found\n");
								}
								break;	
						}
						break;
					case 2:
						puts("menu");
						puts("1.fy");
						puts("2.sy");
						puts("3.ty");
						
						switch(choice)
						{
							case 1:
								printf("enter book id=");
								scanf("%d",&id);
								printf("enter book name=");
								scanf("%s",&name);
								ret=search_books_fy();
								if(ret==1)
								{
									printf("book is available");
								}
								else
								{
									printf("book is not available");
								}
								break;
							case 2:
								printf("enter book id=");
								scanf("%d",&id);
								printf("enter book name=");
								scanf("%s",&name);
								ret=search_books_sy();
								if(ret==1)
								{
									printf("book is available");
								}
								else
								{
									printf("book is not available");
								}
								break;
							case 3:
								printf("enter book id=");
								scanf("%d",&id);
								printf("enter book name=");
								scanf("%s",&name);
								ret=search_books_ty();
								if(ret==1)
								{
									printf("book is available");
								}
								else
								{
									printf("book is not available");
								}
								break;		
						}
						break;	
				}
				break;
			case 5:
				break;
			case 6:
				return 0;
		}
		
		
	}
	
}
	
void insert_student_fy()
{
	
   for(int i=0;i<num;i++)	
   {
		s1[i].r_no=i+1;
	   	printf("enter first name=");
	   	scanf("%s",&s1[i].F_name);
		printf("enter middle name=");
	   	scanf("%s",&s1[i].M_name); 
		printf("enter last name=");
	   	scanf("%s",&s1[i].L_name);
	  	printf("enter student adress=");
	   	scanf("%s",&s1[i].adress);
	}
}

void insert_student_sy()
{
	
   for(int i=0;i<num;i++)	
   {
		s2[i].r_no=i+1;
	   	printf("enter first name=");
	   	scanf("%s",&s2[i].F_name);
		printf("enter middle name=");
	   	scanf("%s",&s2[i].M_name); 
		printf("enter last name=");
	   	scanf("%s",&s2[i].L_name);
	  	printf("enter student adress=");
	   	scanf("%s",&s2[i].adress);
	}
}


void insert_student_ty()
{
	
   for(int i=0;i<num;i++)	
   {
		s3[i].r_no=i+1;
	   	printf("enter first name=");
	   	scanf("%s",&s3[i].F_name);
		printf("enter middle name=");
	   	scanf("%s",&s3[i].M_name); 
		printf("enter last name=");
	   	scanf("%s",&s3[i].L_name);
	  	printf("enter student adress=");
	   	scanf("%s",&s3[i].adress);
	}
}

void insert_books_fy()
{
	
	
	for(int i=0;i<num;i++)
	{
		printf("enter book id number=");
		scanf("%d",&B1[i].B_id);
		printf("enter book name=");
		scanf("%s",&B1[i].book_name);
		fflush(stdin);
		printf("enter book auther name=");
		scanf("%s",&B1[i].book_auther_name);
		fflush(stdin);
		printf("enter book price=");
		scanf("%d",&B1[i].price);
		
	}
}

void insert_books_sy()
{
		
	for(int i=0;i<num;i++)
	{
		printf("enter book id number=");
		scanf("%d",&B2[i].B_id);
		printf("enter book name=");
		scanf("%s",&B2[i].book_name);
		fflush(stdin);
		printf("enter book auther name=");
		scanf("%s",&B2[i].book_auther_name);
		fflush(stdin);
		printf("enter book price=");
		scanf("%d",&B2[i].price);
		
	}
}

void insert_books_ty()
{
	
	for(int i=0;i<num;i++)
	{
		printf("enter book id number=");
		scanf("%d",&B3[i].B_id);
		printf("enter book name=");
		scanf("%s",&B3[i].book_name);
		fflush(stdin);
		printf("enter book auther name=");
		scanf("%s",&B3[i].book_auther_name);
		fflush(stdin);
		printf("enter book price=");
		scanf("%d",&B3[i].price);
		
	}
}

void display_student_fy()
{
	
	printf("student information\n");
    for(int i=0;i<num;i++)
    {
    	
    	printf("\nrollno\t first name\t middle name\t last name\t adress\n" );
    	 printf("\n%d       %s            %s             %s        %s\n",s1[i].r_no,s1[i].F_name,s1[i].M_name,s1[i].L_name,s1[i].adress);
    }
    return;
} 

void display_student_sy()
{
	
	printf("student information\n");
    for(int i=0;i<num;i++)
    {
    	
    	printf("\nrollno\t first name\t middle name\t last name\t adress\n" );
    	 printf("\n%d       %s            %s             %s        %s\n",s2[i].r_no,s2[i].F_name,s2[i].M_name,s2[i].L_name,s2[i].adress);
    }
    return;
} 

void display_student_ty()
{
	
	printf("student information\n");
    for(int i=0;i<num;i++)
    {
    	
    	printf("\nrollno\t first name\t middle name\t last name\t adress\n" );
    	 printf("\n%d       %s            %s             %s        %s\n",s3[i].r_no,s3[i].F_name,s3[i].M_name,s3[i].L_name,s3[i].adress);
    }
    return;
} 



void display_books_fy()
{

	printf("book information\n");
	for(int i=0;i<num;i++)
	{
		printf("\nbook id\t book name\t  auther\t price\n");
		printf("\n  %d      %s            %s       %d\n",B1[i].B_id,B1[i].book_name,B1[i].book_auther_name,B1[i].price);
	}
	return;
}

void display_books_sy()
{

	printf("book information\n");
	for(int i=0;i<num;i++)
	{
		printf("\nbook id\t book name\t  auther\t price\n");
		printf("\n  %d      %s            %s       %d\n",B2[i].B_id,B2[i].book_name,B2[i].book_auther_name,B2[i].price);
	}
	return;
}

void display_books_ty()
{

	printf("book information\n");
	for(int i=0;i<num;i++)
	{
		printf("\nbook id\t book name\t  auther\t price\n");
		printf("\n  %d      %s            %s       %d\n",B3[i].B_id,B3[i].book_name,B3[i].book_auther_name,B3[i].price);
	}
	return;
}


int search_student_fy()
{
	int flag=0;
	
	for(int i=0;i<num;i++)
	{
		if(s1[i].F_name==name || s1[i].r_no==rno)
		{
			
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}

int search_student_sy()
{
	int flag=0;
	
	for(int i=0;i<num;i++)
	{
		if(s2[i].F_name==name || s2[i].r_no==rno)
		{
			
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}


int search_student_ty()
{
	int flag=0;
	
	for(int i=0;i<num;i++)
	{
		if(s3[i].F_name==name || s3[i].r_no==rno)
		{
			
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}


int search_books_fy()
{
	int flag=0;
	
	for(int i=0;i<num;i++)
	{
		if(B1[i].B_id==id || B1[i].book_name==name)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int search_books_sy()
{
	int flag=0;
	
	for(int i=0;i<num;i++)
	{
		if(B2[i].B_id==id || B2[i].book_name==name)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int search_books_ty()
{
	int flag=0;
	
	for(int i=0;i<num;i++)
	{
		if(B3[i].B_id==id || B3[i].book_name==name)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void delete_student_fy()
{
	
	for(int i=0;i<num;i++)
	{
		if(s1[i].r_no != d_rno)
		continue;
		s1[i]=s1[i+1];
	}
	num--;
}

void delete_student_sy()
{
	
	for(int i=0;i<num;i++)
	{
		if(s2[i].r_no != d_rno)
		continue;
		s2[i]=s2[i+1];
	}
	num--;
}
void delete_student_ty()
{
	
	for(int i=0;i<num;i++)
	{
		if(s3[i].r_no != d_rno)
		continue;
		s3[i]=s3[i+1];
	}
	num--;
}


void delete_book_fy()
{
	
	for(int i=0;i<num;i++)
	{
		if(B1[i].B_id != d_idno)
		continue;
		B1[i]=B1[i+1];
	}
	num--;
}

void delete_book_sy()
{
	
	for(int i=0;i<num;i++)
	{
		if(B2[i].B_id != d_idno)
		continue;
		B2[i]=B2[i+1];
	}
	num--;
}

void delete_book_ty()
{
	
	for(int i=0;i<num;i++)
	{
		if(B3[i].B_id != d_idno)
		continue;
		B3[i]=B3[i+1];
	}
	num--;
}

