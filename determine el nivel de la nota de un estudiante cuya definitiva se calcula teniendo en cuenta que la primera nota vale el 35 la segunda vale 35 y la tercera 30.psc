Proceso definitiva_estudiantes
	nd<-0
	p_corte<-0
	s_corte<-0
	t_corte<-0
	n1<-0
	n2<-0
	n3<-0
	Escribir "Digite su primera nota: "
	Leer n1
	Escribir "Digite su segunda nota: "
	Leer n2
	Escribir "Digite su tercera nota: "
	Leer n3
	p_corte<-n1*0.35
	s_corte<-n2*0.35
	t_corte<-n3*0.3
	nd<-p_corte+s_corte+t_corte
	Si nd>1.9 Entonces
		Si nd>2.9 Entonces
			Si nd>3.9 Entonces
				Escribir "su calificacion es exelente"
			Sino
				Escribir "su calificacion es buena"
			Fin Si
		Sino
			Escribir "su calificacion es deficiente"
		Fin Si
	Sino
		Escribir "su calificacion es mala"
	Fin Si
	Escribir "Su nota definitiva es: ",nd	
FinProceso
