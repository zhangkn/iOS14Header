/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDAnimationShapeTarget.h>

@interface PDAnimationChartTarget : PDAnimationShapeTarget {

	BOOL mHasCatagoryIndex;
	int mCatagoryIndex;
	BOOL mHasSeriesIndex;
	int mSeriesIndex;
	BOOL mHasBuildStep;
	int mBuildStep;
	int mChartSubElementType;

}
-(int)seriesIndex;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setSeriesIndex:(int)arg1 ;
-(BOOL)hasSeriesIndex;
-(void)setChartSubElementType:(int)arg1 ;
-(int)chartSubElementType;
-(int)catagoryIndex;
-(int)buildStep;
-(BOOL)hasCatagoryIndex;
-(void)setCatagoryIndex:(int)arg1 ;
-(BOOL)hasBuildStep;
-(void)setBuildStep:(int)arg1 ;
@end
