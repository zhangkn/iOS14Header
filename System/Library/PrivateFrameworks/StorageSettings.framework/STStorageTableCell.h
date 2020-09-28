/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:31 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class NSMutableArray, NSLayoutConstraint, UIImageView, UIView, UILabel, UIActivityIndicatorView, UIImage, NSString;

@interface STStorageTableCell : PSTableCell {

	NSMutableArray* _normalFontConstraints;
	NSMutableArray* _largeFontConstraints;
	NSMutableArray* _infoConstraints;
	NSLayoutConstraint* _iconSizeConstraint;
	NSLayoutConstraint* _sizeRightConstraint;
	NSLayoutConstraint* _minHeightConstraint;
	NSLayoutConstraint* _noCloudIconConstraint;
	NSLayoutConstraint* _cloudIconConstraint;
	UIImageView* _iconView;
	UIView* _titleInfoView;
	UILabel* _titleLabel;
	UILabel* _infoLabel;
	UILabel* _sizeLabel;
	UIImageView* _cloudIconView;
	long long _size;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIImage * icon; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * info; 
@property (nonatomic,retain) NSString * sizeString; 
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) BOOL infoHidden; 
@property (assign,nonatomic) BOOL cloudIconHidden; 
@property (assign,nonatomic) long long size; 
+(double)defaultCellHeight;
-(NSString *)info;
-(void)setInfo:(NSString *)arg1 ;
-(void)setInfoHidden:(BOOL)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)updateConstraints;
-(NSString *)title;
-(void)setSize:(long long)arg1 ;
-(UIImage *)icon;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)size;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(BOOL)infoHidden;
-(void)createLargeFontConstraints;
-(void)createNormalFontConstraints;
-(void)setSizeString:(NSString *)arg1 ;
-(NSString *)sizeString;
-(void)setupTitleAndInfoConstraints;
-(BOOL)cloudIconHidden;
-(void)setCloudIconHidden:(BOOL)arg1 ;
@end
