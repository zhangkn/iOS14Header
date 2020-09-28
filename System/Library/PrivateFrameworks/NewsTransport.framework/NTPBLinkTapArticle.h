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

@class NSString;

@interface NTPBLinkTapArticle : PBCodable <NSCopying> {

	NSString* _articleId;
	int _articleType;
	NSString* _linkUrl;
	NSString* _referencedArticleId;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasLinkUrl; 
@property (nonatomic,retain) NSString * linkUrl;                          //@synthesize linkUrl=_linkUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                        //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;              //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (assign,nonatomic) BOOL hasArticleType; 
@property (assign,nonatomic) int articleType;                             //@synthesize articleType=_articleType - In the implementation block
-(BOOL)hasArticleType;
-(id)articleTypeAsString:(int)arg1 ;
-(int)StringAsArticleType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)articleType;
-(void)setHasArticleType:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setArticleType:(int)arg1 ;
-(NSString *)linkUrl;
-(void)setLinkUrl:(NSString *)arg1 ;
-(BOOL)hasLinkUrl;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)referencedArticleId;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasArticleId;
-(BOOL)hasReferencedArticleId;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)articleId;
-(id)dictionaryRepresentation;
@end
