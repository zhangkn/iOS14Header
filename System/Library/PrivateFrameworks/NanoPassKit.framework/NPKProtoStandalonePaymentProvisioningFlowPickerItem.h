/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowPickerItem : PBCodable <NSCopying> {

	NSString* _identifier;
	NSMutableArray* _products;
	NSString* _title;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSMutableArray * products;              //@synthesize products=_products - In the implementation block
+(Class)productsType;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)hasTitle;
-(NSString *)title;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)products;
-(unsigned long long)hash;
-(void)setProducts:(NSMutableArray *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addProducts:(id)arg1 ;
-(unsigned long long)productsCount;
-(void)clearProducts;
-(id)productsAtIndex:(unsigned long long)arg1 ;
@end
