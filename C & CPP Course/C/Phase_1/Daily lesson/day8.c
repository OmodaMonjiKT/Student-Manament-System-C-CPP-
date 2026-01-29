#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char password[18];

int main(){
    /********************************************************
    note
    #include<string.h> declare first

        professional level
        ==================
        strcspn(string,'\n') //string ထဲမှာ နောက်က parameter တစ်ခုခု ပထမဆုံးတွေ့တဲ့‌နေရာအထိ length ကိုတွက်ပေးတာဖြစ်တယ်။

        beginner level
        ==================
        null terminator \0
        strlen = length of string (Ex: strlen(string))
        strcpy = copy string (Ex: strcpy(new,old))                //dangerous function
        strncpy = copy string (Ex: strcpy(new,old,number of char))   //half-safe function
        strlcpy = copy string (Ex: strcpy(new,old,sizeof(new)))   //safe function
        strcat = concatenation string (Ex: strcat(new,old))                //dangerous function
        strncat = concatenation string (Ex: strcat(new,old,number of char))   //half-safe function
        strlcat = concatenation string (Ex: strcat(new,old,sizeof(new)))   //safe function
        strcmp = compare two string (Ex: strcmp(old,new))   
        strncmp = compare tow string (Ex: strncmp(old,new,number of char))   
        strchr = search string (Ex: strchr(string,'search'))       //first match
        strrchr = search string(Ex: strrchr(string,'search'))      //last match
        strstr = search string(Ex: strstr(string,'search'))        //substring find [login bypass source]
        string bug = security hole
    *********************************************************/

    //screen clear
    system("cls");

    //string
    char name[] = "AungThetSan";
    printf("my name is %s\n",name);
    printf("last index is %c",name[(strlen(name)-3)]);
    check:
    printf("enter app password :");
    fgets(password,sizeof(password),stdin);

    if(strcmp(password,"whoami")==1){
        printf("password is correct\n");
    }else{
        printf("password is wrong\n");
        goto check;
    }
    
}