/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBFluidSwitcherItemContainer.h>
#import <libobjc.A.dylib/SBFluidSwitcherItemContainerReusable.h>

@class NSString;

@interface SBReusableSnapshotItemContainer : SBFluidSwitcherItemContainer <SBFluidSwitcherItemContainerReusable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAppLayout:(id)arg1 ;
-(void)conformsToProtocolSBFluidSwitcherItemContainerReusable;
-(void)prepareForReuse;
-(void)setContentView:(id)arg1 ;
-(id)_snapshotView;
-(id)initWithFrame:(CGRect)arg1 appLayout:(id)arg2 delegate:(id)arg3 active:(BOOL)arg4 ;
-(void)_updateSnapshotViewWithAppLayout:(id)arg1 ;
@end
