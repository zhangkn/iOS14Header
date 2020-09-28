/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList : PBCodable <NSCopying> {

	NSMutableArray* _cohorts;

}

@property (nonatomic,retain) NSMutableArray * cohorts;              //@synthesize cohorts=_cohorts - In the implementation block
+(Class)cohortsType;
-(id)cohortWithPreferredType:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCohorts:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)addCohorts:(id)arg1 ;
-(unsigned long long)cohortsCount;
-(void)clearCohorts;
-(id)cohortsAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)cohorts;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end
