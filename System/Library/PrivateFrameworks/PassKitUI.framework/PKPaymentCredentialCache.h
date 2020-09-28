/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKPaymentCredential, UIImage, PKPaymentPass, NSString;

@interface PKPaymentCredentialCache : NSObject {

	BOOL _isSelected;
	PKPaymentCredential* _credential;
	UIImage* _passSnapshot;
	PKPaymentPass* _paymentPass;
	NSString* _cellSubtitle;

}

@property (nonatomic,retain) PKPaymentCredential * credential;              //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) UIImage * passSnapshot;                        //@synthesize passSnapshot=_passSnapshot - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                               //@synthesize isSelected=_isSelected - In the implementation block
@property (nonatomic,retain) PKPaymentPass * paymentPass;                   //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,copy) NSString * cellSubtitle;                         //@synthesize cellSubtitle=_cellSubtitle - In the implementation block
-(PKPaymentCredential *)credential;
-(void)setIsSelected:(BOOL)arg1 ;
-(PKPaymentPass *)paymentPass;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(void)setCredential:(PKPaymentCredential *)arg1 ;
-(BOOL)isSelected;
-(void)setPassSnapshot:(UIImage *)arg1 ;
-(NSString *)cellSubtitle;
-(void)setCellSubtitle:(NSString *)arg1 ;
-(UIImage *)passSnapshot;
@end
