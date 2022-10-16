# 2022c
資傳甲的程式倉庫
## week06
* 第一支程式
畫星星 建立鷹架
```cpp
#include <stdio.h>
int main(void){
	for(int i=1;i<=5;i++){
		int star=i*2-1;
		printf("鷹架:%d樓 %d星\n",i,star);
	}
	return 0;
}
```
* 第二支程式
畫星星-金字塔
```cpp
#include <stdio.h>
int main(void){
	for(int i=1;i<=5;i++){
		int space=5-i;
		int star=i*2-1;
		for(int j=0;j<space;j++){
			printf(" ");
		}
		for(int k=0;k<star;k++){
			printf("*");
		}
		printf("鷹架:%d樓 %d空格 %d星\n",i,star);
	}
	return 0;
}
```
* 第三支程式
暴力破解法-找出兩數值的最大公因數
```cpp
#include <stdio.h>
int main(void){
	printf("請輸入兩個數: ");
	int a,b,ans;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a;i++){
		if(a%i==0 && b%i==0){
			ans=i;
		}
	}
	printf("找到ans:%d",ans);
	return 0;
}
```
* 第四支程式
輾轉相除法-找出兩數值的最大公因數
```cpp
#include <stdio.h>
int main(void){
	printf("請輸入兩個數: ");
	int a,b,c;
	scanf("%d%d",&a,&b);
	while(1){
		c=a%b;
		printf("a:%d b:%d c:%d\n",a,b,c);
		if(c==0){
			break;
		}
		a=b;
		b=c;
	}
	printf("中的是:%d",b);
	return 0;
}
```
* 第五支程式
判斷if括號裡面的值成不成立
```cpp
#include <stdio.h>
int main(void){
	int a=10;
	if(-999){
		printf("-999成立\n");
	}
	if(-3){
		printf("-3成立\n");
	}
	if(-2){
		printf("-2成立\n");
	}
	if(-1){
		printf("-1成立\n");
	}
	if(0){
		printf("0不成立,所以什麼都沒印\n");
	}
	if(1){
		printf("1成立\n");
	}
	if(2){
		printf("2成立\n");
	}
	if(3){
		printf("3成立\n");
	}
	if(4){
		printf("4成立\n");
	}
	if(999){
		printf("999成立\n");
	}
	if("a==0"){
		printf("不管什麼東西,幾乎都成立\n");
	}
	return 0;
}
```
