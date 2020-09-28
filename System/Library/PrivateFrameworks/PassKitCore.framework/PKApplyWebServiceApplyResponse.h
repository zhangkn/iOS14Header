/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKApplyWebServiceResponse.h>

@class PKFeatureApplication, PKAccount;

@interface PKApplyWebServiceApplyResponse : PKApplyWebServiceResponse {

	PKFeatureApplication* _featureApplication;
	PKAccount* _account;

}

@property (nonatomic,readonly) PKFeatureApplication * featureApplication;              //@synthesize featureApplication=_featureApplication - In the implementation block
@property (nonatomic,readonly) PKAccount * account;                                    //@synthesize account=_account - In the implementation block
+(BOOL)supportsSecureCoding;
-(PKAccount *)account;
-(id)nextStepInfo;
-(PKFeatureApplication *)featureApplication;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
@end
