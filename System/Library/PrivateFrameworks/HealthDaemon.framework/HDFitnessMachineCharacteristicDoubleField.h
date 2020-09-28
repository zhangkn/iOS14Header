/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDFitnessMachineCharacteristicField.h>

@interface HDFitnessMachineCharacteristicDoubleField : HDFitnessMachineCharacteristicField {

	BOOL _isSigned;
	double _value;

}

@property (assign,nonatomic) double value;               //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL isSigned;              //@synthesize isSigned=_isSigned - In the implementation block
-(BOOL)isSigned;
-(void)setValue:(double)arg1 ;
-(double)value;
-(void)setIsSigned:(BOOL)arg1 ;
-(void)setValueWithBytes:(const char**)arg1 before:(const char*)arg2 ;
-(id)valueAsData;
@end
