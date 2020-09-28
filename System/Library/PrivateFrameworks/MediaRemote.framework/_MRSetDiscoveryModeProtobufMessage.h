/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRSetDiscoveryModeProtobufMessage : PBCodable <NSCopying> {

	int _features;
	int _mode;
	SCD_Struct_MR2 _has;

}

@property (assign,nonatomic) BOOL hasMode; 
@property (assign,nonatomic) int mode;                      //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL hasFeatures; 
@property (assign,nonatomic) int features;                  //@synthesize features=_features - In the implementation block
-(int)mode;
-(int)features;
-(void)setFeatures:(int)arg1 ;
-(void)setMode:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasMode;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasMode:(BOOL)arg1 ;
-(id)modeAsString:(int)arg1 ;
-(int)StringAsMode:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasFeatures;
-(void)setHasFeatures:(BOOL)arg1 ;
-(id)featuresAsString:(int)arg1 ;
-(int)StringAsFeatures:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end
