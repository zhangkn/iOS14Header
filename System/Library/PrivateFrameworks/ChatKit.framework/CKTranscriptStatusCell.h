/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKTranscriptLabelCell.h>

@class UIButton, NSAttributedString;

@interface CKTranscriptStatusCell : CKTranscriptLabelCell {

	char _buttonAlignmentRelativeToContent;
	UIButton* _statusButton;
	double _prevBalloonWidth;

}

@property (nonatomic,copy) NSAttributedString * attributedButtonText; 
@property (nonatomic,retain) UIButton * statusButton;                              //@synthesize statusButton=_statusButton - In the implementation block
@property (assign,nonatomic) char buttonAlignmentRelativeToContent;                //@synthesize buttonAlignmentRelativeToContent=_buttonAlignmentRelativeToContent - In the implementation block
@property (assign,nonatomic) double prevBalloonWidth;                              //@synthesize prevBalloonWidth=_prevBalloonWidth - In the implementation block
@property (nonatomic,readonly) BOOL shouldHideDuringDarkFSM; 
+(id)statusButton;
+(void)zoomAnimation:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
+(void)transitionFromView:(id)arg1 toView:(id)arg2 duration:(double)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(double)prevBalloonWidth;
-(UIButton *)statusButton;
-(char)buttonAlignmentRelativeToContent;
-(void)performReload:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performRemoval:(/*^block*/id)arg1 ;
-(void)addFilter:(id)arg1 ;
-(void)prepareForReuse;
-(void)setAttributedButtonText:(NSAttributedString *)arg1 ;
-(void)setButtonAlignmentRelativeToContent:(char)arg1 ;
-(void)setStatusButton:(UIButton *)arg1 ;
-(void)clearFilters;
-(BOOL)shouldHideDuringDarkFSM;
-(void)setOrientation:(char)arg1 ;
-(void)configureForChatItem:(id)arg1 ;
-(void)setPrevBalloonWidth:(double)arg1 ;
-(NSAttributedString *)attributedButtonText;
-(void)layoutSubviewsForAlignmentContents;
@end

