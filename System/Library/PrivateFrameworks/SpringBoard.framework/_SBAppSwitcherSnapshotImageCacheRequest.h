/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBAppLayout, SBDisplayItem, XBApplicationSnapshot;

@interface _SBAppSwitcherSnapshotImageCacheRequest : NSObject {

	BOOL _loadFullSizeSnapshot;
	unsigned long long _sequenceID;
	SBAppLayout* _appLayout;
	SBDisplayItem* _displayItem;
	XBApplicationSnapshot* _snapshot;

}

@property (nonatomic,readonly) unsigned long long sequenceID;               //@synthesize sequenceID=_sequenceID - In the implementation block
@property (assign,nonatomic) BOOL loadFullSizeSnapshot;                     //@synthesize loadFullSizeSnapshot=_loadFullSizeSnapshot - In the implementation block
@property (nonatomic,retain) SBAppLayout * appLayout;                       //@synthesize appLayout=_appLayout - In the implementation block
@property (nonatomic,retain) SBDisplayItem * displayItem;                   //@synthesize displayItem=_displayItem - In the implementation block
@property (nonatomic,retain) XBApplicationSnapshot * snapshot;              //@synthesize snapshot=_snapshot - In the implementation block
-(void)setSnapshot:(XBApplicationSnapshot *)arg1 ;
-(void)setAppLayout:(SBAppLayout *)arg1 ;
-(SBAppLayout *)appLayout;
-(void)setDisplayItem:(SBDisplayItem *)arg1 ;
-(id)initWithSequenceID:(unsigned long long)arg1 ;
-(XBApplicationSnapshot *)snapshot;
-(SBDisplayItem *)displayItem;
-(unsigned long long)sequenceID;
-(void)setLoadFullSizeSnapshot:(BOOL)arg1 ;
-(BOOL)loadFullSizeSnapshot;
-(id)description;
@end

