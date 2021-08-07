Algoritmo ejercicio_05
	Leer IV	
	Si IV<100 Entonces
		IAP = IV*0.95
	SiNo
		Si IV>=100&&IV<=500 Entonces
			IAP = IV*0.90
		SiNo
			Si IV>500 Entonces
				IAP = IV*0.85
			FinSi
		FinSi
	FinSi
	Escribir IAP
FinAlgoritmo
