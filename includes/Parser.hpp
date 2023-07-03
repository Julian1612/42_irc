#ifndef PARSER_H
# define PARSER_H

# include <exception>
# include <string>
# include <vector>
# include "Client.hpp"

class Parser {

public:

	Parser( std::string Buffer, Client client );
	~Parser( void );

	void parseMsg( Client client );
	void prefixHandler( std::string Prefix );
	void commandHandler( std::string Command );
	void paramHandler( std::string Param );
	void trailingHandler( std::string trailing );
	void isValidCommandLine( Client client  );
	void sendError( Client client);
	void splitParam( void );

	void checkPASS( Client client );
	void checkNICK( Client client );
	void checkUSER( Client client );
	void checkQUIT( Client client );
	void checkJOIN( Client client );
	void checkMODE( Client client );
	void checkTOPIC( Client client );
	void checkINVITE( Client client );
	void checkKICK( Client client );
	void checkPRIVMSG( Client client );
	void checkPING( Client client );
	void checkPART( Client client );

	std::string &getCMD( void );
	std::vector<std::string> &getParam( void );
	std::string &getPrefix( void );
	std::string &getTrailing( void );

	class parserErrorException : std::exception {

	public:

		parserErrorException( std::string error );
		~parserErrorException( void ) throw();
		virtual const char *what() const throw();

	private:

		std::string _error;

	};

private:

	std::string _input; // ganzer command
	std::string _prefix; // alles was vor commad
	std::string _command; // zb join, kick etc
	std::vector<std::string> _parameter; // alles nach dem command zb #test (server name)
	std::string _trailing;	// alles was mit doppelpunkt anfängt im commd
};

#endif
