/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebVideoFullscreenController : NSObject {

	RefPtr<VideoFullscreenControllerContext, WTF::DumbPtrTraits<VideoFullscreenControllerContext> >* _context;
	RefPtr<WebCore::HTMLVideoElement, WTF::DumbPtrTraits<WebCore::HTMLVideoElement> >* _videoElement;

}
-(void)setVideoElement:(NakedPtr<WebCore::HTMLVideoElement>*)arg1 ;
-(NakedPtr<WebCore::HTMLVideoElement>*)videoElement;
-(void)didFinishFullscreen:(VideoFullscreenControllerContext*)arg1 ;
-(void)enterFullscreen:(id)arg1 mode:(unsigned)arg2 ;
-(void)requestHideAndExitFullscreen;
-(id)init;
-(void)exitFullscreen;
@end

