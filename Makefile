CC	= /opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j

BINS	= LD45.gb
BONUS =
SOURCE =  src/main.o src/box_collision.o src/game_screen.o
ASSETS = data/sprites/font.o
LVLS =

all:	  $(LVLS) $(SOURCE) $(ASSETS) $(BONUS) $(BINS)

LD45.gb:
	$(CC) -Wl-yt3 -Wl-yo16 -Wl-ya1 -o $(BINS) $(LVLS) $(SOURCE) $(BONUS) $(ASSETS)


levels/%.o:	levels/%.c
	$(CC) -Wa-l -Wf-bo6 -c -o $@ $<


%.o:	%.c
	$(CC) -c -o $@ $<

data/sprites/*.o: data/sprites/*.c
	$(CC) -Wa-l -Wf-bo5 -c -o $@ $<

src/game_screen.o: src/game_screen.c
	$(CC) -Wa-l -Wf-bo7 -c -o $@ $<


src/credits.o: src/credits.c
	$(CC) -Wa-l -Wf-bo7 -c -o $@ $<

src/kwakwa_screen.o: src/kwakwa_screen.c
	$(CC) -Wa-l -Wf-bo7 -c -o $@ $<

src/title_screen.o: src/title_screen.c
	$(CC) -Wa-l -Wf-bo7 -c -o $@ $<

data/staffroll.o: data/staffroll.s
	$(CC) -Wa-l -Wf-bo8 -c -o data/staffroll.o data/staffroll_merge.s
data/kwakwa_logo.o:
	$(CC) -Wa-l -Wf-bo3 -c -o data/kwakwa_logo.o data/kwakwa_logo.s

src/titlescreen2.o:
	$(CC) -Wa-l -Wf-bo3 -c -o src/titlescreen2.o data/titlescreen2_merge.s

data/title_screen_music.o:
	$(CC) -Wa-l -Wf-bo8 -c -o data/title_screen_music.o data/title_screen_music.c

data/press_start.o: data/press_start.s
	$(CC) -Wa-l -Wf-bo5 -c -o $@ $<

src/gbt_player.o: src/gbt_player.s
	$(CC) -Wa-l -c -o src/gbt_player.o src/gbt_player.s

src/gbt_player_bank1.o: src/gbt_player_bank1.s
	$(CC) -Wa-l -Wf-bo4 -c -o src/gbt_player_bank1.o src/gbt_player_bank1.s

data/music_output.o:  data/music_output.c
	$(CC) -Wa-l -Wf-bo2 -c -o data/music_output.o data/music_output.c

src/sound.o: src/sound.c
	$(CC) -Wa-l -c -o $@ $<

src/physics.o: src/physics.c
	$(CC) -Wf-bo6 -c -o $@ $<

data/peanut.o: data/peanut.s
	$(CC) -Wa-l -Wf-bo5 -c -o $@ $<

data/white_fur.o: data/white_fur.s
	$(CC) -Wa-l -Wf-bo5 -c -o $@ $<

data/seagull.o: data/seagull.s
	$(CC) -Wa-l -Wf-bo5 -c -o $@ $<

data/guard.o: data/guard.s
	$(CC) -Wa-l -Wf-bo5 -c -o $@ $<

data/background.o: data/background.s
	$(CC) -Wa-l -Wf-bo5 -c -o $@ $<

data/environment.o: data/environment.s
	$(CC) -Wa-l -Wf-bo5 -c -o $@ $<

data/whale_poster.o: data/whale_poster.s
	$(CC) -Wa-l -Wf-bo5 -c -o $@ $<


#data/music_output.c:
#	./tools/mod2gbt/mod2gbt data/template.mod song -c 2

clean:
	rm -f *.o */*.o */*/*.o *.lst *.map *.gb *~ *.rel *.cdb *.ihx *.lnk *.sym *.asm
