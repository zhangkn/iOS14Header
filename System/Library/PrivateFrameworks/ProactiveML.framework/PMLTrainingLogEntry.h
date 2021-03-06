/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:02 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PMLTrainingLogEntry : NSObject {

	double _timestamp;
	unsigned long long _serverIteration;

}

@property (nonatomic,readonly) double timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long serverIteration;              //@synthesize serverIteration=_serverIteration - In the implementation block
-(double)timestamp;
-(id)initWithTimestamp:(double)arg1 serverIteration:(unsigned long long)arg2 ;
-(unsigned long long)serverIteration;
@end

