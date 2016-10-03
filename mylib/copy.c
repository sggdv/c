/* copy函数: 将from复制到to; 这里假定to足够大 */
void copy(char to[], char from[])
{
	int i;
	
	i = 0;
	while ((to[i] = from[i]) != '\0') 
		++i;
}
