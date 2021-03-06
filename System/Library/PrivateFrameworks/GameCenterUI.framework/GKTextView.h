/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:14 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UITextView.h>

@class GKTextStyle, GKLabel, NSString, NSAttributedString;

@interface GKTextView : UITextView {

	GKTextStyle* __baseStyle;
	GKTextStyle* _appliedStyle;
	GKLabel* _placeholderLabel;

}

@property (nonatomic,retain) GKTextStyle * appliedStyle;                                  //@synthesize appliedStyle=_appliedStyle - In the implementation block
@property (assign,nonatomic) GKLabel * placeholderLabel;                                  //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,retain) NSString * placeholderText; 
@property (nonatomic,retain) NSAttributedString * attributedPlaceholderText; 
@property (nonatomic,retain) GKTextStyle * _baseStyle;                                    //@synthesize _baseStyle=__baseStyle - In the implementation block
+(void)initialize;
-(void)_UIAppearance_set_baseStyle:(id)arg1 ;
-(id)insertDictationResultPlaceholder;
-(void)setAttributedText:(id)arg1 ;
-(GKLabel *)placeholderLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)placeholderText;
-(void)dealloc;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(GKTextStyle *)_baseStyle;
-(void)setText:(id)arg1 ;
-(void)layoutSubviews;
-(void)replayAndApplyStyle;
-(void)updatePlaceholderVisibility;
-(void)setAttributedPlaceholderText:(NSAttributedString *)arg1 ;
-(void)textStorageDidChangeNotification:(id)arg1 ;
-(void)setAppliedStyle:(GKTextStyle *)arg1 ;
-(NSAttributedString *)attributedPlaceholderText;
-(void)setPlaceholderLabel:(GKLabel *)arg1 ;
-(void)set_baseStyle:(GKTextStyle *)arg1 ;
-(GKTextStyle *)appliedStyle;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(void)applyTextStyle:(id)arg1 ;
@end

