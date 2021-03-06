/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthExperienceUI/HealthExperienceUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@interface HealthExperienceUI.HostViewCell : UICollectionViewCell {

	 hostView;
	 recreateViewControllerOnHostedFeedItemChange;
	 item;

}

@property (assign,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL selected; 
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)prepareForReuse;
-(BOOL)isSelected;
-(id)initWithCoder:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

