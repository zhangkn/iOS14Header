/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomePubSub/BPSFilterProducer.h>

@interface _BPSFilterInner : BPSFilterProducer {

	/*^block*/id _isIncluded;

}

@property (nonatomic,readonly) id isIncluded;              //@synthesize isIncluded=_isIncluded - In the implementation block
-(id)initWithDownstream:(id)arg1 isIncluded:(/*^block*/id)arg2 ;
-(id)isIncluded;
-(id)receiveNewValue:(id)arg1 ;
@end

