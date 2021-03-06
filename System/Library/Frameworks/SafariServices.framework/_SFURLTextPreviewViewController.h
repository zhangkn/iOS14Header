/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class NSArray, _WKActivatedElementInfo, _SFLinkPreviewHeader, NSURL, _SFURLTextPreviewView;

@interface _SFURLTextPreviewViewController : UIViewController {

	NSArray* _linkActions;
	_WKActivatedElementInfo* _activatedElementInfo;
	_SFLinkPreviewHeader* _previewHeader;
	NSURL* _URL;
	_SFURLTextPreviewView* _previewView;

}

@property (nonatomic,retain) _SFURLTextPreviewView * previewView;              //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                        //@synthesize URL=_URL - In the implementation block
-(_SFURLTextPreviewView *)previewView;
-(id)initWithURL:(id)arg1 ;
-(id)_linkActions;
-(NSURL *)URL;
-(void)viewWillLayoutSubviews;
-(void)setURL:(NSURL *)arg1 ;
-(void)loadView;
-(id)_activatedElementInfo;
-(void)setPreviewView:(_SFURLTextPreviewView *)arg1 ;
-(void)_setLinkActions:(id)arg1 ;
-(void)_setActivatedElementInfo:(id)arg1 ;
-(id)_previewHeader;
@end

