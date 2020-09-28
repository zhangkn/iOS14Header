/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVTStickerRecentsItem.h>

@class NSString, UIImage, NSURL;

@interface AVTStickerRecentsPlaceholderItem : NSObject <AVTStickerRecentsItem> {

	UIImage* _image;
	NSString* _localizedDescription;
	/*^block*/id _provider;
	NSURL* _url;
	/*^block*/id discardableContentHandler;

}

@property (nonatomic,copy,readonly) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,retain) UIImage * image;                                     //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSURL * url;                                         //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) id provider;                                  //@synthesize provider=_provider - In the implementation block
@property (nonatomic,copy) id discardableContentHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)localizedDescription;
-(void)setImage:(UIImage *)arg1 ;
-(id)cellIdentifier;
-(id)provider;
-(UIImage *)image;
-(void)setUrl:(NSURL *)arg1 ;
-(void)discardContent;
-(id)discardableContentHandler;
-(void)setDiscardableContentHandler:(id)arg1 ;
-(NSURL *)url;
@end
