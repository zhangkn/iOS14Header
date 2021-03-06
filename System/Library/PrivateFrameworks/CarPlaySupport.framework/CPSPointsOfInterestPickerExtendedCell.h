/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <CarPlaySupport/CPSPointsOfInterestPickerCell.h>

@class NSString, UILabel;

@interface CPSPointsOfInterestPickerExtendedCell : CPSPointsOfInterestPickerCell {

	NSString* _title;
	NSString* _subtitle;
	NSString* _text;
	UILabel* _extendedTitleLabel;
	UILabel* _extendedSubtitleLabel;
	UILabel* _extendedInformativeLabel;

}

@property (nonatomic,retain) UILabel * extendedTitleLabel;                    //@synthesize extendedTitleLabel=_extendedTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * extendedSubtitleLabel;                 //@synthesize extendedSubtitleLabel=_extendedSubtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * extendedInformativeLabel;              //@synthesize extendedInformativeLabel=_extendedInformativeLabel - In the implementation block
@property (nonatomic,retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                             //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * text;                                 //@synthesize text=_text - In the implementation block
+(id)identifier;
-(UIEdgeInsets)safeAreaInsets;
-(NSString *)subtitle;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)text;
-(NSString *)title;
-(void)setText:(NSString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setupViews;
-(void)setTitle:(NSString *)arg1 ;
-(UILabel *)extendedTitleLabel;
-(UILabel *)extendedSubtitleLabel;
-(UILabel *)extendedInformativeLabel;
-(void)setExtendedTitleLabel:(UILabel *)arg1 ;
-(void)setExtendedSubtitleLabel:(UILabel *)arg1 ;
-(void)setExtendedInformativeLabel:(UILabel *)arg1 ;
@end

