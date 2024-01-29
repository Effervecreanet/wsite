#include <sys/types.h>

#include <stdio.h>

#include "wsite_content.h"

/*
 * First field of entry is a string which define the url path of the ressource.
 * The second one is for describing what this ressource is. Is it a html/text
 * page, a video or a image/jpeg content-type? The last one is for specifing
 * the charset of a html page as it was written (encoded) otherwise it should
 * be set to NULL. So it is NULL for image, video and any other ressource. The
 * example that follows is filled with some of http://effervecrea.net
 * ressources.
 */

struct entry entries[] = {

	{ROOT_PAGE, "text/html", "fr-FR", "; charset=ISO-8859-1"},
	{"page1", "text/html/", "fr-FR", "; charset=ISO-8859-1"},
	{"", "", NULL, NULL},
};
