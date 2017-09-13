#ifndef OIDC_H
#define OIDC_H

#include <time.h>

#include "account.h"
#include "oidc_error.h"

#define FORCE_NEW_TOKEN -1

oidc_error_t retrieveAccessToken(struct oidc_account* p, time_t min_valid_period) ;
oidc_error_t retrieveAccessTokenRefreshFlowOnly(struct oidc_account* p, time_t min_valid_period) ;
oidc_error_t tryRefreshFlow(struct oidc_account* p) ;
oidc_error_t tryPasswordFlow(struct oidc_account* p) ;
oidc_error_t refreshFlow(struct oidc_account* p) ;
oidc_error_t passwordFlow(struct oidc_account* p) ;
int tokenIsValidForSeconds(struct oidc_account p, time_t min_valid_period);
char* dynamicRegistration(struct oidc_account* account, int useGrantType) ;
oidc_error_t revokeToken(struct oidc_account* account) ;
oidc_error_t getEndpoints(struct oidc_account* account) ;

#endif //OIDC_H
