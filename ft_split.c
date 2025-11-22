#include <stdlib.h>

size_t count_words(const char *s, char c)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while(s[i])
	{
		if(s[i] != c)
		{
			words++; 
			while(s[i] != c && s[i])
				i++;
		}    
		else
			i++;
	}
	return words;
}

static char *word_split(const char *s, char c)
{
	int i;
	char *word;

	i = 0;
	while(s[i] && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char **ft_split(char const *s, char c)
{
	int i;
	int j;
	char **array;
	
	i = 0;
	j = 0;
	array = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	while(*s)
	{
		if(!array && !s)
			return (NULL);
		while(s[i])
		{
			if(s[i] != c)
			{
				array[j] = word_split(&s[i], c);
				while(s[i] != c && s[i])
					i++;
				j++;	
			}
			else
				i++;
		}
		array[j] = 0;
	}
	return (array);
}
