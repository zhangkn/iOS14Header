/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailCore/ECLocalMessageAction.h>
#import <libobjc.A.dylib/ECTransferMessageActionBuilder.h>

@class NSURL, NSArray, NSMutableOrderedSet, NSString;

@interface ECTransferMessageAction : ECLocalMessageAction <ECTransferMessageActionBuilder> {

	NSMutableOrderedSet* _itemsToDownload;
	NSMutableOrderedSet* _itemsToCopy;
	NSMutableOrderedSet* _itemsToDelete;
	long long _transferType;
	NSURL* _sourceMailboxURL;
	NSURL* _destinationMailboxURL;

}

@property (assign,nonatomic) long long transferType;                            //@synthesize transferType=_transferType - In the implementation block
@property (nonatomic,retain) NSURL * sourceMailboxURL;                          //@synthesize sourceMailboxURL=_sourceMailboxURL - In the implementation block
@property (nonatomic,retain) NSURL * destinationMailboxURL;                     //@synthesize destinationMailboxURL=_destinationMailboxURL - In the implementation block
@property (nonatomic,retain) NSArray * itemsToDownload; 
@property (nonatomic,retain) NSArray * itemsToCopy; 
@property (nonatomic,retain) NSArray * itemsToDelete; 
@property (nonatomic,retain) NSString * messageActionPersistentID; 
@property (nonatomic,retain) NSURL * mailboxURL; 
@property (assign,nonatomic) BOOL userInitiated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDestinationMailboxURL:(NSURL *)arg1 ;
-(id)init;
-(NSArray *)itemsToDelete;
-(NSArray *)itemsToCopy;
-(NSURL *)sourceMailboxURL;
-(NSURL *)destinationMailboxURL;
-(NSString *)description;
-(id)initWithBuilder:(/*^block*/id)arg1 ;
-(NSArray *)itemsToDownload;
-(long long)transferType;
-(void)setTransferType:(long long)arg1 ;
-(void)setSourceMailboxURL:(NSURL *)arg1 ;
-(void)setItemsToDownload:(NSArray *)arg1 ;
-(void)setItemsToCopy:(NSArray *)arg1 ;
-(void)setItemsToDelete:(NSArray *)arg1 ;
-(void)updateWithCompletedItems:(id)arg1 forPhase:(long long)arg2 ;
-(void)updateWithFailedItems:(id)arg1 forPhase:(long long)arg2 ;
@end

