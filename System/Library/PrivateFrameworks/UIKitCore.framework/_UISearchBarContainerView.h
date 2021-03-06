/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _UISearchBarContainerView : UIView {

	UIView* _subview;
	int _resizingMask;
	BOOL _shouldSendContainerSafeAreaInsetsDidChange;

}
-(void)willRemoveSubview:(id)arg1 ;
-(void)_didRemoveSubview:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3 ;
-(void)_uncontainerSubview:(id)arg1 ;
-(void)enforceSubviewAtBottomIfNecessary;
-(void)safeAreaInsetsDidChange;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

