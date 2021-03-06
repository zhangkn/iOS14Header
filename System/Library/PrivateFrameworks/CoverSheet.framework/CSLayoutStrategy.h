/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSPersistentContentLayoutProvidingCSDateTimeLayoutAggregating;
#import <CoverSheet/CoverSheet-Structs.h>
@interface CSLayoutStrategy : NSObject {

	id<CSPersistentContentLayoutProviding><CSDateTimeLayoutAggregating> _persistentLayout;

}

@property (assign,nonatomic,__weak) id<CSPersistentContentLayoutProviding><CSDateTimeLayoutAggregating> persistentLayout;              //@synthesize persistentLayout=_persistentLayout - In the implementation block
-(double)_listInsetXForPage:(id)arg1 ;
-(CGRect)suggestedFrameForDateTimeViewInScreenCoordinates:(CGRect)arg1 forceCenteredX:(BOOL)arg2 ;
-(id<CSPersistentContentLayoutProviding><CSDateTimeLayoutAggregating>)persistentLayout;
-(CGRect)suggestedFrameForListForPage:(id)arg1 bounds:(CGRect)arg2 ;
-(unsigned long long)_listWidthStrategyForPage:(id)arg1 ;
-(unsigned long long)_listLayoutForPage:(id)arg1 ;
-(UIEdgeInsets)suggestedContentInsetsForListForPage:(id)arg1 ;
-(double)_customListWidthForPage:(id)arg1 startingBounds:(CGRect)arg2 ;
-(void)setPersistentLayout:(id<CSPersistentContentLayoutProviding><CSDateTimeLayoutAggregating>)arg1 ;
@end

