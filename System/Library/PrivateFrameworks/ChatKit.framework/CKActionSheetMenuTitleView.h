/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIScrollView, UILabel;

@interface CKActionSheetMenuTitleView : UIView {

	UIScrollView* _scrollView;
	UILabel* _titleLabel;

}
-(id)initWithTitle:(id)arg1 ;
-(id)_textColor;
-(double)_desiredHeightForLabel:(id)arg1 parentBoundingRect:(CGRect)arg2 ;
-(void)updateTitleConstraintsForBoundingRect:(CGRect)arg1 ;
@end
