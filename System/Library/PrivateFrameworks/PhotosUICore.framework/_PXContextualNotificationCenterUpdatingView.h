/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:05 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class PXContextualNotificationCenter;

@interface _PXContextualNotificationCenterUpdatingView : UIView {

	PXContextualNotificationCenter* _contextualNotificationCenter;

}

@property (assign,nonatomic,__weak) PXContextualNotificationCenter * contextualNotificationCenter;              //@synthesize contextualNotificationCenter=_contextualNotificationCenter - In the implementation block
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(PXContextualNotificationCenter *)contextualNotificationCenter;
-(void)setContextualNotificationCenter:(PXContextualNotificationCenter *)arg1 ;
@end
