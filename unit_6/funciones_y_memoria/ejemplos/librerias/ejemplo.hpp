
namespace ejemplo {
	int pasarPorValor(int arg){
		arg += 2;
		return arg;
	}
	void pasarPorReferencia(int& p){
		p = 2;
		return;
	}
	int referenciaInmutable(const int& a){
		return 0;
	}

}
