/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSDisplayObserving.h>
#import <libobjc.A.dylib/FBSDisplayLayoutPublisherObserving.h>

@class FBSDisplayLayoutPublisher, FBSDisplayLayout, NSString;

@interface FBMainDisplayLayoutPublisher : NSObject <FBSDisplayObserving, FBSDisplayLayoutPublisherObserving> {

	FBSDisplayLayoutPublisher* _publisher;
	int _displayBacklightToken;

}

@property (assign,nonatomic) long long interfaceOrientation; 
@property (assign,nonatomic) long long backlightLevel; 
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,readonly) FBSDisplayLayout * currentLayout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(long long)backlightLevel;
-(long long)interfaceOrientation;
-(void)flush;
-(void)setBacklightLevel:(long long)arg1 ;
-(void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(BOOL)isTransitioning;
-(void)publisher:(id)arg1 didUpdateLayout:(id)arg2 withTransition:(id)arg3 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(id)addElement:(id)arg1 ;
-(FBSDisplayLayout *)currentLayout;
-(id)init;
-(id)transitionAssertionWithReason:(id)arg1 ;
-(id)_initWithPublisher:(id)arg1 ;
-(id)_addElement:(id)arg1 forKey:(id)arg2 ;
@end

