/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol HKOrganDonationConnectionManagerDelegate;
@class NSString, NSMapTable, NSURLSession, NSTimer;

@interface HKOrganDonationConnectionManager : NSObject <NSURLSessionDataDelegate> {

	NSString* _refreshToken;
	BOOL _accessTokenStatus;
	long long _tokenRefreshRetryCount;
	NSMapTable* _taskQueue;
	long long _managerState;
	id<HKOrganDonationConnectionManagerDelegate> _delegate;
	NSURLSession* _defaultSession;
	NSString* _accessToken;
	NSTimer* _accessTokenInvalidationTimer;

}

@property (nonatomic,retain) NSURLSession * defaultSession;                                             //@synthesize defaultSession=_defaultSession - In the implementation block
@property (nonatomic,retain) NSString * refreshToken; 
@property (nonatomic,retain) NSString * accessToken;                                                    //@synthesize accessToken=_accessToken - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * accessTokenInvalidationTimer;                             //@synthesize accessTokenInvalidationTimer=_accessTokenInvalidationTimer - In the implementation block
@property (assign,nonatomic,__weak) id<HKOrganDonationConnectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_host;
+(id)_port;
+(id)_scheme;
+(long long)_hostConfiguration;
+(id)_tokenWithIdentifier:(id)arg1 shouldReturnData:(BOOL)arg2 ;
+(id)_gatewayHost;
+(BOOL)_organDonationDisabled;
+(id)_keychainQueryDictionaryForIdentifier:(id)arg1 ;
+(BOOL)isOrganDonationRegistrationAvailable;
+(BOOL)hasStoredRegistrant;
+(void)openDonateLifeMicroSiteInSafari;
+(long long)registrationSubmissionHostConfiguration;
+(void)refreshOrganDonationFeatureAvailability;
+(void)organDonationSignificantDate:(/*^block*/id)arg1 ;
+(id)storeDemoModeModifiedDate;
+(BOOL)shouldShowStoreDemoOrganDonation;
-(id)payload;
-(NSURLSession *)defaultSession;
-(NSString *)accessToken;
-(NSString *)refreshToken;
-(id)init;
-(void)setDelegate:(id<HKOrganDonationConnectionManagerDelegate>)arg1 ;
-(void)_transitionToState:(long long)arg1 ;
-(id<HKOrganDonationConnectionManagerDelegate>)delegate;
-(void)cleanUp;
-(void)setAccessToken:(NSString *)arg1 ;
-(void)setDefaultSession:(NSURLSession *)arg1 ;
-(void)_refreshAccessTokenIfNeeded;
-(void)_sendQueuedTokenDependentRequests;
-(void)_flushTokenDependentRequestsWithStatus:(long long)arg1 ;
-(id)_urlWithPath:(id)arg1 ;
-(id)_registrationJWTWithRegistrant:(id)arg1 ;
-(id)_jsonBodyPostRequestWithURL:(id)arg1 method:(id)arg2 postData:(id)arg3 bearerToken:(id)arg4 ;
-(void)setRefreshToken:(NSString *)arg1 ;
-(void)_updateAccessTokenAndScheduleInvalidationTimer:(id)arg1 expiresIn:(double)arg2 ;
-(id)_genericJSONDataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)refreshBearerTokenWithRefreshToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_refreshBearerTokenJWTWithRefreshToken:(id)arg1 ;
-(id)_getRequestWithURL:(id)arg1 bearerToken:(id)arg2 ;
-(void)_scheduleAccessTokenDependentRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_handleURLTaskError:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_jsonObjectWithData:(id)arg1 response:(id)arg2 ;
-(void)_handleServerErrorWithResponse:(id)arg1 originRequest:(id)arg2 payload:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_invalidateAccessToken:(id)arg1 ;
-(void)_upsertTokenInKeychain:(id)arg1 identifier:(id)arg2 ;
-(void)_deleteTokenWithIdentifier:(id)arg1 ;
-(id)jwtPayloadWithRegistrant:(id)arg1 ;
-(id)_jwtWithPayload:(id)arg1 grantType:(id)arg2 ;
-(id)jwtHeader;
-(id)_base64URLEncoding:(id)arg1 ;
-(void)submitRegistrant:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reloadRegistrantWithCompletion:(/*^block*/id)arg1 ;
-(void)updateRegistrantWithParams:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteRegistrantWithCompletion:(/*^block*/id)arg1 ;
-(void)openRegisterMeSiteInSafariIfAuthenticated;
-(NSTimer *)accessTokenInvalidationTimer;
-(void)setAccessTokenInvalidationTimer:(NSTimer *)arg1 ;
@end
