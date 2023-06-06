#include "functions.h"
#include <stdio.h>
#define BUF_SIZE 4096

int	ft_size(char *path)
{
	int		fd;
	char	buf;
	int		count;
	
	count = 0;
	fd = open(path, O_RDONLY);
	if (fd == -1)
		return(1);
	while (read(fd, &buf, 1))
		count++;
	close(fd);
	return (count);
}

int	ft_height(char *path)
{
    int i;
    char *buf;
    int line;
    int fd;

    i = 0;
    line = 0;
    fd = open(path, O_RDONLY);
    if ((buf = malloc(80 * sizeof(char))) == NULL)
        return (0);
    while (read(fd, &buf[i], 1))
    {
        if (buf[i] < '0' || buf[i] > '9')
            break;
        line = line * 10 + (buf[i] - '0');
        i++;
    }
    free (buf);
    close(fd);
    return (line);
}

int	ft_width(char *path, int fd)
{
    char	*buf;
    int		i;
	int		j;
    int		line;

    i = -1;
	j = 0;
	line = 0;
    fd = open(path, O_RDONLY);
	if ((buf = malloc(ft_size(path) * sizeof(char))) == NULL)
        return (0);
    while (read(fd, &buf[++i], 1))
    {
        if (line == 0 && buf[i] == '\n')
			line++;
		else if (line == 1)
		{
			j++;
			if (buf[i] == '\n')
            	break;
		}
   }
   free(buf);
   close(fd);
   return (j);
}


void      ft_get_second_line(int fd)
{
    int i;
    char *buf;

	i = 0;
    if ((buf = malloc(4096 *sizeof(char))) == NULL)
        return;
    while (read(fd, &buf[i], 1))
    {
        if (buf[i] == '\n')
            break;
        i++;
    }
}

/*
char	**ft_malloc_file(char *path, int w, int h)
{
    char	**buf;
    int 	i;
    int 	fd;

    i = 0;
    fd = open(path, O_RDONLY);
    ft_get_second_line(fd);
    if ((buf = malloc(w * sizeof(char*))) == NULL)
        return NULL;
    while (i < w)
    {
        if ((buf[i] = malloc(h * sizeof(char))) == NULL)
            return NULL;
        i++;
    }
    close (fd);
    return (buf);
}


char	*ft_array(char *path)
{
	int		size;
	char	buf[BUF_SIZE];
	int		fd;

	fd = open(path, O_RDONLY);
	size = ft_size(path);
	read(fd, buf, size);
	close(fd);
	return(buf);
}	*/

char	**ft_read_file(char *path, int w, int h, int size)
{
	int		fd;
	int		i;
	char 	**map;
	char	*arr;

	fd = open(path, O_RDONLY);
    if ((map = malloc(w * sizeof(char*))) == NULL)
        return NULL;
	i = 0;
    while (i < w)
    {
        if ((map[i] = malloc(h * sizeof(char))) == NULL)
            return NULL;
        i++;
    }
	i = 6;
 	read(fd, arr, size); 
	while (i < size)
	{
		map[i / size][i % size] = arr[i];
		i++;
	}
	return (map);
}
char	*ft_info(char *path, char *info)
{
	char	buf[5];
	int		fd;
	int		i;

	i = 0;
	fd = open(path, O_RDONLY);
	if (fd > 0)
	{
		read(fd, buf, 4);
		while (i < 4)
		{
			info[i] = buf[i];
			i++;
		}
		info[4] = 0;
	}
	return(info);
}

//int	ft_width(char *path, )


/*
int	ft_matrix(char *path, )
{
	int	fd;
	int		map[filas][columnas];
	char	buffer[tamano_maximo_linea];
	fd = open(path, O_RDONLY);
	if (fd == -1)
		exit(1);
	
}*/

/*
ft_read(char *path)
{
int fd = open(path, O_RDONLY);
if (fd == -1) {
  printf("Error al abrir el archivo\n");
  exit(1);
}
int matriz[10][28];
char buffer[28];
int bytes_leidos;
int fila = 0, columna = 0;
int valor = 0;
char *p = buffer;

while ((bytes_leidos = read(fd, buffer, TAMANO_MAXIMO_LINEA)) > 0) {
  // Procesa la línea leída y almacena los datos en la matriz
  p = buffer;
  
  while (p < buffer + bytes_leidos) {
    valor = 0;
    
    while (*p >= '0' && *p <= '9') {
      valor = valor * 10 + (*p - '0');
      p++;
    }
    
    matriz[fila][columna++] = valor;
    
    if (columna == COLUMNAS) {
      fila++;
      columna = 0;
    }
    
    p++;
  }
}
close(fd);
}

*/


/*
int main(void)
{//	char	buf[5];
	int		i;
	int		fd;
	char	*info;
	int		height;
	int		width;
	int j = 0;
	info = malloc(5 * sizeof(char));
	fd = open("./maptest1.map", O_RDONLY);
	read(fd, buf, 4);
	info = buf;
	info[5] = 0;
	info = ft_info("./maptest1.map", info);
	height = ft_height("./maptest1.map");
	width = ft_width("./maptest1.map", fd);


	return(0);
}*/

int main(void)
{
	int		fd = 0;
	int		i;
	char 	**map;
	char	arr[BUF_SIZE];
	char	path[] = "./maptest1.map";
	int		h;
	int		w;
	int		size = ft_size(path);
	h = ft_height("./maptest1.map");
	w = ft_width("./maptest1.map", fd);

    if ((map = malloc(h * sizeof(char*))) == 0)
        return 0;
	i = 0;
	while (i < h)
    {
        if ((map[i] = malloc(w * sizeof(char))) == 0)
            return 0;
        i++;
    }
	fd = open(path, O_RDONLY);
	i = 0;
	read(fd, arr, size);
	while (i < (w*h))
	{
		map[i / w][i % w] = arr[5+i];
		i++;
	}
	int j = 0;
	while (j < h)
	{
		i = 0;
		while (i < w)
		{
			printf("%c", map[j][i]);
			i++;
		}
		j++;
	}
	return(0);
}


