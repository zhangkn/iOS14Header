/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FLFollowUpController, NSObject;

@interface AMSFollowUp : NSObject {

	FLFollowUpController* _followUpController;
	NSObject*<OS_dispatch_queue> _followUpQueue;

}

@property (nonatomic,retain) FLFollowUpController * followUpController;               //@synthesize followUpController=_followUpController - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> followUpQueue;              //@synthesize followUpQueue=_followUpQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)followUpQueue;
-(id)clearFollowUpWithBackingIdentifier:(id)arg1 ;
-(id)_pendingFollowUpWithBackingIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)clearFollowUpWithIdentifier:(id)arg1 account:(id)arg2 ;
-(void)setFollowUpQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)pendingFollowUpsForAccount:(id)arg1 ;
-(id)pendingFollowUpWithIdentifier:(id)arg1 account:(id)arg2 ;
-(id)init;
-(FLFollowUpController *)followUpController;
-(void)setFollowUpController:(FLFollowUpController *)arg1 ;
-(id)postFollowUpItem:(id)arg1 ;
-(id)clearFollowUpItem:(id)arg1 ;
-(id)pendingFollowUps;
@end
