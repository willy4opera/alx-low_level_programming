int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);
int mod(int num1, int num2);

/**
* add - adds two integers
* @num1: first integer to add
* @num2: second integer to add
* Return: the sum
*/

int add(int num1, int num2)
{
	return (num1 + num2);
}

/**
* sub - subtracts two integers
* @num1: first integer to add
* @num2: second integer to add
* Return: the subtract
*/

int sub(int num1, int num2)
{
	return (num1 - num2);
}

/**
* mul - multiplies two integers
* @num1: first integer to add
* @num2: second integer to add
* Return: the multiple
*/

int mul(int num1, int num2)
{
	return (num1 * num2);
}

/**
* div - divideds two integers
* @num1: first integer to add
* @num2: second integer to add
* Return: the dividend integer
*/

int div(int num1, int num2)
{
	return (num1 / num2);
}

/**
  mod - finds the modulus of two integers
  @num1: first integer to add
  @num2: second integer to add
  Return: the modulus
*/

int mod(int num1, int num2)
{
	return (num1 % num2);
}
