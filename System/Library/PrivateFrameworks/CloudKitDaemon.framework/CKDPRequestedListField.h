/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPRecordFieldIdentifier, NSMutableArray;

@interface CKDPRequestedListField : PBCodable <NSCopying> {

	CKDPRecordFieldIdentifier* _fieldId;
	NSMutableArray* _ranges;

}

@property (nonatomic,readonly) BOOL hasFieldId; 
@property (nonatomic,retain) CKDPRecordFieldIdentifier * fieldId;              //@synthesize fieldId=_fieldId - In the implementation block
@property (nonatomic,retain) NSMutableArray * ranges;                          //@synthesize ranges=_ranges - In the implementation block
+(Class)rangeType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)rangeAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)ranges;
-(CKDPRecordFieldIdentifier *)fieldId;
-(void)setRanges:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFieldId:(CKDPRecordFieldIdentifier *)arg1 ;
-(void)addRange:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)rangesCount;
-(void)clearRanges;
-(BOOL)hasFieldId;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
@end

