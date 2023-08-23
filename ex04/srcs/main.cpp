/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:36:41 by nicolas           #+#    #+#             */
/*   Updated: 2023/08/23 12:28:14 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
#include <fstream>

static bool	verify_arguments(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "\033[36m";
		std::cerr << "Usage: ./replace <filename> <string1> <string2>";
		std::cerr << "\033[0m" << std::endl;
		return (1);
	}
	if (!*argv[2])
	{
		std::cerr << "\033[31m";
		std::cerr << "Error: an empty string cannot be targeted.";
		std::cerr << "\033[0m" << std::endl;
		return (1);
	}
	return (0);
}

static bool	open_files(std::fstream &infile,
	std::ofstream &outfile, std::string filename)
{
	infile.open(filename.c_str());
	if (infile.fail())
	{
		std::cerr << "\033[31m";
		std::cerr << "Error: " << filename << " isn't available";
		if (errno == EACCES)
			std::cerr << " (Permission denied)";
		std::cerr << "\033[0m" << std::endl;
		return (1);
	}
	filename = filename + ".replace";
	outfile.open(filename.c_str());
	if (outfile.fail())
	{
		std::cerr << "\033[31m";
		std::cerr << "Error: " << filename << " isn't available";
		if (errno == EACCES)
			std::cerr << " (Permission denied)";
		std::cerr << "\033[0m" << std::endl;
		return (infile.close(), 1);
	}
	return (0);
}

static void	replace(std::fstream &infile, std::ofstream &outfile,
	std::string &substring, std::string &replacement)
{
	std::string	line;
	size_t		start_pos;
	size_t		substring_pos;

	while (getline(infile, line))
	{
		start_pos = 0;
		substring_pos = line.find(substring, start_pos);
		while (substring_pos != std::string::npos)
		{
			line = line.substr(0, substring_pos) + replacement
				+ line.substr(substring_pos + substring.length());
			start_pos = substring_pos + replacement.length();
			substring_pos = line.find(substring, start_pos);
		}
		outfile << line << std::endl;
	}
}

int	main(int argc, char **argv)
{
	std::string		filename;
	std::fstream	infile;
	std::ofstream	outfile;
	std::string		substring;
	std::string		replacement;

	if (verify_arguments(argc, argv))
		return (1);
	filename = argv[1];
	if (open_files(infile, outfile, filename))
		return (1);
	substring = argv[2];
	replacement = argv[3];
	replace(infile, outfile, substring, replacement);
	return (infile.close(), outfile.close(), 0);
}
