/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INDateComponentsRange, NSString, NSArray;

@interface INWellnessObjectResultValue : NSObject <NSCopying, NSSecureCoding> {

	INDateComponentsRange* _recordDate;
	NSString* _unit;
	NSArray* _values;
	long long _resultType;

}

@property (nonatomic,copy,readonly) INDateComponentsRange * recordDate;              //@synthesize recordDate=_recordDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * unit;                                 //@synthesize unit=_unit - In the implementation block
@property (nonatomic,copy,readonly) NSArray * values;                                //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) long long resultType;                                 //@synthesize resultType=_resultType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)unit;
-(id)_dictionaryRepresentation;
-(long long)resultType;
-(NSArray *)values;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INDateComponentsRange *)recordDate;
-(id)initWithRecordDate:(id)arg1 unit:(id)arg2 values:(id)arg3 resultType:(long long)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
