/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKCloudRecordObject.h>

@class PKPaymentTransaction;

@interface PKCloudRecordTransaction : PKCloudRecordObject {

	PKPaymentTransaction* _transaction;

}

@property (nonatomic,retain) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
+(id)dateFormatter;
+(BOOL)supportsSecureCoding;
-(PKPaymentTransaction *)transaction;
-(id)item;
-(long long)compare:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(id)descriptionWithItem:(BOOL)arg1 ;
-(id)_descriptionWithIncludeItem:(BOOL)arg1 ;
-(void)applyCloudRecordObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end

