/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSHashable.h>

@class NSString, ACAccount;

@interface AMSAccountsChangedResult : NSObject <AMSHashable> {

	ACAccount* _account;

}

@property (nonatomic,readonly) ACAccount * account;                       //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSString * hashedDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)hashedDescription;
-(ACAccount *)account;
-(id)initWithAccount:(id)arg1 ;
@end

