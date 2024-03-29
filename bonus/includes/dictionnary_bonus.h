/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionnary_bonus.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdidi <ialdidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:59:11 by ialdidi           #+#    #+#             */
/*   Updated: 2024/03/20 13:32:08 by ialdidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTIONNARY_BONUS_H
# define DICTIONNARY_BONUS_H

# define WINDOW_TITLE "Sooo loooooong!"
# define VICTORY_MESSAGE "Congratulations!!"
# define LOSS_MESSAGE "Game over!!"

# define IMG_SPACE "bonus/textures/SPACE.xpm"
# define IMG_WALL "bonus/textures/WALL.xpm"
# define IMG_EXIT "bonus/textures/EXIT.xpm"
# define IMG_PLAYER_W "bonus/textures/player/PLAYER_UP.xpm"
# define IMG_PLAYER_A "bonus/textures/player/PLAYER_LEFT.xpm"
# define IMG_PLAYER_S "bonus/textures/player/PLAYER_DOWN.xpm"
# define IMG_PLAYER_D "bonus/textures/player/PLAYER_RIGHT.xpm"
# define IMG_ENEMY "bonus/textures/ENEMY.xpm"

# define BLOCK_SIZE 32

# define VALID 1
# define NOT_VALID 0

enum	e_keys
{
	A_KEY,
	S_KEY,
	D_KEY,
	W_KEY = 13,
	ESC_KEY = 53,
};

enum	e_events
{
	ON_KEYDOWN = 2,
	ON_KEYUP = 3,
	ON_DESTROY = 17
};

#endif
