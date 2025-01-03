#include<stdio.h>
#include<string.h>
void input(char *string){
	printf("moi ban nhap mot chuoi: ");
	scanf(" ");
	fgets(string,1000,stdin);
}
void inputNewString(char *string2){
	printf("moi ban nhap mot chuoi: \n");
	scanf(" ");
	fgets(string2,1000,stdin);
}
void printfStringReverse(char *string,int *size){
	for(int i=*size;i>-1;i--){
		printf("%c",*(string+i));
	}
	printf("\n");
}
void printfQuantity(char *string,int *size){
	int count=0;
	for(int i=0;i<*size;i++){
			count++;
	}
	printf("so luong trong chuoi la: %d\n",count);
}
void printfLiken(int *size,int *size2){
	if(*size>*size2){
		printf("chuoi ngan hon chuoi ban dau\n");
	}else if(*size<*size2){
		printf("chuoi dai hon chuoi ban dau\n");
	}else{
		printf("hai chuoi bang nhau\n");
	}
}
void printfInHoa(char *string,int *size){
	for(int i=0;i<*size-1;i++){
		if('a'<=*(string+i)&&'z'>=*(string+i)){
		*(string+i)-=32;
	}
		printf("%c",*(string+i));
	}
	printf("\n");
}
void printfCat(char *string,char *string2,int *size){
	strcat(string,string2);
	*size=strlen(string);
	printf("chuoi sau khi noi la:\n");
	for(int i=0;i<*size;i++){
		if(*(string+i)=='\n'){
			*(string+i)=' ';
			printf("%c",*(string+i));
		}else{
			printf("%c",*(string+i));
		}
	}
}
int main(){
	int chose,size=0,size2=0,check=1;
	char string[1000],string2[1000];
	do{
	printf("------------MENU----------\n");
	printf("1. Nhap vao chuoi\n");
	printf("2. In ra chuoi dao nguoc\n");
	printf("3. dem so luong tu trong chuoi\n");
	printf("4. Nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau \n");
	printf("5. In hoa tat ca chu cai trong chuoi\n");
	printf("6. Nhap vao chuoi khac va them chuoi do vao chuoi ban dau\n");
	printf("7. Thoat\n");
	printf("Lua chon cua ban: \n");
	scanf("%d",&chose);
	switch(chose){
		case 1:
			input(string);
			size=strlen(string);
			check=0;
			break;
		case 2:
			if(check){
			printf("moi ban nhap chuoi truoc");
			}else{
			printfStringReverse(string,&size);
		    }
		    break;
		case 3:
			if(check){
			printf("moi ban nhap chuoi truoc");
			}else{
			printfQuantity(string,&size);
		    }
		    break;
		case 4:
			if(check){
			printf("moi ban nhap chuoi truoc");
			}else{
			inputNewString(string2);
			size2=strlen(string2);
			printfLiken(&size,&size2);
		    }
		    break;
		case 5:
			if(check){
			printf("moi ban nhap chuoi truoc");
			}else{
			printfInHoa(string,&size);
		    }
		    break;
		case 6:
			if(check){
			printf("moi ban nhap chuoi truoc");
			}else{
			inputNewString(string2);
			printfCat(string,string2,&size);
		    }
		    break;
		case 7:
			printf("tam biet ban nhe <3");
		default:
			printf("loi cuu phap");
	}
	}while(chose!=7);
}

