/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentPreferenceCardCell.h>

@class UIImage, PKBankAccountInformation;

@interface PKPaymentPreferenceBankAccountCell : PKPaymentPreferenceCardCell {

	UIImage* _bankIcon;
	PKBankAccountInformation* _bankAccount;

}

@property (nonatomic,retain) PKBankAccountInformation * bankAccount;              //@synthesize bankAccount=_bankAccount - In the implementation block
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)_updateCellContent;
-(void)_updateCensoredPANLabel;
-(PKBankAccountInformation *)bankAccount;
-(void)setBankAccount:(PKBankAccountInformation *)arg1 ;
@end

