/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBHeadlineAnalyticsElement : PBCodable <NSCopying> {

	long long _articleVersion;
	NSString* _articleID;
	NSString* _channelID;
	NSString* _preseenCountTrackingIdentifier;
	BOOL _needsSeenStateTracking;
	SCD_Struct_CO1 _has;

}

@property (nonatomic,readonly) BOOL hasArticleID; 
@property (nonatomic,retain) NSString * articleID;                                   //@synthesize articleID=_articleID - In the implementation block
@property (assign,nonatomic) BOOL hasArticleVersion; 
@property (assign,nonatomic) long long articleVersion;                               //@synthesize articleVersion=_articleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasNeedsSeenStateTracking; 
@property (assign,nonatomic) BOOL needsSeenStateTracking;                            //@synthesize needsSeenStateTracking=_needsSeenStateTracking - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelID; 
@property (nonatomic,retain) NSString * channelID;                                   //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,readonly) BOOL hasPreseenCountTrackingIdentifier; 
@property (nonatomic,retain) NSString * preseenCountTrackingIdentifier;              //@synthesize preseenCountTrackingIdentifier=_preseenCountTrackingIdentifier - In the implementation block
-(NSString *)channelID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPreseenCountTrackingIdentifier:(NSString *)arg1 ;
-(void)setHasArticleVersion:(BOOL)arg1 ;
-(BOOL)needsSeenStateTracking;
-(void)writeTo:(id)arg1 ;
-(void)setNeedsSeenStateTracking:(BOOL)arg1 ;
-(void)setHasNeedsSeenStateTracking:(BOOL)arg1 ;
-(BOOL)hasNeedsSeenStateTracking;
-(BOOL)hasPreseenCountTrackingIdentifier;
-(NSString *)preseenCountTrackingIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(void)setChannelID:(NSString *)arg1 ;
-(NSString *)articleID;
-(BOOL)hasArticleID;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasChannelID;
-(BOOL)isEqual:(id)arg1 ;
-(long long)articleVersion;
-(void)setArticleVersion:(long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasArticleVersion;
-(void)setArticleID:(NSString *)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end
