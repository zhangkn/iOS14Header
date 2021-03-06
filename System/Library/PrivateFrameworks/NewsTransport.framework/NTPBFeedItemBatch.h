/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBFeedItemBatch : PBCodable <NSCopying> {

	NSMutableArray* _feedItems;

}

@property (nonatomic,retain) NSMutableArray * feedItems;              //@synthesize feedItems=_feedItems - In the implementation block
+(Class)feedItemsType;
-(void)setFeedItems:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addFeedItems:(id)arg1 ;
-(void)clearFeedItems;
-(unsigned long long)feedItemsCount;
-(id)feedItemsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)feedItems;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

