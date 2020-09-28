/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL;


@protocol ECLocalMessageActionBuilder <NSObject>
@property (nonatomic,retain) NSString * messageActionPersistentID; 
@property (nonatomic,retain) NSURL * mailboxURL; 
@property (assign,nonatomic) BOOL userInitiated; 
@required
-(BOOL)userInitiated;
-(void)setUserInitiated:(BOOL)arg1;
-(NSURL *)mailboxURL;
-(NSString *)messageActionPersistentID;
-(void)setMessageActionPersistentID:(id)arg1;
-(void)setMailboxURL:(id)arg1;

@end
