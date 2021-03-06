/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNVisualIdentityPickerViewController.h>
#import <libobjc.A.dylib/CNVisualIdentityPickerViewControllerDelegate.h>

@protocol CKVisualIdentityPickerViewControllerDelegate;
@class CKConversation;

@interface CKVisualIdentityPickerViewController : CNVisualIdentityPickerViewController <CNVisualIdentityPickerViewControllerDelegate> {

	CKConversation* _conversation;
	id<CKVisualIdentityPickerViewControllerDelegate> _presentationDelegate;

}

@property (nonatomic,retain) CKConversation * conversation;                                                             //@synthesize conversation=_conversation - In the implementation block
@property (assign,nonatomic,__weak) id<CKVisualIdentityPickerViewControllerDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
+(id)imagePickerForContact:(id)arg1 ;
+(id)imagePickerForGroupIdentity:(id)arg1 withConversation:(id)arg2 ;
-(void)visualIdentityPicker:(id)arg1 didUpdatePhotoForVisualIdentity:(id)arg2 withContactImage:(id)arg3 ;
-(void)visualIdentityPickerDidCancel:(id)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(void)setPresentationDelegate:(id<CKVisualIdentityPickerViewControllerDelegate>)arg1 ;
-(CKConversation *)conversation;
-(id<CKVisualIdentityPickerViewControllerDelegate>)presentationDelegate;
@end

