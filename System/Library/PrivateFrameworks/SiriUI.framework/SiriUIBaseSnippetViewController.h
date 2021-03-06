/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <SiriUI/SiriUIViewController.h>

@protocol SiriUIBaseAceObjectViewControllerDelegate;
@class AceObject, SiriUISashItem, SAUISnippet, NSString;

@interface SiriUIBaseSnippetViewController : UIViewController <SiriUIViewController> {

	BOOL _utteranceUserInteractionEnabled;
	AceObject* aceObject;
	SiriUISashItem* _sashItem;
	id<SiriUIBaseAceObjectViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) SAUISnippet * snippet; 
@property (assign,nonatomic,__weak) id<SiriUIBaseAceObjectViewControllerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SiriUISashItem * sashItem;                                                                //@synthesize sashItem=_sashItem - In the implementation block
@property (nonatomic,retain) AceObject * aceObject; 
@property (assign,getter=isUtteranceUserInteractionEnabled,nonatomic) BOOL utteranceUserInteractionEnabled;              //@synthesize utteranceUserInteractionEnabled=_utteranceUserInteractionEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SAUISnippet *)snippet;
-(double)desiredHeight;
-(void)setAceObject:(AceObject *)arg1 ;
-(void)setSnippet:(SAUISnippet *)arg1 ;
-(AceObject *)aceObject;
-(void)setDelegate:(id<SiriUIBaseAceObjectViewControllerDelegate>)arg1 ;
-(id<SiriUIBaseAceObjectViewControllerDelegate>)delegate;
-(SiriUISashItem *)sashItem;
-(BOOL)_canShowWhileLocked;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
-(void)wasAddedToTranscript;
-(BOOL)isUtteranceUserInteractionEnabled;
-(void)setUtteranceUserInteractionEnabled:(BOOL)arg1 ;
-(double)desiredTopPaddingBelowController:(id)arg1 ;
-(void)siriDidReceiveAdditionalContent:(id)arg1 error:(id)arg2 ;
@end

