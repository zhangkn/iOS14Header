/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate;


@protocol CPAnalyticsEventProtocol <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSDate * timestamp; 
@required
-(id)copyRawPayload;
-(id)propertyForKey:(id)arg1;
-(NSDate *)timestamp;
-(NSString *)name;

@end
