/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:28 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, CACBannerView;

@interface CACBannerViewPresenter : NSObject {

	UIView* _containingView;
	CACBannerView* _bannerView;

}

@property (nonatomic,retain) CACBannerView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,readonly) UIView * containingView;               //@synthesize containingView=_containingView - In the implementation block
+(double)durationToDisplayMessageString:(id)arg1 ;
-(void)setBannerView:(CACBannerView *)arg1 ;
-(UIView *)containingView;
-(CACBannerView *)bannerView;
-(void)_hideBannerView;
-(void)presentBannerViewWithText:(id)arg1 type:(long long)arg2 duration:(double)arg3 ;
-(id)initWithContainingView:(id)arg1 ;
-(void)presentBannerViewWithText:(id)arg1 type:(long long)arg2 ;
-(void)dismissBannerView;
@end
