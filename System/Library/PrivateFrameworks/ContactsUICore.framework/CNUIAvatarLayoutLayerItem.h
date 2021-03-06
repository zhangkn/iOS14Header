/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNCancelable;
@class CALayer;

@interface CNUIAvatarLayoutLayerItem : NSObject {

	CALayer* _layer;
	id<CNCancelable> _avatarImageRendererToken;

}

@property (nonatomic,retain) CALayer * layer;                                        //@synthesize layer=_layer - In the implementation block
@property (nonatomic,retain) id<CNCancelable> avatarImageRendererToken;              //@synthesize avatarImageRendererToken=_avatarImageRendererToken - In the implementation block
-(void)setLayer:(CALayer *)arg1 ;
-(CALayer *)layer;
-(id)initWithLayer:(id)arg1 ;
-(id<CNCancelable>)avatarImageRendererToken;
-(void)setAvatarImageRendererToken:(id<CNCancelable>)arg1 ;
-(void)resetToken;
@end

