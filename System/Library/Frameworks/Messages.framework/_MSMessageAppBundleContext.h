/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messages/Messages-Structs.h>
#import <libobjc.A.dylib/_MSMessageComposeExtensionImplProtocol.h>

@protocol _MSMessageComposeExtensionImplProtocol, _MSMessageComposeHostImplProtocol;
@class UIViewController, MSConversation, NSString;

@interface _MSMessageAppBundleContext : NSObject <_MSMessageComposeExtensionImplProtocol> {

	BOOL _wantsLiveView;
	id<_MSMessageComposeExtensionImplProtocol> _containingContext;
	UIViewController* _viewController;
	MSConversation* _activeConversation;
	unsigned long long _presentationStyle;
	unsigned long long _presentationContext;
	id<_MSMessageComposeHostImplProtocol> _hostContext;

}

@property (nonatomic,retain) id<_MSMessageComposeHostImplProtocol> hostContext;                         //@synthesize hostContext=_hostContext - In the implementation block
@property (nonatomic,readonly) MSConversation * activeConversation;                                     //@synthesize activeConversation=_activeConversation - In the implementation block
@property (assign,nonatomic) unsigned long long presentationStyle;                                      //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (assign,nonatomic) unsigned long long presentationContext;                                    //@synthesize presentationContext=_presentationContext - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * viewController;                                //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * stickerViewController; 
@property (nonatomic,retain) id<_MSMessageComposeExtensionImplProtocol> containingContext;              //@synthesize containingContext=_containingContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)presentationStyle;
-(void)presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dismissAndPresentPhotosApp;
-(void)_resignActive;
-(UIViewController *)viewController;
-(void)setPresentationStyle:(unsigned long long)arg1 ;
-(void)beginDisablingUserInteraction;
-(void)endDisablingUserInteraction;
-(void)stageAssetArchive:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPresentationContext:(unsigned long long)arg1 ;
-(id<_MSMessageComposeHostImplProtocol>)hostContext;
-(unsigned long long)presentationContext;
-(void)setHostContext:(id<_MSMessageComposeHostImplProtocol>)arg1 ;
-(void)dismiss;
-(void)requestPresentationStyleExpanded:(BOOL)arg1 ;
-(void)requestPresentationStyle:(unsigned long long)arg1 ;
-(void)_remoteViewDidBecomeReadyForDisplay;
-(void)requestResize;
-(void)contentDidLoad;
-(MSConversation *)activeConversation;
-(void)_didRemoveAssetArchiveWithIdentifier:(id)arg1 ;
-(void)_prepareForPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_volumeButtonPressed:(BOOL)arg1 ;
-(void)setContainingContext:(id<_MSMessageComposeExtensionImplProtocol>)arg1 ;
-(UIViewController *)stickerViewController;
-(void)stageAppItem:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)stageMediaItem:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)stageRichLink:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeAssetArchiveWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startDragMediaItem:(id)arg1 frameInRemoteView:(CGRect)arg2 fence:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dragMediaItemMoved:(id)arg1 frameInRemoteView:(CGRect)arg2 rotation:(double)arg3 scale:(double)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)dragMediaItemCanceled;
-(void)_becomeActiveWithConversationState:(id)arg1 presentationState:(id)arg2 ;
-(void)_canSendMessage:(id)arg1 conversationState:(id)arg2 associatedText:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_requestContentSizeThatFits:(id)arg1 presentationStyle:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_conversationDidChangeWithConversationState:(id)arg1 ;
-(void)_presentationWillChangeToPresentationState:(id)arg1 ;
-(void)_presentationDidChangeToPresentationState:(id)arg1 ;
-(void)_didReceiveMessage:(id)arg1 conversationState:(id)arg2 ;
-(void)_didStartSendingMessage:(id)arg1 conversationState:(id)arg2 ;
-(void)_didCancelSendingMessage:(id)arg1 conversationState:(id)arg2 ;
-(void)_requestSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)_hostDidBeginDeferredTeardown;
-(void)_handleTextInputPayload:(id)arg1 withPayloadID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<_MSMessageComposeExtensionImplProtocol>)containingContext;
-(CGRect)initialFrameOfHostView;
-(id)initWithViewController:(id)arg1 wantsLiveView:(BOOL)arg2 ;
-(void)_sendWillBecomeActiveMessage;
@end
