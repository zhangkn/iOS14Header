/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UIButton.h>

@class UILabel, NSMutableArray;

@interface ICDocCamSaveButton : UIButton {

	long long _documentCount;
	long long _maxWidthForPortraitIPhone;
	UILabel* _countLabel;
	UILabel* _saveLabel;
	NSMutableArray* _layoutConstraints;

}

@property (nonatomic,retain) UILabel * countLabel;                             //@synthesize countLabel=_countLabel - In the implementation block
@property (nonatomic,retain) UILabel * saveLabel;                              //@synthesize saveLabel=_saveLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * layoutConstraints;               //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (assign,nonatomic) long long documentCount;                          //@synthesize documentCount=_documentCount - In the implementation block
@property (assign,nonatomic) long long maxWidthForPortraitIPhone;              //@synthesize maxWidthForPortraitIPhone=_maxWidthForPortraitIPhone - In the implementation block
-(id)accessibilityLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)accessibilityUserInputLabels;
-(NSMutableArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSMutableArray *)arg1 ;
-(void)setCountLabel:(UILabel *)arg1 ;
-(id)accessibilityHint;
-(UILabel *)countLabel;
-(UILabel *)saveLabel;
-(void)setSaveLabel:(UILabel *)arg1 ;
-(long long)documentCount;
-(id)saveButtonCountStringForDocumentCount:(unsigned long long)arg1 ;
-(id)saveButtonTitleForDocumentCount:(unsigned long long)arg1 ;
-(long long)maxWidthForPortraitIPhone;
-(void)setDocumentCount:(long long)arg1 ;
-(void)setMaxWidthForPortraitIPhone:(long long)arg1 ;
@end
