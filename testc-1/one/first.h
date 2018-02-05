//
// Created by newbie on 2018/1/23.
//

#ifndef TESTC_1_FIRST_H_H
#define TESTC_1_FIRST_H_H
#define LEN 400

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 普通的io调用
void main1(char *str) {
    int ch;
    FILE *fp;
    long count = 0;

    if ((fp = fopen(str, "r")) == NULL) {
        printf(" Can't open %s\n", str);
        exit(1);
    }


    while ((ch = getc(fp)) != EOF) {
        putc(ch, stdout);
        count++;
    }

    fclose(fp);
    printf("File %s has %ld characters \n", str, count);

}

// 一个简单的文件压缩程序,根目录为运行此程序所在文件夹，次编辑器在 camke-build-debug目录下
void main2(char *str) {
    FILE *in, *out;
    int ch = 0;
    char name[LEN];
    int count = 0;

    if ((in = fopen(str, "r")) == NULL) {
        fprintf(stderr, "I couldn't open the file %s\n", str);
        exit(2);
    }


    strcpy(name, str);
    strcat(name, ".red");
    if ((out = fopen(name, "w")) == NULL) {
        fprintf(stderr, "Can't create output file.->%s\n", name);
        exit(3);
    }


    while ((ch = getc(in)) != EOF) {
        if (count++ % 3 == 0) {
            putc(ch, out);
        }
    }

    if (fclose(in) != 0 || fclose(out) != 0) {
        fprintf(stderr, "Error in closing files \n");
    }

}


// 随机存取 fseek() ftell()函数
void main3() {
    char file[100];
    char ch;
    FILE *fp;
    long count, last;

    puts("Enter the name of the file to be processed: ");
    gets(file);
    if ((fp = fopen(file, "rb")) == NULL) {
        printf("reverse can't open %s \n", file);
        exit(1);
    }
    fseek(fp, 0L, SEEK_END);
    last = ftell(fp);
    printf("%d", last);

}

// 总共有42种错误类型
void allfault(void){
    for (int i = 0; i < 43; ++i) {
        fprintf(stderr," <%d>\t%s\n ",i,strerror(i));
    }
}


#endif



