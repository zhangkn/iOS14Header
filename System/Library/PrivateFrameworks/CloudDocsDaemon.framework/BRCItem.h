/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class BRCItemID, BRCItemGlobalID, BRCStatInfo, BRCUserRowID, BRCAccountSession, BRCServerZone, BRCClientZone;


@protocol BRCItem <NSCopying,NSSecureCoding>
@property (nonatomic,readonly) BOOL isDead; 
@property (nonatomic,readonly) BOOL isLive; 
@property (nonatomic,readonly) BOOL isBRAlias; 
@property (nonatomic,readonly) BOOL isPackage; 
@property (nonatomic,readonly) BOOL isDocument; 
@property (nonatomic,readonly) BOOL isDirectory; 
@property (nonatomic,readonly) BOOL isFSRoot; 
@property (nonatomic,readonly) BOOL isZoneRoot; 
@property (nonatomic,readonly) BOOL isSymLink; 
@property (nonatomic,readonly) BOOL isFinderBookmark; 
@property (nonatomic,readonly) BOOL isOwnedByMe; 
@property (nonatomic,readonly) BOOL isSharedByMe; 
@property (nonatomic,readonly) BOOL hasShareIDAndIsOwnedByMe; 
@property (nonatomic,readonly) BOOL isShared; 
@property (nonatomic,readonly) BOOL isSharedToMe; 
@property (nonatomic,readonly) BOOL isSharedToMeTopLevelItem; 
@property (nonatomic,readonly) BOOL isSharedToMeChildItem; 
@property (nonatomic,readonly) BOOL isTopLevelSharedItem; 
@property (nonatomic,readonly) BOOL isChildSharedItem; 
@property (nonatomic,readonly) BRCItemID * itemID; 
@property (nonatomic,readonly) BRCItemGlobalID * itemGlobalID; 
@property (nonatomic,readonly) BRCStatInfo * st; 
@property (nonatomic,readonly) BRCUserRowID * ownerKey; 
@property (nonatomic,readonly) BRCAccountSession * session; 
@property (nonatomic,readonly) BRCServerZone * serverZone; 
@property (nonatomic,readonly) BRCClientZone * clientZone; 
@property (assign,nonatomic) unsigned long long sharingOptions; 
@required
-(BRCStatInfo *)st;
-(BOOL)isSharedToMe;
-(BRCServerZone *)serverZone;
-(BRCItemID *)itemID;
-(BOOL)isPackage;
-(BOOL)isShared;
-(BRCAccountSession *)session;
-(BOOL)isDirectory;
-(BOOL)isBRAlias;
-(BOOL)isTopLevelSharedItem;
-(BOOL)isLive;
-(BOOL)isFinderBookmark;
-(BOOL)isDocument;
-(BOOL)isOwnedByMe;
-(BRCUserRowID *)ownerKey;
-(BOOL)isSymLink;
-(BOOL)isDead;
-(BRCClientZone *)clientZone;
-(BRCItemGlobalID *)itemGlobalID;
-(BOOL)isFSRoot;
-(unsigned long long)sharingOptions;
-(BOOL)isZoneRoot;
-(BOOL)isSharedToMeTopLevelItem;
-(BOOL)isSharedToMeChildItem;
-(BOOL)isSharedByMe;
-(BOOL)hasShareIDAndIsOwnedByMe;
-(BOOL)validateLoggingToFile:(_sFILE*)arg1;
-(BOOL)isChildSharedItem;
-(void)setSharingOptions:(unsigned long long)arg1;

@end

