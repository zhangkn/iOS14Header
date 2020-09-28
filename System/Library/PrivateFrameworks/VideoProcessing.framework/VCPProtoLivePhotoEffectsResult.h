/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface VCPProtoLivePhotoEffectsResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	unsigned long long _longExposureSuggestionState;
	unsigned long long _loopSuggestionState;
	NSData* _recipeBlob;

}

@property (assign,nonatomic) unsigned long long loopSuggestionState;                      //@synthesize loopSuggestionState=_loopSuggestionState - In the implementation block
@property (assign,nonatomic) unsigned long long longExposureSuggestionState;              //@synthesize longExposureSuggestionState=_longExposureSuggestionState - In the implementation block
@property (nonatomic,readonly) BOOL hasRecipeBlob; 
@property (nonatomic,retain) NSData * recipeBlob;                                         //@synthesize recipeBlob=_recipeBlob - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)exportToLegacyDictionary;
-(void)setRecipeBlob:(NSData *)arg1 ;
-(BOOL)hasRecipeBlob;
-(unsigned long long)loopSuggestionState;
-(void)setLoopSuggestionState:(unsigned long long)arg1 ;
-(NSData *)recipeBlob;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)longExposureSuggestionState;
-(void)setLongExposureSuggestionState:(unsigned long long)arg1 ;
@end
