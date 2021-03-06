/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

@interface HDHeartRateControlPoint : HDHealthServiceCharacteristic {

	unsigned char _operation;

}

@property (assign,nonatomic) unsigned char operation;              //@synthesize operation=_operation - In the implementation block
+(id)uuid;
-(id)initWithOperation:(unsigned char)arg1 ;
-(void)setOperation:(unsigned char)arg1 ;
-(unsigned char)operation;
-(id)description;
-(id)getBinaryValueWithError:(id*)arg1 ;
@end

