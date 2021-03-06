/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:54 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class ACFPrincipal, NSDate, NSString, NSNumber, ACFMessage;


@protocol ACCSSOTokenProtocol <NSObject>
@property (nonatomic,retain) ACFPrincipal * principal; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSDate * expirationDate; 
@property (nonatomic,retain) NSString * nonce; 
@property (nonatomic,retain) NSString * sessionToken; 
@property (nonatomic,retain) NSDate * recentAuthenticationDate; 
@property (nonatomic,retain) NSNumber * personID; 
@property (nonatomic,retain) NSNumber * isTwoStepVerificationRequired; 
@property (nonatomic,retain) ACFMessage * initialRequest; 
@property (nonatomic,retain) NSString * userPreferences; 
@property (nonatomic,retain) NSDate * recentUnlockDate; 
@property (nonatomic,retain) NSString * clientSecret; 
@property (nonatomic,retain) NSNumber * clientSecretCreationTimestamp; 
@property (nonatomic,retain) NSNumber * isUserEnrolledFor2SV; 
@property (assign,nonatomic) BOOL longLiveSession; 
@optional
-(NSString *)userPreferences;
-(void)setUserPreferences:(id)arg1;
-(ACFMessage *)initialRequest;
-(NSString *)clientSecret;
-(void)setClientSecret:(id)arg1;
-(NSDate *)recentUnlockDate;
-(void)setRecentUnlockDate:(id)arg1;
-(void)setInitialRequest:(id)arg1;
-(void)setClientSecretCreationTimestamp:(id)arg1;
-(NSNumber *)isUserEnrolledFor2SV;
-(void)setIsUserEnrolledFor2SV:(id)arg1;
-(BOOL)longLiveSession;
-(void)setLongLiveSession:(BOOL)arg1;
-(NSNumber *)clientSecretCreationTimestamp;

@required
-(void)setExpirationDate:(id)arg1;
-(NSNumber *)personID;
-(NSString *)nonce;
-(void)setSessionToken:(id)arg1;
-(NSString *)sessionToken;
-(void)setPersonID:(id)arg1;
-(NSDate *)expirationDate;
-(void)setNonce:(id)arg1;
-(void)setCreationDate:(id)arg1;
-(void)setPrincipal:(id)arg1;
-(ACFPrincipal *)principal;
-(NSDate *)creationDate;
-(NSDate *)recentAuthenticationDate;
-(void)setRecentAuthenticationDate:(id)arg1;
-(NSNumber *)isTwoStepVerificationRequired;
-(void)setIsTwoStepVerificationRequired:(id)arg1;

@end

