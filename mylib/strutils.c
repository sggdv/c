/* squeeze函数: 从字符串s中删除字符c */
void squeeze(char s[], int c)
{
  int i, j;

  for (i = j = 0; s[i] != '\0'; i++)
    if (s[i] != c)
      s[j++] = s[i];
  s[j] = '\0';
}

/*
  strcat函数: 将字符串t连接到字符串s的尾部; s必须有足够大的空间。
  string.h 已提供。
*/
void strcat(char s[], char t[])
{
  int i, j;

  i = j = 0;
  while (s[i] != '\0')
    i++;
  while ((s[i++] = t[j++]) != '\0')
    ;
}
