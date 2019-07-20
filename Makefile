# Makefile

SHELL := sh -e
SCRIPTS = "debian/postinst configure" "debian/postrm remove"
CFLAGS = -lm `pkg-config --cflags --libs gtk+-2.0`
PROJECT_NAME = mango-paola
BIN_NAME = mango-paola
SHR_DIR = $(DESTDIR)/usr/share/games/$(PROJECT_NAME)
VAR_DIR = $(DESTDIR)/var/games/$(PROJECT_NAME)
BIN_DIR = $(DESTDIR)/usr/games

all: build

build:

	gcc $(CFLAGS) -o $(BIN_NAME) codigoFuente/bitmma3.c -Wall -O2

install:

	mkdir -p $(SHR_DIR)/
	mkdir -p $(VAR_DIR)/
	mkdir -p $(BIN_DIR)/
	mkdir -p $(DESTDIR)/usr/share/applications/
	mkdir -p $(DESTDIR)/usr/share/icons/

	# Copiamos la data fija en /usr/share
	cp -rf b01/ b02/ b03/ imagenes/ libros/ m01/ m02/ m03/ \
	partidasPGN/ sonidos/ ayuda/ $(SHR_DIR)
	
	# Copiamos la data variable en /var
	cp -f ultimoestado.obj $(VAR_DIR)/
	
	# Copiamos el ejecutable en /usr/games
	cp -f $(BIN_NAME) $(BIN_DIR)/$(BIN_NAME)

	cp -f $(BIN_NAME).desktop.in $(DESTDIR)/usr/share/applications/$(BIN_NAME).desktop
	cp -f $(BIN_NAME).xpm $(DESTDIR)/usr/share/icons/

uninstall:

	rm -r $(SHR_DIR)
	rm -r $(VAR_DIR)
	rm $(BIN_DIR)/$(BIN_NAME)
	rm $(DESTDIR)/usr/share/applications/$(BIN_NAME).desktop
	rm $(DESTDIR)/usr/share/icons/$(BIN_NAME).xpm

clean:

	rm -f $(BIN_NAME)

reinstall: uninstall install
