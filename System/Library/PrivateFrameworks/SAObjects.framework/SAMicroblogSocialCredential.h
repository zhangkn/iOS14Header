/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSString;

@interface SAMicroblogSocialCredential : AceObject <SABackgroundContextObject>

@property (nonatomic,copy) NSString * accessToken; 
@property (nonatomic,copy) NSString * personalizationPermission; 
@property (nonatomic,copy) NSString * socialNetwork; 
@property (nonatomic,copy) NSString * tokenSecret; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)socialCredentialWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)socialCredential;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSString *)personalizationPermission;
-(void)setPersonalizationPermission:(NSString *)arg1 ;
-(NSString *)tokenSecret;
-(void)setTokenSecret:(NSString *)arg1 ;
-(NSString *)accessToken;
-(NSString *)socialNetwork;
-(void)setSocialNetwork:(NSString *)arg1 ;
-(void)setAccessToken:(NSString *)arg1 ;
@end

