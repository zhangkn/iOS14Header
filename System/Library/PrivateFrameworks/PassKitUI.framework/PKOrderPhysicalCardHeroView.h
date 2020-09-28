/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, PKPhysicalCardArtworkView;

@interface PKOrderPhysicalCardHeroView : UIView {

	UIImageView* _backgroundView;
	PKPhysicalCardArtworkView* _artworkView;

}

@property (nonatomic,readonly) PKPhysicalCardArtworkView * artworkView;              //@synthesize artworkView=_artworkView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_backgroundImage;
-(void)layoutSubviews;
-(PKPhysicalCardArtworkView *)artworkView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
