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

@class NSString, NPKProtoStandalonePaymentCredential, NPKProtoStandalonePaymentPass;

@interface NPKProtoStandaloneCreditAccountCredential : PBCodable <NSCopying> {

	double _creditLimit;
	double _currentBalance;
	NSString* _currencyCode;
	NPKProtoStandalonePaymentCredential* _paymentCredential;
	NPKProtoStandalonePaymentPass* _paymentPass;
	SCD_Struct_NP1 _has;

}

@property (nonatomic,retain) NPKProtoStandalonePaymentCredential * paymentCredential;              //@synthesize paymentCredential=_paymentCredential - In the implementation block
@property (nonatomic,readonly) BOOL hasPaymentPass; 
@property (nonatomic,retain) NPKProtoStandalonePaymentPass * paymentPass;                          //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrencyCode; 
@property (nonatomic,retain) NSString * currencyCode;                                              //@synthesize currencyCode=_currencyCode - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentBalance; 
@property (assign,nonatomic) double currentBalance;                                                //@synthesize currentBalance=_currentBalance - In the implementation block
@property (assign,nonatomic) BOOL hasCreditLimit; 
@property (assign,nonatomic) double creditLimit;                                                   //@synthesize creditLimit=_creditLimit - In the implementation block
-(NSString *)currencyCode;
-(BOOL)hasCurrencyCode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPaymentCredential:(NPKProtoStandalonePaymentCredential *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NPKProtoStandalonePaymentPass *)paymentPass;
-(void)setPaymentPass:(NPKProtoStandalonePaymentPass *)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCreditLimit:(double)arg1 ;
-(void)setCurrentBalance:(double)arg1 ;
-(double)creditLimit;
-(double)currentBalance;
-(NPKProtoStandalonePaymentCredential *)paymentCredential;
-(unsigned long long)hash;
-(BOOL)hasPaymentPass;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setHasCurrentBalance:(BOOL)arg1 ;
-(BOOL)hasCurrentBalance;
-(void)setHasCreditLimit:(BOOL)arg1 ;
-(BOOL)hasCreditLimit;
@end

