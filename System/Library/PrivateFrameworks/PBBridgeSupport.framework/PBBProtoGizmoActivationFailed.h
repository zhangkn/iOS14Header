/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PBBProtoGizmoActivationFailed : PBCodable <NSCopying> {

	NSString* _failureDescription;

}

@property (nonatomic,retain) NSString * failureDescription;              //@synthesize failureDescription=_failureDescription - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)failureDescription;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setFailureDescription:(NSString *)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

