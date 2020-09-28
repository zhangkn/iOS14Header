/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:45 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNVCardLineSerialization.h>

@protocol CNVCardSerializationStorage;
@class NSString;

@interface CNVCardLineSerializationStrategyImpl : NSObject <CNVCardLineSerialization> {

	id<CNVCardSerializationStorage> _storage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serializerWithStorage:(id)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(void)serializeData:(id)arg1 ;
-(unsigned long long)estimatedDataLength;
-(void)serializeString:(id)arg1 ;
-(id)insertionMarker;
-(void)insertLine:(id)arg1 atMarker:(id)arg2 ;
-(BOOL)canSerializeString:(id)arg1 ;
-(BOOL)canSerializeArray:(id)arg1 ;
-(BOOL)canSerializeData:(id)arg1 ;
-(void)serializeLine:(id)arg1 ;
-(void)serializeArray:(id)arg1 withItemSeparator:(id)arg2 ;
-(void)serializeOpaqueValue:(id)arg1 ;
-(void)serializeVersionPlaceholder;
-(void)willSerializeValue;
-(void)serializeGroupingName:(id)arg1 ;
-(void)serializeName:(id)arg1 ;
-(void)serializeParameters:(id)arg1 ;
-(void)serializeGroupedLines:(id)arg1 withGroupingName:(id)arg2 ;
@end
