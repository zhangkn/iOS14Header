/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFAnalyticsProtocol <NSObject>
@required
+(id)logger;
-(void)logResultForEvent:(id)arg1 hardFailure:(BOOL)arg2 result:(id)arg3;
-(id)logSystemMetricsForActivityNamed:(id)arg1 withAction:(/*^block*/id)arg2;
-(void)logResultForEvent:(id)arg1 hardFailure:(BOOL)arg2 result:(id)arg3 withAttributes:(id)arg4;
-(id)startLogSystemMetricsForActivityNamed:(id)arg1;
-(id)AddMultiSamplerForName:(id)arg1 withTimeInterval:(double)arg2 block:(/*^block*/id)arg3;

@end

