/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCHistogram : NSObject {

	unsigned* _buckets;
	const unsigned* _ranges;
	unsigned _bucketCount;

}

@property (readonly) const unsigned* ranges;              //@synthesize ranges=_ranges - In the implementation block
+(const unsigned*)bucketWithType:(int)arg1 count:(unsigned*)arg2 ;
+(id)rangesDescription:(int)arg1 ;
-(void)addValue:(unsigned)arg1 ;
-(void)dealloc;
-(void)reset;
-(const unsigned*)ranges;
-(id)array;
-(BOOL)merge:(id)arg1 ;
-(id)description;
-(id)initWithType:(int)arg1 bucketValues:(id)arg2 ;
-(void)addValue:(unsigned)arg1 withIncrement:(unsigned)arg2 ;
-(unsigned)bucketValueAtIndex:(unsigned)arg1 ;
@end
