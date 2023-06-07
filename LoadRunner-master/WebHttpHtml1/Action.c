Action()
{

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("www.vfsglobalirelandvisa.com", 
		"URL=https://www.vfsglobalirelandvisa.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/images/ireland.png", "Referer=https://www.vfsglobalirelandvisa.com/css/style.css", ENDITEM, 
		"Url=/images/bg.png", "Referer=https://www.vfsglobalirelandvisa.com/css/style.css", ENDITEM, 
		LAST);

	return 0;
}