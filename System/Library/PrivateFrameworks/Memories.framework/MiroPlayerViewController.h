/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:32 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UIViewController.h>

@protocol MemoryOwner;
@interface MiroPlayerViewController : UIViewController {

	id<MemoryOwner> _memoryOwnerDelegate;

}

@property (nonatomic,retain) id<MemoryOwner> memoryOwnerDelegate;              //@synthesize memoryOwnerDelegate=_memoryOwnerDelegate - In the implementation block
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)warnTooManyLiveCompositors:(id)arg1 ;
-(id<MemoryOwner>)memoryOwnerDelegate;
-(void)setMemoryOwnerDelegate:(id<MemoryOwner>)arg1 ;
@end
