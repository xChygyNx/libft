# libft

Статическая библиотека, в которой собрано множество функций, необходимых для повседневной работы

## Функции
**free_tab.c** - освобождает память, выдленную под массив строк.  
**ft_atoi.c** - переводит строковое число в численное значение.  
**ft_bzero.c** - "зануляет" переданную в качестве аргумента область памяти.  
**ft_intlen.c** - определяет длину числа в символах.  
**ft_isalnum.c** - определет, состоит ли переданная строка из одних чисел. Возвращает 1 если состоит из одних чисел, 0 если есть другие символы.  
**ft_isalpha.c** - определяет, является ли переданный int ascii-кодом буквенного символам (a-z и A-Z). Возвращает 1 если является, 0 - если нет.    
**ft_isascii.c** - определяет, входит ли переданный int в ascii-код. Возвращает 1 если входит, 0 - если нет.  
**ft_isdigit.c** - определяет, является ли переданный int ascii-кодом численного символа. Возвращает 1 если является, 0 - если нет.  
**ft_isprint.c** - определяет, является ли переданный int ascii-кодом печатаемого символа. Возвращает 1 если является, 0 - если нет.  
**ft_itoa.c** - переводит число в строковое значение.  
**ft_lstadd.c** - вставляет переданный в качестве аргумента листв начало переданного списка.  
**ft_lstdel.c** - удаляет содержимое списка с помощью переданного указателя на функцию, и освобождает память, выделенную под список.  
**ft_lstdelone.c** - удаляет лист с помощью переданного указателя на функцию и освобождает памятьб выделенную под лист.  
**ft_lstiter.c** - применяет ко всем листам списка функцию, указатель на которую передали в качестве аргумета.  
**ft_lstmap.c** - создает новый список полученный путем применения функции, указатель на которую нам пришел, к Пришедшему в качестве аргумента списку.  
**ft_lstnew.c** - создает новый лист с содержанием, переданным в качестве аргумента.  
**ft_memalloc.c** - выделяет нужный размер памяти и "зануляет" его.  
**ft_memccpy.c** - копирует данные из одной области памяти в другую. Если в исходной области памяти встретится символ, переданный в качестве арумента, копирование завершается, и возвращается скопированная область памяти, если нет - возвращается NULL.  
**ft_memchr.c** - возвращает указатель на символ, если в области памяти нашелся символ, переданный в качестве аргумента, NULL - если не нашелся.  
**ft_memcmp.c** - сравнивает значения, находящиеся в области памяти.  
**ft_memcpy.c** - копирует значения из одной области памяти в другую (при этом не проверяется достаточно ли в конечной области памяти места для копирования.   
**ft_memdel.c** - освобождает выделенный участок памяти.  
**ft_memmove.c** - переписывает значения из одного участка памяти в другой (работает корректно даже если переданные области памяти перекрывают друг друга).  
**ft_memset.c** - заполняет переданную в качестве аргумента область памяти заданным значением.  
**ft_putchar.c** - печать в stdout переданного символа.  
**ft_putchar_fd.c** - печать переданного значения в file descriptor.
**ft_putendl.c** - печать переданной строки в stdout с доюавлением в конце перехода на новую строку.  
**ft_putendl_fd.c** - печать переданной строки в file descriptor с доюавлением в конце перехода на новую строку.  
**ft_putnbr.c** - печать в stdout переданного числа.  
**ft_putnbr_fd.c**- печать в file descriptor переданного числа.  
**ft_putstr.c** - печать переданной строки в stdout.  
**ft_putstr_fd.c** - печать переданной строки в file descriptor.  
**ft_strcat.c** - конкатенация переданных строк (в первой строке должно быть достаточно места для добавления второй строки).  
**ft_strchr.c** - возвращает указатель на первый встреченный символ, переданный в качестве аргумента, или NULL если данного символа в строке нет.  
**ft_strclr.c** - очищает переданную строку.  
**ft_strcmp.c** - сравнивает переданные строки. Возвращает 0 если строки идентичны.
**ft_strcpy.c** - копирует одну строку во вторую (во второй строке должно быть достаточно места для копирования).  
**ft_strdel.c** - освобождает память выделенную под строку.
**ft_strdup.c** - выделяет память под размер переданной строки и "зануляет" её.  
**ft_strequ.c** - возвращает 1, если переданные строки идентичны, 0 - если нет.  
**ft_striter.c** - применяет к каждому символу строки функцию, указатель на которую нам передали.  
**ft_striteri.c** - применяет к каждому символу строки функцию, указатель на которую нам передали. В строке перемещается по индексу (функция применяемая для каждого символа строки тоже должна оперировать с индексом).  
**ft_strjoin.c** - создает новую строку, являющуюся конкатенацией переданных.
**ft_strlcat.c** - 
**ft_strlen.c** - определяет длину строки.
**ft_strmap.c** - создает строку, получающуюся применением к каждому символу строки функцию, указатель на которую нам передали. 
**ft_strmapi.c** - создает строку, получающуюся применением к каждому символу строки функцию, указатель на которую нам передали. В строке перемещается по индексу (функция применяемая для каждого символа строки тоже должна оперировать с индексом).  
**ft_strncat.c** - конкатенирует к первой строке первые n символов второй строки (в первой строке должно быть достаточно места для копирования).  
**ft_strncmp.c** - сравнивает первые n символов строк. Возвращает 0, если они равны.  
**ft_strncpy.c** - копирует первые n символов первой строки во вторую (во второй строке должно быть достаточно места для копирования).  
**ft_strnequ.c** - возвращает 1, если первые n символов переданных строк идентичны, 0 - если нет.  
**ft_strnew.c** - создание новой строки заданной длины.  
**ft_strnstr.c** - ищет вхождение второй строки в первую в первых n символах первой строки.  
**ft_strrchr.c** - возвращает указатель на последний встреченный символ, переданный в качестве аргумента, или NULL если данного символа в строке нет.  
**ft_strsplit.c** - разделяет переданную строки на массив отдельных подстрок, разбитых по переданному символу.  
**ft_strstr.c** - ищет вхождение второй строки в первую.  
**ft_strsub.c** - создает новую строку, полученную выделением подстроки из переданной строки (начиная с заданного по индексу символа, и длинной n сиволов).   
**ft_strtrim.c** - убирает из начала и конца строки "пробельные" символы.  
**ft_tolower.c** - переводит переданный символ в нижний регистр.  
**ft_toupper.c** -  переводит переданный символ в верхний регистр.
**libft.h**
**page_del.c** - удаляет переданный список и освобождает память, выделенную под него.  
**word_count.c** - возвращает количество подстрок в строке, полученных при заданном разделителе.  
**word_len.c** - возвращает длину подстроки между заданными разделителями.  

