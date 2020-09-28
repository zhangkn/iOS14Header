/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAttachmentMessagePartChatItem.h>

@class CKLocationMediaObject, NSURL;

@interface CKTranscriptLocationChatItem : CKAttachmentMessagePartChatItem {

	CKLocationMediaObject* _locationMediaObject;
	NSURL* _locationURL;

}

@property (nonatomic,retain) CKLocationMediaObject * locationMediaObject;              //@synthesize locationMediaObject=_locationMediaObject - In the implementation block
@property (nonatomic,retain) NSURL * locationURL;                                      //@synthesize locationURL=_locationURL - In the implementation block
-(void)setLocationURL:(NSURL *)arg1 ;
-(CKLocationMediaObject *)locationMediaObject;
-(void)setLocationMediaObject:(CKLocationMediaObject *)arg1 ;
-(Class)balloonViewClass;
-(id)mediaObject;
-(id)pasteboardItems;
-(id)transferGUID;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(NSURL *)locationURL;
-(BOOL)canCopy;
@end
