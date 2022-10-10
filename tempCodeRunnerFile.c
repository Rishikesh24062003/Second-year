void Push()
{
    int x;

    if (TOP == Size - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter element to be inserted to the queue:");
        scanf("%d", &x);
        TOP = TOP + 1;
        array[TOP] = x;
    }
}