#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

string get_text(void);
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int letters;
int words;
int sentences;

int main(void)
{
    // The Coleman-Liau index
    // index = 0.0588 * L - 0.296 * S - 15.8

    int index;
    float L;
    float S; 

    string sentence = get_text();   
    
    for (int i = 0; i < strlen(sentence); i++)
    {
        letters = count_letters(sentence);
        words = count_words(sentence);
        sentences = count_sentences(sentence);
    }
    // words = space + 1;

    // printf("%i letters\n", letters);
    // printf("%i words\n", words);
    // printf("%i sentences\n", sentences);
    
    L =  (float) letters  / (float) words * 100;
    S =  (float) sentences / (float) words * 100;

    index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1)
    {
        // string indexStr = "1";
        // printf("Before Grade %s", indexStr);
        printf("Before Grade 1\n");
    } else if (index >= 16)
    {
        // string indexStr = "16+";
        // printf("Grade %s", indexStr);        
        printf("Grade 16+\n");        
    }else
    {
        // printf("Grade %i.\n", Grade);
        printf("Grade %i\n", index);
    }

}

string get_text(void) 
{
    string sentence;
    do
    {
        sentence = get_string("Say what's on your mind: ");
    } while (strcmp(sentence, "") == 0);
    return sentence;
    
};

int count_letters(string text) 
{
    letters = 0;
    
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters++;            
        }
    }
    return letters;
    
}
int count_words(string text)
{
    
    words = 1;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isblank(text[i]))
        {
            words++;
        }
    }
    return words;
}
int count_sentences(string text)
{
    sentences = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }   
    }
    return sentences;
}