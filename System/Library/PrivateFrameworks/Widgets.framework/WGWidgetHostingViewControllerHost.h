/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:59 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WGWidgetHostingViewControllerHost <NSObject>
@optional
-(void)widget:(id)arg1 didChangeLargestAvailableDisplayMode:(long long)arg2;
-(BOOL)shouldRemoveSnapshotWhenNotVisibleForWidget:(id)arg1;
-(BOOL)shouldPurgeNonCAMLSnapshotsForWidget:(id)arg1;
-(BOOL)shouldPurgeNonASTCSnapshotsForWidget:(id)arg1;
-(void)widget:(id)arg1 didEncounterProblematicSnapshotAtURL:(id)arg2;
-(long long)largestAvailableDisplayModeForWidget:(id)arg1;
-(void)widget:(id)arg1 didChangeUserSpecifiedDisplayMode:(long long)arg2;
-(void)widget:(id)arg1 didRemoveSnapshotAtURL:(id)arg2;
-(long long)userSpecifiedDisplayModeForWidget:(id)arg1;
-(BOOL)shouldPurgeArchivedSnapshotsForWidget:(id)arg1;

@end

