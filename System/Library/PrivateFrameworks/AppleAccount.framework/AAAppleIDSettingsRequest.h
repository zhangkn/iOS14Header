/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccountStore, ACAccount;

@interface AAAppleIDSettingsRequest : AARequest {

	ACAccountStore* _store;
	BOOL _forceGSToken;
	ACAccount* _grandSlamAccount;

}

@property (nonatomic,readonly) ACAccount * grandSlamAccount;              //@synthesize grandSlamAccount=_grandSlamAccount - In the implementation block
@property (assign,nonatomic) BOOL forceGSToken;                           //@synthesize forceGSToken=_forceGSToken - In the implementation block
+(Class)responseClass;
-(id)urlRequest;
-(BOOL)forceGSToken;
-(id)initWithGrandSlamAccount:(id)arg1 accountStore:(id)arg2 ;
-(ACAccount *)grandSlamAccount;
-(void)setForceGSToken:(BOOL)arg1 ;
@end
