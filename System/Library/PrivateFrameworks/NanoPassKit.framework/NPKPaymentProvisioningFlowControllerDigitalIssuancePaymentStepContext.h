/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class PKPaymentSetupProduct;

@interface NPKPaymentProvisioningFlowControllerDigitalIssuancePaymentStepContext : NPKPaymentProvisioningFlowStepContext {

	PKPaymentSetupProduct* _product;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
+(BOOL)supportsSecureCoding;
-(PKPaymentSetupProduct *)product;
-(id)initWithCoder:(id)arg1 ;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
@end
