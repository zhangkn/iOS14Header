/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:36 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDPartitioner
@required
-(id)nextHintForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL*)arg5;
-(id)layoutForHint:(id)arg1 parentLayout:(id)arg2;
-(id)nextLayoutForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(BOOL)arg4 outFinished:(out BOOL*)arg5;
-(BOOL)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(BOOL)arg3 delta:(int)arg4;
-(id)hintForLayout:(id)arg1;

@end
