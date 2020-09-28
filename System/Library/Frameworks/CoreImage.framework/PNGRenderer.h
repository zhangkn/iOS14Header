/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CGRenderer.h>

@interface PNGRenderer : CGRenderer {

	CFURLRef fullURL;
	CGColorRef background;
	CGColorSpaceRef colorSpace;

}
-(void)setFileURL:(id)arg1 ;
-(void)dealloc;
-(CGImageRef)cgimage;
-(id)init;
-(BOOL)setCanvasWidth:(unsigned)arg1 height:(unsigned)arg2 ;
-(void)flushRender;
@end
