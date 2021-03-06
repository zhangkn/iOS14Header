/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIImage;

@interface MFAttachmentImageGenerator : UIView {

	CGSize _textSize;
	NSString* _displayString;
	UIImage* _image;
	double _maxImageHeight;

}
+(double)defaultHeight;
+(id)pngDataForAttachment:(id)arg1 ;
+(id)imageForAttachment:(id)arg1 ;
+(CGRect)imageRectForAttachment:(id)arg1 ;
-(id)pngData;
-(id)image;
-(id)initWithAttachment:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGRect)imageRect;
@end

