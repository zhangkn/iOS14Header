/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKProtobufPeerPaymentMessage, MSMessage, NSUUID, NSString, NSDecimalNumber, PKCurrencyAmount, PKPeerPaymentRequestToken;

@interface PKPeerPaymentMessage : NSObject {

	PKProtobufPeerPaymentMessage* _protoMessage;
	MSMessage* _underlyingMessage;

}

@property (nonatomic,readonly) MSMessage * underlyingMessage;                     //@synthesize underlyingMessage=_underlyingMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasBeenSent; 
@property (nonatomic,copy,readonly) NSUUID * identifier; 
@property (assign,nonatomic) unsigned long long type; 
@property (nonatomic,copy) NSString * currency; 
@property (nonatomic,copy) NSDecimalNumber * amount; 
@property (nonatomic,copy) PKCurrencyAmount * currencyAmount; 
@property (nonatomic,copy) NSString * senderAddress; 
@property (nonatomic,copy) NSString * recipientAddress; 
@property (nonatomic,copy) PKPeerPaymentRequestToken * requestToken; 
@property (nonatomic,copy) NSString * paymentIdentifier; 
@property (nonatomic,copy) NSString * transactionIdentifier; 
@property (nonatomic,copy) NSString * memo; 
-(NSUUID *)identifier;
-(NSString *)memo;
-(NSString *)paymentIdentifier;
-(id)_requestDeviceScoreIdentifier;
-(PKPeerPaymentRequestToken *)requestToken;
-(void)setRequestToken:(PKPeerPaymentRequestToken *)arg1 ;
-(NSString *)currency;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(PKCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(PKCurrencyAmount *)arg1 ;
-(NSString *)transactionIdentifier;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(id)init;
-(void)setCurrency:(NSString *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 session:(id)arg2 ;
-(id)initWithUnderlyingMessage:(id)arg1 ;
-(void)_updateDataURL;
-(void)_updateLayoutContents;
-(void)_updateSummaryText;
-(MSMessage *)underlyingMessage;
-(BOOL)hasBeenSent;
-(void)updateWithPeerPaymentPerformResponse:(id)arg1 ;
-(unsigned long long)type;
-(void)setMemo:(NSString *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(NSDecimalNumber *)amount;
-(id)initWithType:(unsigned long long)arg1 ;
-(id)description;
-(void)setSenderAddress:(NSString *)arg1 ;
-(void)setRecipientAddress:(NSString *)arg1 ;
-(void)setPaymentIdentifier:(NSString *)arg1 ;
-(NSString *)senderAddress;
-(NSString *)recipientAddress;
@end
