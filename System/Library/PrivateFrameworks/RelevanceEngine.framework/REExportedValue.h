/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface REExportedValue : NSObject
+(id)exportedValueForObject:(id)arg1 ;
+(id)_exportedValueForTable:(id)arg1 ;
+(id)exportedValueForString:(id)arg1 ;
+(id)exportedValueForNumber:(id)arg1 ;
+(id)exportedValueForArray:(id)arg1 ;
+(id)exportedValueForDictionary:(id)arg1 ;
+(id)exportedValueForDate:(id)arg1 ;
-(id)objectValue;
-(id)dateValue;
-(id)arrayValue;
-(id)numberValue;
-(unsigned long long)propertyCount;
-(id)stringValue;
-(unsigned long long)type;
-(void)enumerateValuesUsingBlock:(/*^block*/id)arg1 ;
-(id)dictionaryValue;
-(BOOL)shouldEncodeProperty:(id)arg1 ;
-(id)exportedValueForKey:(id)arg1 ;
@end

