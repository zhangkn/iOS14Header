/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TLKView.h>
#import <libobjc.A.dylib/TLKTextAreaViewDelegate.h>

@protocol TLKDetailsViewDelegate;
@class TLKTextAreaView, TLKRichText, TLKImage, NSArray, NSString;

@interface TLKDetailsView : TLKView <TLKTextAreaViewDelegate> {

	id<TLKDetailsViewDelegate> _delegate;

}

@property (nonatomic,retain) TLKTextAreaView * contentView; 
@property (assign,nonatomic) BOOL useCompactMode; 
@property (nonatomic,retain) TLKRichText * bannerBadge; 
@property (nonatomic,retain) TLKRichText * title; 
@property (assign,nonatomic) BOOL truncateTitleMiddle; 
@property (assign,nonatomic,__weak) id<TLKDetailsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TLKRichText * secondaryTitle; 
@property (assign,nonatomic) BOOL secondaryTitleIsDetached; 
@property (nonatomic,retain) TLKImage * secondaryTitleImage; 
@property (nonatomic,retain) NSArray * details; 
@property (nonatomic,retain) TLKRichText * footnote; 
@property (nonatomic,retain) NSString * footnoteButtonText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewForFirstBaselineLayout;
-(NSArray *)details;
-(id)viewForLastBaselineLayout;
-(void)layoutMarginsDidChange;
-(TLKRichText *)secondaryTitle;
-(TLKRichText *)title;
-(void)setSecondaryTitleImage:(TLKImage *)arg1 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(id)footnoteLabel;
-(void)setSecondaryTitle:(TLKRichText *)arg1 ;
-(void)setDelegate:(id<TLKDetailsViewDelegate>)arg1 ;
-(void)setFootnote:(TLKRichText *)arg1 ;
-(TLKImage *)secondaryTitleImage;
-(id)footnoteContainer;
-(id<TLKDetailsViewDelegate>)delegate;
-(BOOL)useCompactMode;
-(id)setupContentView;
-(TLKRichText *)footnote;
-(void)setUseCompactMode:(BOOL)arg1 ;
-(void)footnoteButtonPressed;
-(BOOL)truncateTitleMiddle;
-(void)setTruncateTitleMiddle:(BOOL)arg1 ;
-(BOOL)secondaryTitleIsDetached;
-(void)setSecondaryTitleIsDetached:(BOOL)arg1 ;
-(NSString *)footnoteButtonText;
-(void)setFootnoteButtonText:(NSString *)arg1 ;
-(id)titleContainer;
-(id)detailsFields;
-(id)detailsStrings;
-(id)footnoteLabelString;
-(id)footnoteButton;
-(TLKRichText *)bannerBadge;
-(void)setBannerBadge:(TLKRichText *)arg1 ;
-(void)setDetails:(NSArray *)arg1 ;
-(void)setTitle:(TLKRichText *)arg1 ;
@end

