/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MIPArtist, NSString, MIPSeries;

@interface MIPPodcast : PBCodable <NSCopying> {

	MIPArtist* _artist;
	NSString* _externalGuid;
	NSString* _feedUrl;
	MIPSeries* _series;

}

@property (nonatomic,readonly) BOOL hasArtist; 
@property (nonatomic,retain) MIPArtist * artist;                   //@synthesize artist=_artist - In the implementation block
@property (nonatomic,readonly) BOOL hasSeries; 
@property (nonatomic,retain) MIPSeries * series;                   //@synthesize series=_series - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalGuid; 
@property (nonatomic,retain) NSString * externalGuid;              //@synthesize externalGuid=_externalGuid - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedUrl; 
@property (nonatomic,retain) NSString * feedUrl;                   //@synthesize feedUrl=_feedUrl - In the implementation block
-(MIPArtist *)artist;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setArtist:(MIPArtist *)arg1 ;
-(MIPSeries *)series;
-(BOOL)hasArtist;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)feedUrl;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setSeries:(MIPSeries *)arg1 ;
-(BOOL)hasSeries;
-(void)setExternalGuid:(NSString *)arg1 ;
-(void)setFeedUrl:(NSString *)arg1 ;
-(BOOL)hasExternalGuid;
-(BOOL)hasFeedUrl;
-(NSString *)externalGuid;
@end
