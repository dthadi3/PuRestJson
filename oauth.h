/*
Author:
Thomas Mayer <thomas@residuum.org>

Copyright (c) 2011-2013 Thomas Mayer

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

*/

#include <stdlib.h>
#include <string.h>
#include <json/json.h>
#include <curl/curl.h>
#include <pthread.h>
#include <oauth.h>

#include "purest_json.h"

struct _oauth;
typedef struct _oauth t_oauth;

APIEXPORT void APICALL *oauth_new(t_symbol *sel, int argc, t_atom *argv);
APIEXPORT void APICALL oauth_free(t_oauth *x, t_symbol *sel, int argc, t_atom *argv);

APIEXPORT void APICALL oauth_command(t_oauth *x, t_symbol *sel, int argc, t_atom *argv); 
APIEXPORT void APICALL oauth_timeout(t_oauth *x, t_symbol *sel, int argc, t_atom *argv);
APIEXPORT void APICALL oauth_url(t_oauth *x, t_symbol *sel, int argc, t_atom *argv);
APIEXPORT void APICALL oauth_method(t_oauth *x, t_symbol *sel, int argc, t_atom *argv);
APIEXPORT void APICALL oauth_sslcheck(t_oauth *x, t_symbol *sel, int argc, t_atom *argv);