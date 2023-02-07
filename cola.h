
typedef struct Inf{
	
	//informacion de la cola
	
} Info;

typedef struct nodo {
	Info I;
	struct nodo * Ant;
	
} NODO;

typedef struct Cab{

	NODO *I;
	NODO *F;
	
} cabecera;

//seccion de alias 
typedef NODO * conexion;
typedef cabecera * cola;
typedef enum B { FALSE , TRUE } booleano; 
typedef enum m { NO_MEMOR, OK } mensaje;

//prototipos

mensaje crearcola ( cola * C);
void vaciarcola ( cola  C );
void liberarcola ( cola * C );

mensaje encolar (cola C, Info I );
Info desencolar ( cola C );
booleano empty ( cola C );




