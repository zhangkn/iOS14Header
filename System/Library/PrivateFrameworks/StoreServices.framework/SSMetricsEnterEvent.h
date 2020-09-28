/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsEnterEvent : SSMetricsBaseEvent

@property (nonatomic,retain) NSString * enterType; 
@property (nonatomic,retain) NSString * referringAppName; 
@property (nonatomic,retain) NSString * referringURL; 
-(void)setReferringAppName:(NSString *)arg1 ;
-(NSString *)enterType;
-(void)setEnterType:(NSString *)arg1 ;
-(void)setEnterTypeWithLaunchReason:(long long)arg1 ;
-(NSString *)referringAppName;
-(id)init;
-(void)setReferringURL:(NSString *)arg1 ;
-(id)description;
-(NSString *)referringURL;
@end
