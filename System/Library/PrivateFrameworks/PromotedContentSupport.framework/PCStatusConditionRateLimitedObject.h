/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentSupport.framework/PromotedContentSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSDate;

@interface PCStatusConditionRateLimitedObject : NSObject {

	NSUUID* _statusCondition;
	NSDate* _setTime;
	long long _operation;

}

@property (nonatomic,readonly) NSUUID * statusCondition;              //@synthesize statusCondition=_statusCondition - In the implementation block
@property (nonatomic,readonly) NSDate * setTime;                      //@synthesize setTime=_setTime - In the implementation block
@property (nonatomic,readonly) long long operation;                   //@synthesize operation=_operation - In the implementation block
-(long long)operation;
-(NSDate *)setTime;
-(id)init:(id)arg1 at:(id)arg2 kind:(long long)arg3 ;
-(NSUUID *)statusCondition;
@end

