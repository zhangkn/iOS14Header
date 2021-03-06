/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPRecordFieldIdentifier, FCCKPRecordFieldValue;

@interface FCCKPRecordField : PBCodable <NSCopying> {

	FCCKPRecordFieldIdentifier* _identifier;
	FCCKPRecordFieldValue* _value;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) FCCKPRecordFieldIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) FCCKPRecordFieldValue * value;                        //@synthesize value=_value - In the implementation block
-(FCCKPRecordFieldIdentifier *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(BOOL)hasValue;
-(void)setValue:(FCCKPRecordFieldValue *)arg1 ;
-(void)setIdentifier:(FCCKPRecordFieldIdentifier *)arg1 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg1 ;
-(FCCKPRecordFieldValue *)value;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

