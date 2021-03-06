/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class CAContext, NSMutableArray, NSArray, UIScreen;

@interface _UIDragManager : NSObject {

	CAContext* _dragImageContext;
	long long _pendingSessionRequests;
	NSMutableArray* _pendingSessionRequestsCompletionBlocks;
	NSArray* _dragSessionSources;
	NSArray* _dragSessionDestinations;
	UIScreen* _screen;

}

@property (nonatomic,copy) NSArray * dragSessionSources;                   //@synthesize dragSessionSources=_dragSessionSources - In the implementation block
@property (nonatomic,copy) NSArray * dragSessionDestinations;              //@synthesize dragSessionDestinations=_dragSessionDestinations - In the implementation block
@property (nonatomic,readonly) CAContext * dragImageContext; 
@property (nonatomic,__weak,readonly) UIScreen * screen;                   //@synthesize screen=_screen - In the implementation block
+(void)initializeDraggingSystem;
-(UIScreen *)screen;
-(id)initWithScreen:(id)arg1 ;
-(void)deleteSlots:(id)arg1 ;
-(unsigned)uploadImage:(CGImageRef)arg1 ;
-(void)_willAddDeactivationReason:(id)arg1 ;
-(CAContext *)dragImageContext;
-(NSArray *)dragSessionSources;
-(void)setDragSessionSources:(NSArray *)arg1 ;
-(NSArray *)dragSessionDestinations;
-(void)performPendingSessionCompletionBlocksIfPossible;
-(BOOL)hasPendingSessionRequests;
-(void)setDragSessionDestinations:(NSArray *)arg1 ;
-(void)performAfterCompletingPendingSessionRequests:(/*^block*/id)arg1 ;
-(id)dragDestinationWithEvent:(id)arg1 ;
-(id)beginDragWithSessionConfiguration:(id)arg1 ;
-(void)sessionSourceDidEnd:(id)arg1 ;
-(id)sessionSourceWithIdentifier:(unsigned)arg1 ;
-(void)sessionDestinationDidEnd:(id)arg1 ;
@end

