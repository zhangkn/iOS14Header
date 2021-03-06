/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol LUILogFilterCurrentPredicateTableViewCellDelegate;
@class UILabel, UIButton;

@interface LUILogFilterCurrentPredicateTableViewCell : UITableViewCell {

	id<LUILogFilterCurrentPredicateTableViewCellDelegate> _delegate;
	UILabel* _titleLabel;
	UIButton* _deleteButton;

}

@property (assign,nonatomic,__weak) id<LUILogFilterCurrentPredicateTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * deleteButton;                                                          //@synthesize deleteButton=_deleteButton - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)_deleteButtonTapped:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<LUILogFilterCurrentPredicateTableViewCellDelegate>)arg1 ;
-(id<LUILogFilterCurrentPredicateTableViewCellDelegate>)delegate;
-(id)_createTitleLabel;
-(void)_setupUI;
-(UIButton *)deleteButton;
-(id)_createDeleteButton;
@end

