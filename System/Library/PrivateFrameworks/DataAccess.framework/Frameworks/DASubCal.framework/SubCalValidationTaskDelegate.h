/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SubCalValidationTaskDelegate <SubCalDATaskTrustDelegate>
@required
-(void)subCalValidationTask:(id)arg1 finishedWithError:(id)arg2 calendarName:(id)arg3 document:(id)arg4 calendarData:(id)arg5;
-(void)subCalValidationTask:(id)arg1 downloadProgressedTo:(long long)arg2 outOf:(long long)arg3;

@end
