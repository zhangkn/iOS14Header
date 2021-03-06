/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, ECSubject, MFMailboxUid, NSArray, MFAddressAtomStatusManager;


@protocol MessageHeaderViewModelBuilder <MessageItemViewModelBuilder>
@property (nonatomic,copy) NSDate * dateSent; 
@property (nonatomic,copy) ECSubject * subject; 
@property (nonatomic,copy) MFMailboxUid * mailbox; 
@property (nonatomic,copy) NSArray * senderList; 
@property (nonatomic,copy) NSArray * toList; 
@property (nonatomic,copy) NSArray * ccList; 
@property (nonatomic,copy) NSArray * bccList; 
@property (nonatomic,retain) MFAddressAtomStatusManager * atomManager; 
@required
-(NSDate *)dateSent;
-(NSArray *)toList;
-(NSArray *)ccList;
-(void)setSubject:(id)arg1;
-(ECSubject *)subject;
-(void)setDateSent:(id)arg1;
-(NSArray *)senderList;
-(MFMailboxUid *)mailbox;
-(void)setSenderList:(id)arg1;
-(void)setToList:(id)arg1;
-(void)setCcList:(id)arg1;
-(void)setBccList:(id)arg1;
-(NSArray *)bccList;
-(void)setMailbox:(id)arg1;
-(MFAddressAtomStatusManager *)atomManager;
-(void)setAtomManager:(id)arg1;

@end

