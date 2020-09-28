/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLSingleComponentLayout;

@interface NFLPairSubBatchLayout : NFLSubBatchLayout {

	NFLSingleComponentLayout* _componentOne;
	NFLSingleComponentLayout* _componentTwo;

}

@property (nonatomic,retain) NFLSingleComponentLayout * componentOne;              //@synthesize componentOne=_componentOne - In the implementation block
@property (nonatomic,retain) NFLSingleComponentLayout * componentTwo;              //@synthesize componentTwo=_componentTwo - In the implementation block
+(id)pairComponentFeedSetting:(id)arg1 componentOne:(id)arg2 componentTwo:(id)arg3 ;
-(double)rank;
-(unsigned long long)rowSpan;
-(unsigned long long)columnSpan;
-(id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4 ;
-(BOOL)_isHorizontal;
-(id)tileInfosUsed;
-(BOOL)isValid;
-(id)singleComponentLayouts;
-(void)setComponentOne:(NFLSingleComponentLayout *)arg1 ;
-(void)setComponentTwo:(NFLSingleComponentLayout *)arg1 ;
-(NFLSingleComponentLayout *)componentOne;
-(NFLSingleComponentLayout *)componentTwo;
@end
