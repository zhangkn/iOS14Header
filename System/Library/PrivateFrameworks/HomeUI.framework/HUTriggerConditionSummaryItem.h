/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@class NSArray, HMHome;

@interface HUTriggerConditionSummaryItem : HFItem {

	NSArray* _conditions;
	HMHome* _home;

}

@property (nonatomic,readonly) NSArray * conditions;              //@synthesize conditions=_conditions - In the implementation block
@property (nonatomic,readonly) HMHome * home;                     //@synthesize home=_home - In the implementation block
-(NSArray *)conditions;
-(id)initWithConditions:(id)arg1 home:(id)arg2 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HMHome *)home;
@end

