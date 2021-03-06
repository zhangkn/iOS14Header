/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class CKConversation;

@interface CKTranscriptHeaderViewController : UIViewController {

	BOOL _shouldInvalidateOnAddressBookChange;
	CKConversation* _conversation;

}

@property (nonatomic,retain) CKConversation * conversation;                           //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,readonly) BOOL shouldInvalidateOnAddressBookChange;              //@synthesize shouldInvalidateOnAddressBookChange=_shouldInvalidateOnAddressBookChange - In the implementation block
-(BOOL)shouldInvalidateOnAddressBookChange;
-(id)initWithConversation:(id)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(CKConversation *)conversation;
@end

