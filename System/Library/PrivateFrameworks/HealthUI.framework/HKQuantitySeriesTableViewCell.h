/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class NSArray;

@interface HKQuantitySeriesTableViewCell : UITableViewCell {

	NSArray* _currentConstraints;

}

@property (nonatomic,retain) NSArray * currentConstraints;              //@synthesize currentConstraints=_currentConstraints - In the implementation block
+(id)reuseIdentifier;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSArray *)currentConstraints;
-(void)setCurrentConstraints:(NSArray *)arg1 ;
-(void)_configureLabels;
-(void)_configureLayoutForTraitCollection:(id)arg1 ;
-(id)_makeAccessibilityConstraints;
-(id)_makeConstraints;
@end

