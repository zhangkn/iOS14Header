/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <Foundation/NSProgress.h>

@interface WKDownloadProgress : NSProgress {

	RetainPtr<NSURLSessionDownloadTask>* m_task;
	WeakPtr<WebKit::Download, WTF::EmptyCounter>* m_download;
	RefPtr<WebKit::SandboxExtension, WTF::DumbPtrTraits<WebKit::SandboxExtension> >* m_sandboxExtension;

}
-(void)unpublish;
-(void)dealloc;
-(void)performCancel;
-(void)publish;
-(id)initWithDownloadTask:(id)arg1 download:(Download*)arg2 URL:(id)arg3 sandboxExtension:(RefPtr<WebKit::SandboxExtension, WTF::DumbPtrTraits<WebKit::SandboxExtension> >*)arg4 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
