#include<stdio.h>
#include<conio.h>
#include<string.h>
int top=-1;
char stack[20];
void push(char x){
	stack[++top] =  x;
}
char pop(){
	return stack[top--];
}
int precedence(char ch){
	if(ch == '+' || ch == '-'){
		return 1;
	}else if(ch == '*' || ch == '/'){
		return 2;
	}else if(ch == '^'){
		return 3;
	}else{
		return -1;
	}
}
int main()
{

	char i,arr[20],c,n;
	printf("Enter your expression: ");
	gets(arr);
	printf("Postfix Expression is:");
	for(i=0;arr[i]!='\0';i++){
		c = arr[i];
		if(precedence(c)>0){
			while(top!=-1&&precedence(stack[top])>=precedence(c)){
				printf("%c",pop());
			}
			push(c);
		}else if(c==')'){
			n = pop();
			while(n!='('){
				printf("%c",n);
				n = pop();
			}
		}else if(c == '('){
			push(c);
		}else{
			printf("%c",c);
		}
	} 	
	
	return 0;
	
}
create database ecommerece_db;

use ecommerece_db;


CREATE TABLE customer(
ID int not null auto_increment,
name varchar(45) not null,
email varchar(45),
address varchar(45),
primary key (ID)
);

CREATE TABLE product(
id int not null auto_increment,
name varchar(45) not null,
price DECIMAL(5,2),
primary key(id)
);
SELECT * FROM product;

INSERT INTO customer (`name`,`email`,`address`)
VALUES 
("Manish Dhungana", "manishdhungana@gmail.com", "kathmandu"),
("Manish Dhungana1", "manishdhungana@gmail.com", "kathmandu"),
("Manish Dhungana2", "manishdhungana@gmail.com", "kathmandu");

SELECT * FROM customer

INSERT INTO product(`name`,`price`)
VALUES
("Keyboard","600.50"),
("Mouse","450.67");


CREATE TABLE orders(
ID int not null auto_increment,
customer_id int not null,
product_id int not null,
foreign key(customer_id) references customer(ID),
foreign key(product_id) references product(id),
primary key(ID)
);

INSERT into orders(`customer_id`,`product_id`)
VALUES(2,2);

SELECT orders.ID,orders.customer_id, customer.name, orders.product_id, product.name
FROM((orders
INNER JOIN customer on orders.customer_id=customer.ID)
INNER JOIN product on orders.product_id=product.id) 

SELECT * FROM ecommerece_db.orders

