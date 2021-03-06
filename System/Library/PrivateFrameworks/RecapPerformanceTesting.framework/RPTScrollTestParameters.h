/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RecapPerformanceTesting.framework/RecapPerformanceTesting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class RCPSyntheticEventStream, NSString;


@protocol RPTScrollTestParameters <NSObject>
@property (nonatomic,readonly) RCPSyntheticEventStream * eventStream; 
@property (nonatomic,copy,readonly) id completionHandler; 
@property (nonatomic,copy) NSString * testName; 
@required
-(NSString *)testName;
-(void)setTestName:(id)arg1;
-(RCPSyntheticEventStream *)eventStream;
-(id)completionHandler;

@end

