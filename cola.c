#include <stdio.h>
#include <stdlib.h>

mensaje crearcola (cola * C){
	
	cola * temp = NULL;
	temp = (cola) malloc(sizeof (cabecera));
	
	if(temp == NULL)
		return NO_MEMORY;
	
	temp->I=temp->F=NULL;
	
	*C= temp;
	
	return OK;
	 
}

void vaciarcola (cola C){
	
	while(!empty(C))
		desencolar(C);
	
	
	
}
void liberarcola (cola * C){
	
	vaciarcola(*C);
	free(*C);
	*C= NULL;
	
		
}

mensaje encolar(cola C, Info E){	
	conexion temp = NULL;
	
	temp=(conexion)malloc(sizeof(NODO));
		
	if(temp==NULL)
		return NO_MEMORY;
	
	temp->I=E;
	
	temp->Ant= NULL; 
	
	
	
	if ( empty(C) ){
		C->I=C->F=NULL;
	}else{
		C->F->Ant=temp;
		C->F=temp;
	}
	return OK;
	
}

Info desencolar(cola C){
	conexion temp = NULL;
	temp=(conexion)malloc(sizeof(NODO));
		
	if(temp==NULL)
		return NO_MEMORY;
		
	// este será el nuev inicio de la cola 
	
	temp=C->I->Ant;
	C->I=temp;
	
}

booleano empty (cola C){
	
	if( C != NULL && C->I == NULL && C->F == NULL )
		return TRUE;
	return FALSE;
	
	
}
