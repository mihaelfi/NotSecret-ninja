#include <Client.h>
#include "HttpProtocol.h"
#include <string>
#include<iostream>
#include<stdio.h>

using namespace std;

//string HttpProtocol::HttpPostWrap(string requestType , string requestURI ,string headers , string messageBody  ){

int main (){
	string requestType = "POST";
	string requestURI  = "login.jsd";
	string headers	   = "";
	string messageBody = "userName=Michael&Phone=0545989794";



	HttpProtocol* protocol = new HttpProtocol();

	cout << protocol->httpPostWrap(requestURI,headers,messageBody);
	cout << "\n\n\n";

//	string requestType = "POST";
	requestURI  = "Queue.jsp";
	headers	   = "Cookie: user_auth= 9e234af900534eff";
	messageBody = "userName=Michael&Phone=0545989794";

	cout << protocol->httpGetWrap(requestURI,headers);

	delete protocol;

}

Client::Client() {
	// TODO Auto-generated constructor stub

}

Client::~Client() {
	// TODO Auto-generated destructor stub
}

