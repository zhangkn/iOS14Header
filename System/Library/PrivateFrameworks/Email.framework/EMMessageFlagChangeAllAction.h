/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/EMMessageFlagChangeAction.h>

@class NSArray;

@interface EMMessageFlagChangeAllAction : EMMessageFlagChangeAction {

	NSArray* _mailboxObjectIDs;

}

@property (nonatomic,copy,readonly) NSArray * mailboxObjectIDs;              //@synthesize mailboxObjectIDs=_mailboxObjectIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)mailboxObjectIDs;
-(long long)signpostType;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMailboxes:(id)arg1 messageListItemsToExclude:(id)arg2 flagChange:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
