make:
	gcc ./generate_data.c
	./a.out
	pip install matplotlib numpy --user >> /tmp/logs
	python plot_data.py
