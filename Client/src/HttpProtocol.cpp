/*
 * HttpProtocol.cpp
 *
 *  Created on: Jan 13, 2015
 *      Author: Michael Fildstein Id:309161594
 */

#include "HttpProtocol.h"

#include<string>

using namespace std;



HttpProtocol::HttpProtocol() {



}

//<RequestType> <RequestURI> <HTTPVersion>
//<HeaderName 1 >: <HeaderValue 1>
//...
//<HeaderName n >: <HeaderValue n>
//<MessageBody>
//$

//string httpPostWrap = requestType + " " + requestURI + " " + this. " \n ";
//	return httpPostWrap;


//POST /login.jps HTTP/1.1
//
//UserName=AldoRaine&Phone=495558298
//$

string HttpProtocol::httpPostWrap(string requestURI ,string headers , string messageBody  ){
	string httpPostWrap = this->_requestTypePost + " " + requestURI + " " + this->_HTTPVersion + " " + "\n" + headers + "\n" + messageBody + "\n$";
	return httpPostWrap;
}

string HttpProtocol::httpGetWrap(string requestURI ,string headers){
	string httpGetWrap = this->_requestTypeGet + " " + requestURI + " "
			+ this->_HTTPVersion + " " + "\n" + headers + "\n" + "\n$";
	return httpGetWrap;
}



HttpProtocol::~HttpProtocol() {
	// TODO Auto-generated destructor stub
}

