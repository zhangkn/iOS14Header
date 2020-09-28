/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSMapTable;

@interface UIWebGeolocationPolicyDecider : NSObject {

	NSMutableDictionary* _sites;
	NSMutableArray* _challenges;
	NSMapTable* _activeChallenges;

}
+(void)initialize;
+(id)sharedPolicyDecider;
-(void)_save;
-(void)_load;
-(void)dealloc;
-(void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4 ;
-(id)_siteFile;
-(id)init;
-(id)_siteFileInContainerDirectory:(id)arg1 creatingIntermediateDirectoriesIfNecessary:(BOOL)arg2 ;
-(BOOL)_isAuthorizationDate:(id)arg1 inclusivelyBetweenDate:(id)arg2 andDate:(id)arg3 ;
-(void)_executeNextChallenge;
-(long long)_getChallengeCountFromHistoryForToken:(id)arg1 requestingURL:(id)arg2 ;
-(void)clearSafariCache;
-(BOOL)_getAuthorizationStatusForToken:(id)arg1 requestingURL:(id)arg2 promptInfo:(id*)arg3 ;
-(void)_addChallengeCount:(long long)arg1 forToken:(id)arg2 requestingURL:(id)arg3 ;
-(void)didDenyGeolocationForPromptInfo:(id)arg1 ;
-(void)_decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 view:(id)arg3 listener:(id)arg4 ;
-(void)decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 view:(id)arg3 listener:(id)arg4 ;
-(void)clearAuthorizationsAddedBetween:(id)arg1 and:(id)arg2 ;
-(void)didAuthorizeGeolocationForPromptInfo:(id)arg1 ;
-(BOOL)getAuthorizationStatusForOrigin:(id)arg1 requestingURL:(id)arg2 promptInfo:(id*)arg3 ;
-(void)decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 window:(id)arg3 listener:(id)arg4 ;
-(void)clearCache;
-(void)clearAllCaches;
@end
