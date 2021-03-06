/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcuts/VoiceShortcuts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, VCPBIntentDefinition;

@interface VCPBIntentDefinitionChange : PBCodable <NSCopying> {

	NSString* _associatedBundleID;
	int _changeType;
	VCPBIntentDefinition* _intentDefinition;

}

@property (assign,nonatomic) int changeType;                                       //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) NSString * associatedBundleID;                        //@synthesize associatedBundleID=_associatedBundleID - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentDefinition; 
@property (nonatomic,retain) VCPBIntentDefinition * intentDefinition;              //@synthesize intentDefinition=_intentDefinition - In the implementation block
-(id)changeTypeAsString:(int)arg1 ;
-(int)StringAsChangeType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(VCPBIntentDefinition *)intentDefinition;
-(void)setIntentDefinition:(VCPBIntentDefinition *)arg1 ;
-(void)setChangeType:(int)arg1 ;
-(int)changeType;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)associatedBundleID;
-(void)setAssociatedBundleID:(NSString *)arg1 ;
-(BOOL)hasIntentDefinition;
@end

