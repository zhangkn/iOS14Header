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

@class NTPBPaywallDescription;

@interface NTPBPublisherPaidDescriptionStrings : PBCodable <NSCopying> {

	NTPBPaywallDescription* _paywallDescription;

}

@property (nonatomic,readonly) BOOL hasPaywallDescription; 
@property (nonatomic,retain) NTPBPaywallDescription * paywallDescription;              //@synthesize paywallDescription=_paywallDescription - In the implementation block
+(id)publisherPaidDescriptionStringsFromJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)dealloc;
-(void)setPaywallDescription:(NTPBPaywallDescription *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasPaywallDescription;
-(id)description;
-(NTPBPaywallDescription *)paywallDescription;
-(id)dictionaryRepresentation;
@end
