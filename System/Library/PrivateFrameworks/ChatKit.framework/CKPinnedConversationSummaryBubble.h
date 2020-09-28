/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKPinnedConversationTailedActivityItemView.h>

@class CKPinnedConversationSummaryBubbleActivityItem, UILabel, NSString;

@interface CKPinnedConversationSummaryBubble : CKPinnedConversationTailedActivityItemView {

	CKPinnedConversationSummaryBubbleActivityItem* _summaryBubbleActivityItem;
	double _textScaleFactor;
	UILabel* _summaryLabel;

}

@property (nonatomic,retain) UILabel * summaryLabel;                                                                   //@synthesize summaryLabel=_summaryLabel - In the implementation block
@property (nonatomic,readonly) CKPinnedConversationSummaryBubbleActivityItem * summaryBubbleActivityItem;              //@synthesize summaryBubbleActivityItem=_summaryBubbleActivityItem - In the implementation block
@property (nonatomic,retain) NSString * summaryText; 
@property (assign,nonatomic) double textScaleFactor;                                                                   //@synthesize textScaleFactor=_textScaleFactor - In the implementation block
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setActivityItem:(id)arg1 ;
-(BOOL)supportsActivityItemViewContentScale;
-(void)setActivityItemViewContentScale:(long long)arg1 ;
-(BOOL)supportsAlignmentWithOriginationSubAvatarFrame;
-(long long)contentViewContentMode;
-(UIEdgeInsets)contentViewPadding;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateSummaryLabelTextColors;
-(void)_updateSummaryLabel;
-(id)initWithSummaryBubbleActivityItem:(id)arg1 ;
-(void)setSummaryText:(NSString *)arg1 ;
-(NSString *)summaryText;
-(void)setTextScaleFactor:(double)arg1 ;
-(CKPinnedConversationSummaryBubbleActivityItem *)summaryBubbleActivityItem;
-(double)textScaleFactor;
-(void)setSummaryLabel:(UILabel *)arg1 ;
-(void)_updateFont;
-(UILabel *)summaryLabel;
-(double)pillCornerRadius;
@end
