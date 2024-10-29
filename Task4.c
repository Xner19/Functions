#include <stdio.h>
int StringLength(char sentence[]);	
int NumOfWords(char sentence[], int StrLength);
int NumOfVowels(char sentence[], int StrLength);
int VowelFreq (char sentence[], char vowel);
int main() {
    char sentence[101];
    int i = 0;
    int length, words, vowels;
    printf("Please enter a sentence: ");
    scanf("%100[^\n]", sentence);
    printf("length of sentence is %d\n",StringLength(sentence));
    printf("the number of words inside the sentence is %d \n",NumOfWords(sentence,StringLength(sentence)));
    printf("the number of vowls inside the sentence is %d \n",NumOfVowels(sentence,StringLength(sentence)));
    printf("A:%d\n",VowelFreq(sentence,'a'));
    printf("E:%d\n",VowelFreq(sentence,'e'));
    printf("O:%d\n",VowelFreq(sentence,'o'));
    printf("I:%d\n",VowelFreq(sentence,'i'));
    printf("U:%d\n",VowelFreq(sentence,'u'));

}
int StringLength(char sentence[]){
	int i = 0;
    while (sentence[i] != '\0') {
        if (sentence[i] == '\n') {
            sentence[i] = '\0';
            break;
        }
        i++;
    }
    return i;
}
int NumOfWords(char sentence[], int StrLength) {
    int count = 0, i;
    for (i = 0; i < StrLength; i++) {
        if ((i == 0 || sentence[i - 1] == ' ') && sentence[i] != ' ') {
            count++;
        }
    }
    return count;
}
int NumOfVowels(char sentence[], int StrLength) {
	int count=0;
	for (int i=0;i<=StrLength;i++){
			if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || 
            			sentence[i] == 'o' || sentence[i] == 'u' || 
           		 	sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || 
           	 		sentence[i] == 'O' || sentence[i] == 'U'){	
				count++;
			}
	}
	return count;
}

int VowelFreq (char sentence[], char vowel){
	int freq=0;
	for (int i=0;sentence[i] !='\0';i++){
		if (sentence[i] == vowel){
			freq++;
		}
	}
	return freq;
}

