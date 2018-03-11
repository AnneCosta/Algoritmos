void ordenar(Lista *L){
	Lista aux, p = *L;
	while (p != NULL){
		aux = p->proximo;
		while(aux != NULL){
			if(p->elem > aux->elem){
			int aux2 = p->elem;
			p->elem = aux->elem;
			aux->elem = aux2;
		}
		aux = aux->proximo;
		}
		p = p->proximo;
	}
}
