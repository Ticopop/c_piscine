char	*inic_tablero(void)
{
	char				*tablero;

	tablero = (char*)malloc(16);
	return tablero;
}

char	pos_t(char i, char j)
	return (i*4 + j);

void iterar_c(char i, char *tablero, char *input)
{
	char j;
	char *vistas;
	char *candidatos;

	vistas = "00";
	vistas[0] = input[pos_mf(i, 0)];
	vistas[1] = input[pos_mf(i, 1)];
	candidatos = tabla(vistas[0], vistas[1]);
	j = 0;
	while (*candidatos)
	{
		if(tablero[pos_t(i, j)] != candidatos[j % 4])
			tablero[pos_t(i, j) = 'x';
		else if (tablero[pos_t(i, j) =! 'x')
			tablero[pos_t(i, j) =! candidatos[j % 4];
	}
}

void iterar_f(char j, char *tablero, char *input)
{
	char i;
	char *vistas;
	char *candidatos;

	vistas = "00";
	vistas[0] = input[pos_mf(4 + j, 0)];
	vistas[1] = input[pos_mf(4 + j, 1)];
	candidatos = tabla(vistas[0], vistas[1]);
	i = 0;
	while (*candidatos)
	{
		if(tablero[pos_t(i, j)] != candidatos[i % 4])
			tablero[pos_t(i, j) = 'x';
		else if (tablero[pos_t(i, j) =! 'x')
			tablero[pos_t(i, j) != candidatos[i % 4];
	}
}

