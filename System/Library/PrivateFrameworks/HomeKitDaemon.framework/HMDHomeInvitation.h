/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class HMDHome, HMHomeInvitationData, NSObject, HMFTimer, NSArray, NSUUID, NSDate, NSString;

@interface HMDHomeInvitation : HMFObject <HMFTimerDelegate, NSSecureCoding> {

	long long _invitationState;
	HMDHome* _home;
	HMHomeInvitationData* _invitationData;
	NSObject*<OS_dispatch_queue> _clientQueue;
	/*^block*/id _resolutionHandler;
	/*^block*/id _expirationHandler;
	HMFTimer* _timer;
	NSArray* _operations;

}

@property (assign,nonatomic,__weak) HMDHome * home;                                 //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HMHomeInvitationData * invitationData;                 //@synthesize invitationData=_invitationData - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,copy) id resolutionHandler;                                    //@synthesize resolutionHandler=_resolutionHandler - In the implementation block
@property (nonatomic,copy) id expirationHandler;                                    //@synthesize expirationHandler=_expirationHandler - In the implementation block
@property (nonatomic,retain) HMFTimer * timer;                                      //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSArray * operations;                                  //@synthesize operations=_operations - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier; 
@property (nonatomic,copy,readonly) NSDate * startDate; 
@property (nonatomic,copy) NSDate * endDate; 
@property (assign,nonatomic) long long invitationState;                             //@synthesize invitationState=_invitationState - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (getter=isPending,nonatomic,readonly) BOOL pending; 
@property (getter=isAccepted,nonatomic,readonly) BOOL accepted; 
@property (getter=isDeclined,nonatomic,readonly) BOOL declined; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSUUID *)identifier;
-(BOOL)isPending;
-(void)setTimer:(HMFTimer *)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(void)setExpirationHandler:(id)arg1 ;
-(id)expirationHandler;
-(void)decline;
-(HMFTimer *)timer;
-(HMHomeInvitationData *)invitationData;
-(id)initWithCoder:(id)arg1 invitationData:(id)arg2 ;
-(void)setInvitationData:(HMHomeInvitationData *)arg1 ;
-(void)accept;
-(void)setOperations:(NSArray *)arg1 ;
-(NSArray *)operations;
-(id)resolutionHandler;
-(void)setResolutionHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSDate *)endDate;
-(BOOL)isExpired;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(BOOL)isDeclined;
-(void)setInvitationState:(long long)arg1 ;
-(long long)invitationState;
-(void)_clearTimer;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setHome:(HMDHome *)arg1 ;
-(void)expire;
-(void)setEndDate:(NSDate *)arg1 ;
-(HMDHome *)home;
-(BOOL)isAccepted;
-(void)_configureTimer;
-(id)initWithInvitationData:(id)arg1 forHome:(id)arg2 ;
-(void)_resolve:(BOOL)arg1 ;
-(void)updateInvitationState:(long long)arg1 ;
-(BOOL)refreshDisplayName;
-(void)notifyStateChangedForMessage:(id)arg1 ;
-(void)updateTimer:(unsigned long long)arg1 clientQueue:(id)arg2 ;
-(id)describeWithFormat;
@end

