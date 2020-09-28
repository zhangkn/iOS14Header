/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RBSGrant.h>

@interface RBSJetsamPriorityGrant : RBSGrant {

	long long _priority;

}

@property (nonatomic,readonly) long long priority;              //@synthesize priority=_priority - In the implementation block
+(id)grantWithForegroundPriority;
+(id)grantWithBackgroundPriority;
+(BOOL)supportsRBSXPCSecureCoding;
+(id)grantWithPriority:(long long)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)priority;
-(unsigned long long)hash;
-(id)description;
@end
