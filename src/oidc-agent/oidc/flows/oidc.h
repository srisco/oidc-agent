#ifndef OIDC_H
#define OIDC_H

#include "account/account.h"

char* generatePostData(char* k1, char* v1, ...);
char* generatePostDataFromList(list_t* list);
char* parseTokenResponse(const char* res, struct oidc_account* a,
                         int saveAccessToken, int saveRefreshToken);
char* parseTokenResponseCallbacks(const char* res, struct oidc_account* a,
                                  int saveAccessToken, int saveRefreshToken,
                                  void (*errorHandling)(const char*,
                                                        const char*));

#endif  // OIDC_H
