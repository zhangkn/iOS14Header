/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, ATXPBActionCriteria, NSMutableArray, ATXPBAVRouteInfo;

@interface ATXPBAction : PBCodable <NSCopying> {

	long long _actionType;
	long long _userActivityHash;
	NSString* _activityString;
	NSString* _bundleId;
	NSData* _contentAttributeSet;
	ATXPBActionCriteria* _criteria;
	NSString* _heuristic;
	NSMutableArray* _heuristicMetadatas;
	NSData* _intent;
	NSString* _itemIdentifier;
	NSString* _languageCode;
	ATXPBAVRouteInfo* _routeInfo;
	NSString* _subtitle;
	NSString* _title;
	NSData* _userActivityProxy;
	NSString* _uuid;
	BOOL _isFutureMedia;
	SCD_Struct_AT3 _has;

}

@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;                              //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) BOOL hasActionType; 
@property (assign,nonatomic) long long actionType;                             //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) BOOL hasIntent; 
@property (nonatomic,retain) NSData * intent;                                  //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) BOOL hasHeuristic; 
@property (nonatomic,retain) NSString * heuristic;                             //@synthesize heuristic=_heuristic - In the implementation block
@property (assign,nonatomic) BOOL hasIsFutureMedia; 
@property (assign,nonatomic) BOOL isFutureMedia;                               //@synthesize isFutureMedia=_isFutureMedia - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL hasUserActivityHash; 
@property (assign,nonatomic) long long userActivityHash;                       //@synthesize userActivityHash=_userActivityHash - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityString; 
@property (nonatomic,retain) NSString * activityString;                        //@synthesize activityString=_activityString - In the implementation block
@property (nonatomic,readonly) BOOL hasUserActivityProxy; 
@property (nonatomic,retain) NSData * userActivityProxy;                       //@synthesize userActivityProxy=_userActivityProxy - In the implementation block
@property (nonatomic,readonly) BOOL hasItemIdentifier; 
@property (nonatomic,retain) NSString * itemIdentifier;                        //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSString * uuid;                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;                          //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) BOOL hasContentAttributeSet; 
@property (nonatomic,retain) NSData * contentAttributeSet;                     //@synthesize contentAttributeSet=_contentAttributeSet - In the implementation block
@property (nonatomic,readonly) BOOL hasCriteria; 
@property (nonatomic,retain) ATXPBActionCriteria * criteria;                   //@synthesize criteria=_criteria - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteInfo; 
@property (nonatomic,retain) ATXPBAVRouteInfo * routeInfo;                     //@synthesize routeInfo=_routeInfo - In the implementation block
@property (nonatomic,retain) NSMutableArray * heuristicMetadatas;              //@synthesize heuristicMetadatas=_heuristicMetadatas - In the implementation block
+(Class)heuristicMetadataType;
-(void)setLanguageCode:(NSString *)arg1 ;
-(BOOL)hasLanguageCode;
-(NSString *)languageCode;
-(long long)actionType;
-(NSData *)contentAttributeSet;
-(NSString *)itemIdentifier;
-(void)setCriteria:(ATXPBActionCriteria *)arg1 ;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(NSString *)subtitle;
-(ATXPBActionCriteria *)criteria;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setIntent:(NSData *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(long long)userActivityHash;
-(BOOL)hasUuid;
-(BOOL)hasTitle;
-(NSString *)title;
-(void)setBundleId:(NSString *)arg1 ;
-(BOOL)hasSubtitle;
-(NSData *)intent;
-(void)setActionType:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)heuristic;
-(BOOL)isFutureMedia;
-(void)setRouteInfo:(ATXPBAVRouteInfo *)arg1 ;
-(BOOL)hasRouteInfo;
-(NSString *)uuid;
-(BOOL)hasIntent;
-(void)setHasActionType:(BOOL)arg1 ;
-(BOOL)hasActionType;
-(NSString *)bundleId;
-(unsigned long long)hash;
-(NSData *)userActivityProxy;
-(void)setHeuristic:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(ATXPBAVRouteInfo *)routeInfo;
-(BOOL)hasBundleId;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setContentAttributeSet:(NSData *)arg1 ;
-(NSString *)activityString;
-(NSMutableArray *)heuristicMetadatas;
-(void)setIsFutureMedia:(BOOL)arg1 ;
-(void)setUserActivityHash:(long long)arg1 ;
-(void)setActivityString:(NSString *)arg1 ;
-(void)setHeuristicMetadatas:(NSMutableArray *)arg1 ;
-(void)setUserActivityProxy:(NSData *)arg1 ;
-(void)addHeuristicMetadata:(id)arg1 ;
-(unsigned long long)heuristicMetadatasCount;
-(void)clearHeuristicMetadatas;
-(id)heuristicMetadataAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasHeuristic;
-(void)setHasIsFutureMedia:(BOOL)arg1 ;
-(BOOL)hasIsFutureMedia;
-(void)setHasUserActivityHash:(BOOL)arg1 ;
-(BOOL)hasUserActivityHash;
-(BOOL)hasActivityString;
-(BOOL)hasUserActivityProxy;
-(BOOL)hasItemIdentifier;
-(BOOL)hasContentAttributeSet;
-(BOOL)hasCriteria;
@end

