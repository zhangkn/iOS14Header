/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBMainDisplayWorkspaceAppInteractionEventSourceObserving <NSObject>
@optional
-(void)eventSource:(id)arg1 userTouchedApplication:(id)arg2;
-(void)eventSource:(id)arg1 userDeletedWebBookmark:(id)arg2;
-(void)eventSource:(id)arg1 didBeginTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;
-(void)eventSource:(id)arg1 applicationsBecameHidden:(id)arg2;
-(void)eventSource:(id)arg1 userRemovedSuggestions:(id)arg2;
-(void)eventSource:(id)arg1 userDeletedApplications:(id)arg2;
-(void)eventSource:(id)arg1 userQuitApplicationInSwitcher:(id)arg2;
-(void)eventSource:(id)arg1 applicationsBecameVisible:(id)arg2;
-(void)eventSource:(id)arg1 keyboardFocusChangedToApplication:(id)arg2;
-(void)eventSource:(id)arg1 didFinishTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;

@end

