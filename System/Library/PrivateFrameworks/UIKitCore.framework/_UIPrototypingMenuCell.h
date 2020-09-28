/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIStackView, UILabel, _UIPrototypingValue;

@interface _UIPrototypingMenuCell : UITableViewCell {

	UIStackView* _stackView;
	UILabel* _titleLabel;
	_UIPrototypingValue* _prototypingSetting;

}

@property (nonatomic,readonly) UIStackView * stackView;                             //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) _UIPrototypingValue * prototypingSetting;              //@synthesize prototypingSetting=_prototypingSetting - In the implementation block
+(long long)_layoutAxis;
-(UIStackView *)stackView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)_prototypingSettingDidChange;
-(_UIPrototypingValue *)prototypingSetting;
-(void)setPrototypingSetting:(_UIPrototypingValue *)arg1 ;
@end
