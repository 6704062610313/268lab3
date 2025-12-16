#include <stdio.h>

int main() {
    int score,n;

    scanf("%d", &score);

    if (score >= 68) {
	   	if (score > 100) {
        	printf("error score\n");
    	}else if (score >= 85) {
                printf("A\n");
		}else if (score >= 75) {
                printf("B\n");
		}else {
			printf("C\n");
			n = 75-score;
			printf("%d\n",n);
        }
    }
    else {
        if (score >= 55) {
            printf("D\n");
    	}
        else if (score < 0){
            printf("error score\n");
        }else printf("F\n");
    }

    return 0;
}

