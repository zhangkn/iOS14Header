/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBAppLayout, SBDisplayItem, XBApplicationSnapshot, UIImage;

@interface SBAppSwitcherSnapshotCacheEntry : NSObject {

	BOOL _fromFullSizeSnapshotRequest;
	BOOL _needsUpdate;
	SBAppLayout* _appLayout;
	SBDisplayItem* _displayItem;
	XBApplicationSnapshot* _snapshot;
	UIImage* _snapshotImage;

}
-(id)description;
@end
