/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 19:04:48 by exam              #+#    #+#             */
/*   Updated: 2018/11/07 20:48:40 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int						i;
	int						n;
	int						l;
	unsigned long long		res;

	i = 0;
	n = 0;
	l = 0;
	res = 0;
	while (str[i] == 32 || str[i] == 9 || str[i] == 10)
		i++;
	if ((str[i] == 45 || str[i] == 43) && (str[i + 1] > 47 && str[i + 1] < 58))
		n = (str[i++] == '-') ? -1 : 1;
	while (str[i] == '0')
		i++;
	while (str[i] && (str[i] > 47 && str[i] < 58))
		res = (l++ >= 0) ? res * 10 + (str[i++] - '0') : res;
	if (res > 9223372036854775807 || l > 19)
		return (n == -1) ? 0 : -1;
	return ((n == -1) ? (int)-res : (int)res);
}