/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PowerUIPredictorHelper : NSObject
+(double)getHourBinID:(id)arg1 forHourBin:(unsigned long long)arg2 ;
+(double)meanOf:(id)arg1 ;
+(id)timeBetweenUsesForSortedDescendingByAgeEvents:(id)arg1 forHourBin:(unsigned long long)arg2 aroundDate:(id)arg3 ;
+(double)medianOf:(id)arg1 ;
+(double)standardDeviationOf:(id)arg1 ;
+(id)events:(id)arg1 forHourBin:(unsigned long long)arg2 date:(id)arg3 withMaxDuration:(double)arg4 ;
+(id)timeBetweenUsesForSortedDescendingByAgeEvents:(id)arg1 forHourBin:(unsigned long long)arg2 atDate:(id)arg3 ;
@end

