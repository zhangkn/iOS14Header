/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCAccessChecker.h>

@class NSArray;

@interface FCMultiAccessChecker : FCAccessChecker {

	NSArray* _accessCheckers;

}

@property (nonatomic,copy,readonly) NSArray * accessCheckers;              //@synthesize accessCheckers=_accessCheckers - In the implementation block
-(NSArray *)accessCheckers;
-(BOOL)canSynchronouslyCheckAccessToItem:(id)arg1 ;
-(id)init;
-(id)initWithAccessCheckers:(id)arg1 ;
-(void)checkAccessToItem:(id)arg1 withQualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasAccessToItem:(id)arg1 blockedReason:(unsigned long long*)arg2 error:(id*)arg3 ;
@end
