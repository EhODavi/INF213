[ETAPA 1]

[RESULTADOS DOS EXPERIMENTOS]

input_11.txt
real    0m0,049s
user    0m0,003s
sys     0m0,000s

input_12.txt
real    0m0,003s
user    0m0,000s
sys     0m0,003s

----------------

input_13.txt
real    0m0,004s
user    0m0,004s
sys     0m0,000s

input_14.txt
real    0m0,003s
user    0m0,000s
sys     0m0,003s

----------------

input_15.txt
real    0m0,006s
user    0m0,006s
sys     0m0,000s

input_16.txt
real    0m0,021s
user    0m0,021s
sys     0m0,000s

----------------

input_17.txt
real    0m0,028s
user    0m0,027s
sys     0m0,000s

input_18.txt
real    0m1,631s
user    0m1,594s
sys     0m0,028s

----------------

input_19.txt
real    0m0,310s
user    0m0,292s
sys     0m0,008s

input_110.txt
real    2m40,988s
user    2m39,333s
sys     0m0,727s

[CONCLUSÃO]

Após analisarmos o tempo, concluímos que a classe MyPriorityQueue é mais rápida do que a classe MyPriorityQueue2. Isso ocorre porque a ordem de complexidade do push na classe MyPriorityQueue é O(logn) e do pop é O(logn). Enquanto que a ordem de complexidade do push na classe MyPriorityQueue2 é O(1) e do pop é O(n). Como sempre é feito a mesma quantidade de push e pop, a ordem de complexidade da etapa 1 será a maior ordem de complexidade entre o push e o pop. Com isso, a ordem de complexidade da etapa 1 com a classe MyPriorityQueue é O(logn), enquanto que com a classe MyPriorityQueue2 é O(n). Portanto, como um algoritmo O(logn) é mais rápido do que um algoritmo O(n), concluímos que a classe MyPriorityQueue é mais rápida do que a classe MyPriorityQueue2.

[ETAPA 3]

[RESULTADOS DOS EXPERIMENTOS]

[INEFICIENTE]

input_1.txt
real    0m0,041s
user    0m0,031s
sys     0m0,008s

----------------

input_2.txt
real    0m0,133s
user    0m0,101s
sys     0m0,013s

----------------

input_3.txt
real    0m0,432s
user    0m0,397s
sys     0m0,028s

----------------

input_4.txt
real    4m41,487s
user    4m34,699s
sys     0m6,466s

----------------

input_5.txt
real    18m45,948s
user    18m18,796s
sys     0m25,864s

----------------

input_6.txt
real    75m3,792s
user    73m15,184s
sys     1m43,456s

[EFICIENTE]

input_1.txt
real    0m0,009s
user    0m0,003s
sys     0m0,006s

----------------

input_2.txt
real    0m0,014s
user    0m0,000s
sys     0m0,014s

----------------

input_3.txt
real    0m0,024s
user    0m0,020s
sys     0m0,004s

----------------

input_4.txt
real    0m0,501s
user    0m0,174s
sys     0m0,312s

----------------

input_5.txt
real    0m1,045s
user    0m0,344s
sys     0m0,612s

----------------

input_6.txt
real    0m2,188s
user    0m0,710s
sys     0m1,336s

[CONCLUSÃO]

Concluímos que ao implementar a classe Mediana utilizando duas filas de prioridade o algoritmo é executado de maneira mais rápida. Isso porque a fila de prioridade ajuda a achar a mediana sem precisar ordenar os elementos toda hora. A mediana lenta possui complexidade O(n2 logn) e a mediana eficiente possui complexidade O(n logn). Ou seja, em média, se dobrarmos o valor de n na mediana lenta, o tempo aumenta quatro vezes. Enquanto se dobrarmos o valor de n na mediana eficiente, o tempo aumenta duas vezes.

[ETAPA 4]

Se não marcarmos um elemento como visitado, o algoritmo entraria em loop infinito pois ele nunca saberia se visitou todas as posições (caso não haja uma saída). A diferença entre a busca em largura e a busca em profundidade é que a busca em largura visita todas as direções ao mesmo tempo e a busca em profundidade visita uma direção de cada vez.