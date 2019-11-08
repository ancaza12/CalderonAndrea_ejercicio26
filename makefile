punto1.dat : punto1.x
	./punto1.x > punto1.dat 

punto1.x : punto1.cpp
	c++ punto1.cpp -o punto1.x
    
punto2.dat : punto2.x
	./punto2.x > punto2.dat

punto2.x : punto2.cpp
	c++ punto2.cpp -o punto2.x