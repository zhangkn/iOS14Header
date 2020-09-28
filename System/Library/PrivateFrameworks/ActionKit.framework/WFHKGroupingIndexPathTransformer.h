/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class NSCalendar;

@interface WFHKGroupingIndexPathTransformer : NSValueTransformer {

	long long _groupingOption;
	NSCalendar* _conversionCalendar;

}

@property (assign,nonatomic) long long groupingOption;                     //@synthesize groupingOption=_groupingOption - In the implementation block
@property (nonatomic,retain) NSCalendar * conversionCalendar;              //@synthesize conversionCalendar=_conversionCalendar - In the implementation block
+(Class)transformedValueClass;
+(BOOL)allowsReverseTransformation;
-(id)reverseTransformedValue:(id)arg1 ;
-(id)transformedValue:(id)arg1 ;
-(id)init;
-(id)initWithGroupingOption:(long long)arg1 ;
-(long long)groupingOption;
-(void)setGroupingOption:(long long)arg1 ;
-(NSCalendar *)conversionCalendar;
-(void)setConversionCalendar:(NSCalendar *)arg1 ;
@end
