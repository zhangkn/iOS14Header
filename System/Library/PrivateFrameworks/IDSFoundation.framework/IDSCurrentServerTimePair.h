/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IDSCurrentServerTimePair : NSObject {

	unsigned long long _initialProcessMachTime;
	unsigned long long _initialServerTimeInNanoSeconds;

}

@property (nonatomic,readonly) unsigned long long initialProcessMachTime;                      //@synthesize initialProcessMachTime=_initialProcessMachTime - In the implementation block
@property (nonatomic,readonly) unsigned long long initialServerTimeInNanoSeconds;              //@synthesize initialServerTimeInNanoSeconds=_initialServerTimeInNanoSeconds - In the implementation block
-(unsigned long long)initialProcessMachTime;
-(unsigned long long)initialServerTimeInNanoSeconds;
-(id)initWithInitialProcessMachTime:(unsigned long long)arg1 initialServerTimeInNanoSeconds:(unsigned long long)arg2 ;
@end

