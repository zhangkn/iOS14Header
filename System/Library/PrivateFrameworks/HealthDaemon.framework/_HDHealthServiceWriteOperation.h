/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDHealthServiceCharacteristic;

@interface _HDHealthServiceWriteOperation : NSObject {

	BOOL _expectResponse;
	HDHealthServiceCharacteristic* _characteristic;
	/*^block*/id _completion;

}

@property (nonatomic,retain) HDHealthServiceCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (assign,nonatomic) BOOL expectResponse;                                         //@synthesize expectResponse=_expectResponse - In the implementation block
@property (nonatomic,copy) id completion;                                                 //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(HDHealthServiceCharacteristic *)characteristic;
-(void)setCharacteristic:(HDHealthServiceCharacteristic *)arg1 ;
-(BOOL)expectResponse;
-(void)setExpectResponse:(BOOL)arg1 ;
@end
