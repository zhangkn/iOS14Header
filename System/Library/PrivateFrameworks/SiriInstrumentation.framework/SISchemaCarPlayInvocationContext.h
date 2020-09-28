/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaCarPlayInvocationContext : PBCodable {

	NSString* _bundleID;
	int _directAction;
	SCD_Struct_SI1 _has;
	BOOL _hasBundleID;

}

@property (nonatomic,copy) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) BOOL hasBundleID;                  //@synthesize hasBundleID=_hasBundleID - In the implementation block
@property (assign,nonatomic) int directAction;                  //@synthesize directAction=_directAction - In the implementation block
@property (assign,nonatomic) BOOL hasDirectAction; 
@property (nonatomic,readonly) NSData * jsonData; 
-(void)setBundleID:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)directAction;
-(void)setDirectAction:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasBundleID;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)bundleID;
-(NSData *)jsonData;
-(id)dictionaryRepresentation;
-(BOOL)hasDirectAction;
-(void)setHasDirectAction:(BOOL)arg1 ;
-(void)setHasBundleID:(BOOL)arg1 ;
@end
