/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NPKProtoQueueTSMConnectionRequest : PBRequest <NSCopying> {

	NSString* _pushTopic;

}

@property (nonatomic,readonly) BOOL hasPushTopic; 
@property (nonatomic,retain) NSString * pushTopic;              //@synthesize pushTopic=_pushTopic - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPushTopic:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)pushTopic;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)hasPushTopic;
@end

