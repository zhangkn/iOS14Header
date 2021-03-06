/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BPSSubscriber.h>

@protocol BPSSubscriber;
@class NSString;

@interface _CMLastInnser : NSObject <BPSSubscriber> {

	id<BPSSubscriber> _downstream;
	id _last;

}

@property (nonatomic,retain) id<BPSSubscriber> downstream;              //@synthesize downstream=_downstream - In the implementation block
@property (nonatomic,retain) id last;                                   //@synthesize last=_last - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(long long)receiveInput:(id)arg1 ;
-(id)last;
-(void)receiveCompletion:(id)arg1 ;
-(void)setLast:(id)arg1 ;
-(id<BPSSubscriber>)downstream;
-(void)receiveSubscription:(id)arg1 ;
-(id)initWithDownstream:(id)arg1 ;
@end

