#include <stdio.h>
#include "list.h"

int main()
{
    int value, flag = 0;
    
    //input data
    while(scanf("%d", &value) != EOF)
    {
        //if is not positive, break
        if(value <= 0)
            break;
        
        //if first input data, new a list
        if(flag == 0)
        {
            newList();
            flag = 1;
        }

        //add node to list
        addNode(value);
    }

    //print
    prettyPrint();

    return 0;
}
