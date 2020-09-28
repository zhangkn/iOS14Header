/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSURL, NSString, NSData;

@interface PKTransactionReceiptRequest : PKPaymentWebServiceRequest {

	NSURL* _receiptProviderURL;
	NSString* _authorizationToken;
	NSData* _signature;
	NSString* _receiptIdentifier;
	NSString* _conversationIdentifier;

}

@property (nonatomic,readonly) NSURL * receiptProviderURL;                 //@synthesize receiptProviderURL=_receiptProviderURL - In the implementation block
@property (nonatomic,readonly) NSString * authorizationToken;              //@synthesize authorizationToken=_authorizationToken - In the implementation block
@property (nonatomic,readonly) NSData * signature;                         //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) NSString * receiptIdentifier;               //@synthesize receiptIdentifier=_receiptIdentifier - In the implementation block
@property (nonatomic,copy) NSString * conversationIdentifier;              //@synthesize conversationIdentifier=_conversationIdentifier - In the implementation block
-(void)setConversationIdentifier:(NSString *)arg1 ;
-(id)_urlRequest;
-(NSData *)signature;
-(NSString *)authorizationToken;
-(NSString *)conversationIdentifier;
-(id)initWithReceiptProviderURL:(id)arg1 authorizationToken:(id)arg2 signature:(id)arg3 receiptIdentifier:(id)arg4 ;
-(NSURL *)receiptProviderURL;
-(NSString *)receiptIdentifier;
@end
