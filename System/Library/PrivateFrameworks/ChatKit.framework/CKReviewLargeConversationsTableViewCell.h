/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAbstractReviewTableViewCell.h>

@class IMChat, CNAvatarView;

@interface CKReviewLargeConversationsTableViewCell : CKAbstractReviewTableViewCell {

	IMChat* _chat;
	CNAvatarView* _avatarView;

}

@property (nonatomic,retain) IMChat * chat;                          //@synthesize chat=_chat - In the implementation block
@property (nonatomic,retain) CNAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
+(double)requestedHeight;
+(CGSize)leftHandSideViewSize;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(CNAvatarView *)avatarView;
-(IMChat *)chat;
-(id)leftHandSideView;
-(void)prepareForReuse;
-(void)setChat:(IMChat *)arg1 ;
-(void)setModelObject:(id)arg1 ;
@end
