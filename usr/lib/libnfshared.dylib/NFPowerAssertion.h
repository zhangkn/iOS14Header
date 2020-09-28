/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_os_transaction;
#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
@class NSMutableDictionary, NSObject;

@interface NFPowerAssertion : NSObject {

	unsigned _powerNotificationConnection;
	IONotificationPortRef _powerNotificationPort;
	unsigned _powerNotificationNotifier;
	unsigned _assertionID;
	NSMutableDictionary* _assertionHolders;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_os_transaction> _powerAssertTransaction;
	BOOL _enableDebug;

}

@property (assign,nonatomic) BOOL enableDebug;              //@synthesize enableDebug=_enableDebug - In the implementation block
+(id)sharedPowerAssertion;
-(void)releasePowerAssertion:(id)arg1 ;
-(void)setEnableDebug:(BOOL)arg1 ;
-(id)dumpState;
-(BOOL)enableDebug;
-(id)init;
-(void)holdPowerAssertion:(id)arg1 ;
-(id)assertionHolders;
@end
