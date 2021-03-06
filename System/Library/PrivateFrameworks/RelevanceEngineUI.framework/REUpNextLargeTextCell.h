/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:07 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <RelevanceEngineUI/REUpNextBaseCell.h>

@class UIFont, UILayoutGuide, REUpNextImageView, UILabel, UIVisualEffectView, NSArray;

@interface REUpNextLargeTextCell : REUpNextBaseCell {

	BOOL _showingHeaderImage;
	BOOL _showingBodyImage;
	unsigned _currentImageEdge;
	UIFont* _standardBodyFont;
	UIFont* _monospaceBodyFont;
	UILayoutGuide* _contentLayoutGuide;
	REUpNextImageView* _headerImage;
	REUpNextImageView* _bodyImage;
	UILabel* _headerLabel;
	UILabel* _bodyLabel;
	UIVisualEffectView* _headerVisualEffectView;
	UIVisualEffectView* _bodyVisualEffectView;
	UIVisualEffectView* _headerImageVisualEffectView;
	NSArray* _headerWithLeftImageConstraints;
	NSArray* _headerWithRightImageConstraints;
	NSArray* _headerWithNoImageConstraints;
	NSArray* _bodyWithLeftImageConstraints;
	NSArray* _bodyWithNoImageConstraints;

}
+(void)initialize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)configureWithContent:(id)arg1 ;
-(void)defaultTextColorDidChange;
-(void)_updateHeaderColor;
-(id)primaryEffectViews;
-(id)secondaryEffectViews;
@end

