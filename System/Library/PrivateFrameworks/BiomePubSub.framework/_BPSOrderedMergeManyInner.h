/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomePubSub/_BPSAbstractOrderedMerge.h>

@interface _BPSOrderedMergeManyInner : _BPSAbstractOrderedMerge {

	/*^block*/id _comparator;

}

@property (nonatomic,copy) id comparator;              //@synthesize comparator=_comparator - In the implementation block
-(long long)compareFirst:(id)arg1 withSecond:(id)arg2 ;
-(id)comparator;
-(id)initWithDownstream:(id)arg1 upstreamCount:(unsigned long long)arg2 comparator:(/*^block*/id)arg3 ;
-(void)setComparator:(id)arg1 ;
@end

