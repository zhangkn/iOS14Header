/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PK3DLiveCardViewDelegate.h>

@class PKPass, PK3DCardView, UIImageView;

@interface PKLiveRenderedCardFaceView : UIView <PK3DLiveCardViewDelegate> {

	PKPass* _pass;
	PK3DCardView* _cardView;
	UIImageView* _logoImageView;
	BOOL _invalidated;

}
-(void)invalidate;
-(void)dealloc;
-(void)layoutSubviews;
-(void)sceneDidRenderAtTime:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 pass:(id)arg2 ;
-(void)setMotionEnabled:(BOOL)arg1 ;
@end
