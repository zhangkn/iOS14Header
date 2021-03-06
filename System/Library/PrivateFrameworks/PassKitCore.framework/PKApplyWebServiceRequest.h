/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKApplyWebServiceRequest : PKPaymentWebServiceRequest {

	NSString* _referrerIdentifier;

}

@property (nonatomic,copy) NSString * referrerIdentifier;              //@synthesize referrerIdentifier=_referrerIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_murlRequestWithURL:(id)arg1 ;
-(id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 appleAccountInformation:(id)arg4 ;
-(NSString *)referrerIdentifier;
-(void)setReferrerIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

