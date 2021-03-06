/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomePubSub/BiomePubSub-Structs.h>
#import <libobjc.A.dylib/BPSSubscriber.h>
#import <libobjc.A.dylib/BPSCancellable.h>

@class BPSSubscriptionStatus, NSString;

@interface BPSSink : NSObject <BPSSubscriber, BPSCancellable> {

	os_unfair_lock_s _lock;
	BPSSubscriptionStatus* _status;
	/*^block*/id _receivedCompletion;
	/*^block*/id _receivedValue;
	long long _demand;

}

@property (nonatomic,copy) id receivedCompletion;                         //@synthesize receivedCompletion=_receivedCompletion - In the implementation block
@property (nonatomic,copy) id receivedValue;                              //@synthesize receivedValue=_receivedValue - In the implementation block
@property (assign,nonatomic) long long demand;                            //@synthesize demand=_demand - In the implementation block
@property (nonatomic,retain) BPSSubscriptionStatus * status;              //@synthesize status=_status - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newBookmark;
-(id)initWithReceiveBookmarkedCompletion:(/*^block*/id)arg1 receiveInput:(/*^block*/id)arg2 ;
-(void)cancel;
-(void)setStatus:(BPSSubscriptionStatus *)arg1 ;
-(long long)receiveInput:(id)arg1 ;
-(BPSSubscriptionStatus *)status;
-(void)receiveCompletion:(id)arg1 ;
-(long long)demand;
-(id)init;
-(void)receiveSubscription:(id)arg1 ;
-(id)initWithReceiveCompletion:(/*^block*/id)arg1 receiveInput:(/*^block*/id)arg2 ;
-(void)setDemand:(long long)arg1 ;
-(id)receivedCompletion;
-(id)receivedValue;
-(void)setReceivedCompletion:(id)arg1 ;
-(void)setReceivedValue:(id)arg1 ;
@end

