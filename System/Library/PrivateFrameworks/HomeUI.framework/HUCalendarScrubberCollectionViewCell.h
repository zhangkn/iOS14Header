/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UIView, UILabel;

@interface HUCalendarScrubberCollectionViewCell : UICollectionViewCell {

	BOOL _enabled;
	NSString* _dayOfWeekString;
	NSString* _dateString;
	UIView* _circleView;
	UILabel* _dateLabel;
	UILabel* _dayMonthLabel;

}

@property (nonatomic,retain) UIView * circleView;                        //@synthesize circleView=_circleView - In the implementation block
@property (nonatomic,retain) UILabel * dateLabel;                        //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,retain) UILabel * dayMonthLabel;                    //@synthesize dayMonthLabel=_dayMonthLabel - In the implementation block
@property (nonatomic,copy) NSString * dayOfWeekString;                   //@synthesize dayOfWeekString=_dayOfWeekString - In the implementation block
@property (nonatomic,copy) NSString * dateString;                        //@synthesize dateString=_dateString - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)setDateLabel:(UILabel *)arg1 ;
-(void)setDateString:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(UILabel *)dateLabel;
-(void)layoutSubviews;
-(NSString *)dateString;
-(void)setDayOfWeekString:(NSString *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(UIView *)circleView;
-(UILabel *)dayMonthLabel;
-(NSString *)dayOfWeekString;
-(void)setCircleView:(UIView *)arg1 ;
-(void)setDayMonthLabel:(UILabel *)arg1 ;
@end

