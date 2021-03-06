/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentProvisioningMethodMetadataRequest : PKPaymentWebServiceRequest {

	NSString* _productIdentifier;
	NSString* _provisioningMethod;

}

@property (nonatomic,copy) NSString * productIdentifier;               //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy) NSString * provisioningMethod;              //@synthesize provisioningMethod=_provisioningMethod - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(NSString *)productIdentifier;
-(NSString *)provisioningMethod;
-(void)setProvisioningMethod:(NSString *)arg1 ;
-(id)initWithProductIdentifier:(id)arg1 provisioningMethod:(id)arg2 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
@end

