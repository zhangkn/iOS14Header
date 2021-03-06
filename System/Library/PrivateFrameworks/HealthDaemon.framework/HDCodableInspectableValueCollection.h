/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, HDCodableMedicalCodingList;

@interface HDCodableInspectableValueCollection : PBCodable <NSCopying> {

	long long _collectionType;
	NSMutableArray* _collections;
	HDCodableMedicalCodingList* _elementTags;
	SCD_Struct_HD7 _has;

}

@property (assign,nonatomic) BOOL hasCollectionType; 
@property (assign,nonatomic) long long collectionType;                              //@synthesize collectionType=_collectionType - In the implementation block
@property (nonatomic,retain) NSMutableArray * collections;                          //@synthesize collections=_collections - In the implementation block
@property (nonatomic,readonly) BOOL hasElementTags; 
@property (nonatomic,retain) HDCodableMedicalCodingList * elementTags;              //@synthesize elementTags=_elementTags - In the implementation block
+(Class)collectionType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(HDCodableMedicalCodingList *)elementTags;
-(BOOL)readFrom:(id)arg1 ;
-(long long)collectionType;
-(void)setCollections:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)collectionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)collections;
-(void)setCollectionType:(long long)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCollection:(id)arg1 ;
-(void)setElementTags:(HDCodableMedicalCodingList *)arg1 ;
-(unsigned long long)collectionsCount;
-(void)clearCollections;
-(void)setHasCollectionType:(BOOL)arg1 ;
-(BOOL)hasCollectionType;
-(BOOL)hasElementTags;
@end

