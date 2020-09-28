/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTAvatarRecord;
@class AVTStickerGenerator;

@interface CNAvatarStickerGeneratorProvider : NSObject {

	AVTStickerGenerator* _generator;
	id<AVTAvatarRecord> _avatarRecord;

}

@property (nonatomic,retain) AVTStickerGenerator * generator;               //@synthesize generator=_generator - In the implementation block
@property (nonatomic,retain) id<AVTAvatarRecord> avatarRecord;              //@synthesize avatarRecord=_avatarRecord - In the implementation block
-(AVTStickerGenerator *)generator;
-(id<AVTAvatarRecord>)avatarRecord;
-(id)initWithAvatarRecord:(id)arg1 ;
-(void)setAvatarRecord:(id<AVTAvatarRecord>)arg1 ;
-(void)setGenerator:(AVTStickerGenerator *)arg1 ;
@end
