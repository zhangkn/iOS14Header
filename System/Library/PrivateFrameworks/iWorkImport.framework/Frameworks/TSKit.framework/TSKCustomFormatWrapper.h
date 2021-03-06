/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:28 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSKit.framework/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSKit/TSKFormat.h>

@class NSUUID, TSUCustomFormat, TSUCustomFormatData;

@interface TSKCustomFormatWrapper : TSKFormat {

	unsigned char _appliedConditionKey;
	BOOL _isMarkedCorrupt;
	NSUUID* _customFormatKey;
	TSUCustomFormat* _customFormat;

}

@property (assign,nonatomic) unsigned char appliedConditionKey;                     //@synthesize appliedConditionKey=_appliedConditionKey - In the implementation block
@property (nonatomic,readonly) NSUUID * customFormatKey;                            //@synthesize customFormatKey=_customFormatKey - In the implementation block
@property (nonatomic,readonly) TSUCustomFormat * customFormat;                      //@synthesize customFormat=_customFormat - In the implementation block
@property (nonatomic,readonly) TSUCustomFormatData * customFormatData; 
@property (assign,nonatomic) BOOL isMarkedCorrupt;                                  //@synthesize isMarkedCorrupt=_isMarkedCorrupt - In the implementation block
+(id)unpopulatedCustomFormatWrapperWithFormatType:(unsigned)arg1 customFormatKey:(id)arg2 ;
+(id)populatedCustomFormatWrapperFromCFWrapper:(id)arg1 customFormat:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)stringFromDouble:(double)arg1 locale:(id)arg2 ;
-(NSUUID *)customFormatKey;
-(TSUCustomFormatData *)customFormatData;
-(TSUCustomFormat *)customFormat;
-(id)asCustomFormatWrapper;
-(id)currencyCodeForValue:(double)arg1 ;
-(id)initWithFormatType:(unsigned)arg1 customFormatKey:(id)arg2 customFormat:(id)arg3 appliedConditionKey:(unsigned char)arg4 ;
-(unsigned char)appliedConditionKey;
-(id)stringFromDate:(id)arg1 locale:(id)arg2 ;
-(void)setAppliedConditionKey:(unsigned char)arg1 ;
-(id)applyConditionalValue:(double)arg1 ;
-(id)stringFromString:(id)arg1 locale:(id)arg2 ;
-(BOOL)isMarkedCorrupt;
-(void)setIsMarkedCorrupt:(BOOL)arg1 ;
@end

