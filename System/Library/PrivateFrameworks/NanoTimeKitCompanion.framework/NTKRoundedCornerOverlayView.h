/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, CLKDevice;

@interface NTKRoundedCornerOverlayView : UIView {

	double _cornerRadius;
	UIImageView* _upperLeftCorner;
	UIImageView* _upperRightCorner;
	UIImageView* _bottomLeftCorner;
	UIImageView* _bottomRightCorner;
	CLKDevice* _device;

}
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 forDeviceCornerRadius:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2 cornerRadius:(double)arg3 ;
@end
