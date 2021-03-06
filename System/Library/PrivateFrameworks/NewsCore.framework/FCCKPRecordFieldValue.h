/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, FCCKPDate, NSMutableArray, FCCKPRecordReference, NSString;

@interface FCCKPRecordFieldValue : PBCodable <NSCopying> {

	double _doubleValue;
	long long _signedValue;
	NSData* _bytesValue;
	FCCKPDate* _dateValue;
	NSMutableArray* _listValues;
	FCCKPRecordReference* _referenceValue;
	NSString* _stringValue;
	int _type;
	SCD_Struct_FC8 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasBytesValue; 
@property (nonatomic,retain) NSData * bytesValue;                                //@synthesize bytesValue=_bytesValue - In the implementation block
@property (assign,nonatomic) BOOL hasSignedValue; 
@property (assign,nonatomic) long long signedValue;                              //@synthesize signedValue=_signedValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                                 //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDateValue; 
@property (nonatomic,retain) FCCKPDate * dateValue;                              //@synthesize dateValue=_dateValue - In the implementation block
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                             //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) BOOL hasReferenceValue; 
@property (nonatomic,retain) FCCKPRecordReference * referenceValue;              //@synthesize referenceValue=_referenceValue - In the implementation block
@property (nonatomic,retain) NSMutableArray * listValues;                        //@synthesize listValues=_listValues - In the implementation block
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(NSMutableArray *)listValues;
-(FCCKPDate *)dateValue;
-(void)setDoubleValue:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDateValue:(FCCKPDate *)arg1 ;
-(BOOL)hasReferenceValue;
-(void)writeTo:(id)arg1 ;
-(long long)signedValue;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasSignedValue:(BOOL)arg1 ;
-(FCCKPRecordReference *)referenceValue;
-(double)doubleValue;
-(BOOL)hasDoubleValue;
-(BOOL)hasDateValue;
-(void)dealloc;
-(void)setReferenceValue:(FCCKPRecordReference *)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(NSString *)stringValue;
-(void)clearListValues;
-(unsigned long long)listValuesCount;
-(BOOL)hasStringValue;
-(void)setSignedValue:(long long)arg1 ;
-(id)listValueAtIndex:(unsigned long long)arg1 ;
-(NSData *)bytesValue;
-(void)setBytesValue:(NSData *)arg1 ;
-(BOOL)hasSignedValue;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(int)type;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(unsigned long long)hash;
-(void)addListValue:(id)arg1 ;
-(void)setListValues:(NSMutableArray *)arg1 ;
-(BOOL)hasBytesValue;
-(id)description;
-(id)dictionaryRepresentation;
@end

