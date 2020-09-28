/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class EKEvent, UITraitCollection;


@protocol EKMutableDayOccurrenceState <NSObject>
@property (nonatomic,retain) EKEvent * occurrence; 
@property (assign,nonatomic) long long birthdayCount; 
@property (assign,nonatomic) BOOL isProposedTime; 
@property (assign,nonatomic) BOOL isSelected; 
@property (assign,nonatomic) BOOL isDimmed; 
@property (assign,nonatomic) BOOL usesSmallText; 
@property (assign,nonatomic) BOOL isVibrant; 
@property (assign,nonatomic) double travelTime; 
@property (assign,nonatomic) long long colorBackgroundStyle; 
@property (assign,nonatomic) CGRect backgroundRect; 
@property (assign,nonatomic) double travelTimeHeight; 
@property (assign,nonatomic) double visibleHeight; 
@property (assign,nonatomic) double topYBoundaryForText; 
@property (nonatomic,retain) UITraitCollection * traitCollection; 
@required
-(void)setTravelTime:(double)arg1;
-(double)visibleHeight;
-(double)travelTime;
-(EKEvent *)occurrence;
-(long long)birthdayCount;
-(BOOL)isVibrant;
-(void)setIsSelected:(BOOL)arg1;
-(void)setUsesSmallText:(BOOL)arg1;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(id)arg1;
-(BOOL)usesSmallText;
-(BOOL)isDimmed;
-(void)setBirthdayCount:(long long)arg1;
-(void)setTravelTimeHeight:(double)arg1;
-(CGRect)backgroundRect;
-(double)travelTimeHeight;
-(void)setIsProposedTime:(BOOL)arg1;
-(void)setBackgroundRect:(CGRect)arg1;
-(double)topYBoundaryForText;
-(BOOL)isSelected;
-(void)setTopYBoundaryForText:(double)arg1;
-(void)setOccurrence:(id)arg1;
-(BOOL)isProposedTime;
-(void)setIsDimmed:(BOOL)arg1;
-(long long)colorBackgroundStyle;
-(void)setVisibleHeight:(double)arg1;
-(void)setColorBackgroundStyle:(long long)arg1;
-(void)setIsVibrant:(BOOL)arg1;

@end
