/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNCommuteSessionObserver <NSObject>
@optional
-(void)commuteSessionDidArrive:(id)arg1;
-(void)commuteSession:(id)arg1 didChangeToState:(unsigned long long)arg2;

@required
-(void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2;

@end

