/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/EMMessageChangeAction.h>

@class ECMessageFlagChange;

@interface EMMessageFlagChangeAction : EMMessageChangeAction {

	ECMessageFlagChange* _flagChange;

}

@property (nonatomic,readonly) ECMessageFlagChange * flagChange;              //@synthesize flagChange=_flagChange - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)signpostType;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMessageListItems:(id)arg1 flagChange:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(ECMessageFlagChange *)flagChange;
@end
