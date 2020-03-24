##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

SRC		=	src/lost/defeat.c							\
			src/lost/button_leave_lost.c				\
			src/lost/button_retry.c						\
			src/collider/collider_htp.c					\
			src/collider/collider_lost.c				\
			src/collider/collider_pause.c				\
			src/collider/collider_game.c				\
			src/collider/collider_menu.c				\
			src/mob/explosion_death_mob.c				\
			src/mob/mooving_mob.c						\
			src/mob/mob.c								\
			src/mob/dead_mob.c							\
			src/music/music.c							\
			src/inventory/inventory.c					\
			src/pause/button_continue.c					\
			src/pause/button_leave_pause.c				\
			src/pause/pause_menu.c						\
			src/pause/button_home.c						\
			src/menu/how_to_play/how_to_play.c			\
			src/menu/how_to_play/button_htp_home.c		\
			src/menu/button_how_to_play.c				\
			src/menu/button_leave.c						\
			src/menu/button_play.c						\
			src/menu/the_menu.c							\
			src/game/button_pause.c						\
			src/mouse/mouse.c							\
			src/game/tower_area/tower_area_1.c			\
			src/game/hud/hud_castle_life.c				\
			src/game/hud/hud_mob.c						\
			src/game/hud/hud_gold.c						\
			src/game/hud/hud_text.c						\
			src/game/the_map.c							\
			src/game/event_defender.c					\
			src/game/my_defender.c						\
			src/game/creat_windows.c					\
			src/game/main.c								\
			src/destroy_and_draw/destroy.c				\
			src/destroy_and_draw/draw_game.c			\
			src/destroy_and_draw/draw_menu_and_pause.c	\
			src/game/clock_anim/clock_anim_mob.c		\
			src/game/clock_anim/clock_anim_explosion.c	\
			src/the_tower/tower.c						\
			src/the_tower/attack_tower.c				\
			documentation.c

NAME	=	my_defender

LIBRARY = 	make -C lib/my

CFLAGS	=	-W -Wall -Wextra -I./include

all:		$(NAME)

$(NAME):
			$(LIBRARY)
			gcc -o $(NAME) $(CFLAGS) $(SRC) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -L ./lib/my/ -lmy -lm
clean:
			$(LIBRARY) clean

fclean:		clean
			rm -f $(NAME)
			$(LIBRARY) fclean

re:			fclean all