all: controller

controller: YT-DLP_controller.c
	gcc YT-DLP_controller.c -o controller

clean:
	rm -f controller
