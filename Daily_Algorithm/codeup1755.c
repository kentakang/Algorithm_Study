#include <stdio.h>
#include <string.h>

int main()
{
    int n = 0;
    char fileName[100];
    char extension[6];

    scanf("%s", fileName);

    for (int i = 0; i < strlen(fileName); i++)
    {
        if (fileName[i] == '.')
        {
            n = i;
            break;
        }
    }

    for (int i = n + 1; i < strlen(fileName) + 1; i++)
    {
        if (i == strlen(fileName))
            extension[(i - n) - 1] = '\0';
        else
        {
            extension[(i - n) - 1] = fileName[i];
        } 
    }

    if (strcmp("dib", extension) == 0)
    {
        printf("Paint.Picture");
    }
    else if (strcmp("doc", extension) == 0)
    {
        printf("Word.Document.8");
    }
    else if (strcmp("docx", extension) == 0)
    {
        printf("Word.Document.12");
    }
    else if (strcmp("htm", extension) == 0)
    {
        printf("htmfile");
    }
    else if (strcmp("html", extension) == 0)
    {
        printf("htmlfile");
    }
    else if (strcmp("hwp", extension) == 0)
    {
        printf("Hwp.Document.96");
    }
    else if (strcmp("hwpx", extension) == 0)
    {
        printf("Hwp.Document.hwpx.96");
    }
    else if (strcmp("hwt", extension) == 0)
    {
        printf("Hwp.Document.hwt.96");
    }
    else if (strcmp("jpe", extension) == 0 || strcmp("jpeg", extension) == 0 || strcmp("jpg", extension) == 0)
    {
        printf("jpegfile");
    }
    else if (strcmp("ppt", extension) == 0)
    {
        printf("PowerPoint.Show.8");
    }
    else if (strcmp("pptx", extension) == 0)
    {
        printf("PowerPoint.Show.12");
    }
    else if (strcmp("pptxml", extension) == 0)
    {
        printf("powerpointxmlfile");
    }
}