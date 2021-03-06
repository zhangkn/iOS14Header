/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:28 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSKit.framework/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSKit/TSKFormat.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSKFractionFormat : TSKFormat <NSCopying> {

	BOOL _usePlusSign;
	int _fractionAccuracy;

}

@property (nonatomic,readonly) int fractionAccuracy;              //@synthesize fractionAccuracy=_fractionAccuracy - In the implementation block
@property (nonatomic,readonly) BOOL usePlusSign;                  //@synthesize usePlusSign=_usePlusSign - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithFormatType:(unsigned)arg1 ;
-(int)fractionAccuracy;
-(id)stringFromDouble:(double)arg1 locale:(id)arg2 ;
-(id)asFractionFormat;
-(id)initWithFractionAccuracy:(int)arg1 ;
-(BOOL)usePlusSign;
@end

