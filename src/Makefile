UNAME:=$(shell uname -s)
ifeq ($(UNAME),Linux)
	LFLAGS=-lcheck -lsubunit -lrt -lm -lpthread
	LEAK=valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all --log-file="leak.log"
	SYSFLAG=-D LINUX
endif
ifeq ($(UNAME),Darwin)
	LFLAGS=-lcheck -lm
	LEAK=leaks -quiet -atExit --
	SYSFLAG=-D APPLE
endif
CFLAGS=-Wall -Werror -Wextra
GFLAGS=-fprofile-arcs -ftest-coverage
SOURCES=s21_math.c

all: s21_math.a

style:
	clang-format -n -style=Google *.c *.h

style_force:
	clang-format -style=Google -dump-config > .clang-format
	clang-format -i *.c *.h

s21_math.a: clean
	gcc  $(SYSFLAG) $(CFLAGS) -c $(SOURCES)
	ar rc s21_math.a *.o
	ranlib s21_math.a
	rm -f *.o

cppcheck:
	cppcheck --enable=all *.c

gcov_report: clean
	gcc $(GFLAGS) $(CFLAGS) $(SYSFLAG) $(SOURCES) test.c $(LFLAGS) -o test
	-./test > test.log
	bash test_log.sh
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info
	open report/index.html
	
test: s21_math.a
	gcc $(SYSFLAG) $(CFLAGS) test.c -L. s21_math.a $(LFLAGS) -o test
	-./test > test.log
	bash test_log.sh

localtest: s21_math.a
	gcc $(SYSFLAG) $(CFLAGS) localtest.c -L. s21_math.a $(LFLAGS) -o test
	$(LEAK) ./test

leaks: s21_math.a
	gcc $(SYSFLAG) $(CFLAGS) test.c -L. s21_math.a $(LFLAGS) -o test
	$(LEAK) ./test > test.log
	bash test_log.sh
	bash test_leak.sh

rebuild: clean gcov_report

clean:
	rm -f test s21_math.a libs21_math.a *.gc* test.info log.xml test.log leak.log
	rm -f -rf report
