/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlayUI/CPUINowPlayingViewController.h>
#import <libobjc.A.dylib/CPSButtonDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CPNowPlayingTemplateProviding.h>
#import <libobjc.A.dylib/CPBaseTemplateProviding.h>
#import <libobjc.A.dylib/CPSBaseTemplateViewController.h>

@protocol CPTemplateDelegate, CPSTemplateViewControllerDelegate;
@class CPSAudioPlaybackManager, CPTemplate, NAFuture, NSString;

@interface CPSNowPlayingViewController : CPUINowPlayingViewController <CPSButtonDelegate, UIGestureRecognizerDelegate, CPNowPlayingTemplateProviding, CPBaseTemplateProviding, CPSBaseTemplateViewController> {

	CPSAudioPlaybackManager* _audioPlaybackManager;
	CPTemplate* _associatedTemplate;
	id<CPTemplateDelegate> _templateDelegate;
	NAFuture* _templateProviderFuture;
	id<CPSTemplateViewControllerDelegate> _viewControllerDelegate;

}

@property (nonatomic,readonly) CPSAudioPlaybackManager * audioPlaybackManager;                                 //@synthesize audioPlaybackManager=_audioPlaybackManager - In the implementation block
@property (nonatomic,retain) CPTemplate * associatedTemplate;                                                  //@synthesize associatedTemplate=_associatedTemplate - In the implementation block
@property (nonatomic,retain) id<CPTemplateDelegate> templateDelegate;                                          //@synthesize templateDelegate=_templateDelegate - In the implementation block
@property (nonatomic,retain) NAFuture * templateProviderFuture;                                                //@synthesize templateProviderFuture=_templateProviderFuture - In the implementation block
@property (assign,nonatomic,__weak) id<CPSTemplateViewControllerDelegate> viewControllerDelegate;              //@synthesize viewControllerDelegate=_viewControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)invalidate;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setViewControllerDelegate:(id<CPSTemplateViewControllerDelegate>)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didSelectButton:(id)arg1 ;
-(id<CPSTemplateViewControllerDelegate>)viewControllerDelegate;
-(id<CPTemplateDelegate>)templateDelegate;
-(void)setTemplateDelegate:(id<CPTemplateDelegate>)arg1 ;
-(void)setControl:(id)arg1 selected:(BOOL)arg2 ;
-(void)updateNowPlayingTemplate:(id)arg1 withProxyDelegate:(id)arg2 ;
-(NAFuture *)templateProviderFuture;
-(void)setTemplateProviderFuture:(NAFuture *)arg1 ;
-(CPTemplate *)associatedTemplate;
-(void)setAssociatedTemplate:(CPTemplate *)arg1 ;
-(void)_cps_viewControllerWasPopped;
-(id)initWithNowPlayingTemplate:(id)arg1 templateDelegate:(id)arg2 environment:(id)arg3 ;
-(CPSAudioPlaybackManager *)audioPlaybackManager;
-(id)nowPlayingTemplate;
@end

