/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbabayan <mbabayan@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:32:58 by mbabayan          #+#    #+#             */
/*   Updated: 2024/08/06 13:49:57 by mbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../minishell.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <string.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <readline/history.h>
#include <readline/readline.h>
#include <sys/syslimits.h>

/// Remove all the other header includes and keep
/// minishell header when implemented. 
int	pwd(void)
{
	char	str[1024];

	if (getcwd(str, sizeof(str)) != NULL)
	{
		printf("%s\n", str);
		return (0);
	}
	else
		return (1);
}
