/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@interface SKUIStorePageItemPinningLayoutInformation : NSObject {

	double _afterPinningLocationYAdditions;
	double _beforePinningLocationYAdditions;
	CGRect _availablePinningFrame;
	CGRect _layoutAttributesFrame;

}

@property (assign,nonatomic) CGRect availablePinningFrame;                        //@synthesize availablePinningFrame=_availablePinningFrame - In the implementation block
@property (assign,nonatomic) CGRect layoutAttributesFrame;                        //@synthesize layoutAttributesFrame=_layoutAttributesFrame - In the implementation block
@property (assign,nonatomic) double afterPinningLocationYAdditions;               //@synthesize afterPinningLocationYAdditions=_afterPinningLocationYAdditions - In the implementation block
@property (assign,nonatomic) double beforePinningLocationYAdditions;              //@synthesize beforePinningLocationYAdditions=_beforePinningLocationYAdditions - In the implementation block
-(CGRect)availablePinningFrame;
-(void)setAvailablePinningFrame:(CGRect)arg1 ;
-(void)setLayoutAttributesFrame:(CGRect)arg1 ;
-(void)setAfterPinningLocationYAdditions:(double)arg1 ;
-(void)setBeforePinningLocationYAdditions:(double)arg1 ;
-(CGRect)layoutAttributesFrame;
-(double)afterPinningLocationYAdditions;
-(double)beforePinningLocationYAdditions;
@end
