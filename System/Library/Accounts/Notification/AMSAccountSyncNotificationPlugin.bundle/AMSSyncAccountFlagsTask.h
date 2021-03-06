/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:07 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Accounts/Notification/AMSAccountSyncNotificationPlugin.bundle/AMSAccountSyncNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>

@protocol AMSBagProtocol;
@class ACAccount;

@interface AMSSyncAccountFlagsTask : AMSTask {

	ACAccount* _account;
	id<AMSBagProtocol> _bag;

}

@property (nonatomic,retain) ACAccount * account;                 //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;              //@synthesize bag=_bag - In the implementation block
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id<AMSBagProtocol>)bag;
-(void)setAccount:(ACAccount *)arg1 ;
-(ACAccount *)account;
-(id)performSync;
-(id)initWithAccount:(id)arg1 bag:(id)arg2 ;
@end

