/*
 * HttpProtocol.h
 *
 *  Created on: Jan 13, 2015
 *      Author: Michael Fildstein Id:309161594
 */

#include <string>

#ifndef HTTPPROTOCOL_H_
#define HTTPPROTOCOL_H_

using namespace std;

class HttpProtocol {
public:
	HttpProtocol();
	string  httpPostWrap(string requestURI ,string headers , string messageBody  );
	string 	httpGetWrap(string requestURI ,string headers);
	virtual ~HttpProtocol();
private:
	string _HTTPVersion = 		"HTTP/1.1";
	string _requestTypePost = 	"POST" ;
	string _requestTypeGet = 	"GET";

};

#endif /* HTTPPROTOCOL_H_ */
