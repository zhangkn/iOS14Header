/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:46 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyPreferences/TPSTelephonyController.h>
#import <libobjc.A.dylib/CoreTelephonyClientSubscriberDelegate.h>

@class NSString, CTXPCServiceSubscriptionContext;

@interface TPSSubscriberTelephonyController : TPSTelephonyController <CoreTelephonyClientSubscriberDelegate> {

	BOOL _SIMPasscodeLockEnabled;
	long long _SIMPasscodeRemainingAttempts;
	NSString* _SIMStatus;
	CTXPCServiceSubscriptionContext* _subscriptionContext;

}

@property (nonatomic,readonly) CTXPCServiceSubscriptionContext * subscriptionContext;                                               //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (assign,setter=IMPasscodeLockEnabled,getter=isSIMPasscodeLockEnabled,nonatomic) BOOL SIMPasscodeLockEnabled;              //@synthesize SIMPasscodeLockEnabled=_SIMPasscodeLockEnabled - In the implementation block
@property (assign,setter=IMPasscodeRemainingAttempts,nonatomic) long long SIMPasscodeRemainingAttempts;                             //@synthesize SIMPasscodeRemainingAttempts=_SIMPasscodeRemainingAttempts - In the implementation block
@property (setter=IMStatus,nonatomic,copy) NSString * SIMStatus;                                                                    //@synthesize SIMStatus=_SIMStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(void)simPinChangeRequestDidComplete:(id)arg1 success:(BOOL)arg2 ;
-(void)simLockSaveRequestDidComplete:(id)arg1 success:(BOOL)arg2 ;
-(void)simPinEntryErrorDidOccur:(id)arg1 status:(id)arg2 ;
-(void)simPukEntryErrorDidOccur:(id)arg1 status:(id)arg2 ;
-(NSString *)SIMStatus;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(id)init;
-(void)setSIMStatus:(NSString *)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(id)getSIMStatus;
-(void)fetchSIMPasscodeLockEnabled;
-(void)fetchSIMPasscodeRemainingAttempts;
-(id)getSIMPasscodeRemainingAttemptsValue;
-(void)changePIN:(id)arg1 newPin:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSIMLockEnabled:(BOOL)arg1 pin:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)getSIMPasscodeLockEnabledValueWithError:(id*)arg1 ;
-(void)setSIMPasscodeLockEnabled:(BOOL)arg1 ;
-(void)fetchSIMPasscodeLockEnabledWithCompletion:(/*^block*/id)arg1 ;
-(id)getSIMPasscodeRemainingAttemptsValueWithError:(id*)arg1 ;
-(void)setSIMPasscodeRemainingAttempts:(long long)arg1 ;
-(void)fetchSIMPasscodeRemainingAttemptsWithCompletion:(/*^block*/id)arg1 ;
-(id)getSIMStatusWithError:(id*)arg1 ;
-(void)fetchSIMStatusWithCompletion:(/*^block*/id)arg1 ;
-(id)getSIMPasscodeLockEnabledValue;
-(BOOL)isSIMPasscodeLockEnabled;
-(long long)SIMPasscodeRemainingAttempts;
-(void)changePIN:(id)arg1 newPin:(id)arg2 ;
-(void)setSIMLockEnabled:(BOOL)arg1 pin:(id)arg2 ;
-(void)presentSIMPasscodeAlert;
-(void)fetchSIMStatus;
@end
