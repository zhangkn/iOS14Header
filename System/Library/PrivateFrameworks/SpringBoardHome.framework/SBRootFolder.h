/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:11 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <SpringBoardHome/SBFolder.h>

@protocol SBRootFolderDelegate;
@class SBHIconModel, SBIconListModel;

@interface SBRootFolder : SBFolder {

	BOOL _supportsTodayList;
	id<SBRootFolderDelegate> _delegate;
	SBHIconModel* _model;

}

@property (setter=_setDock:,nonatomic,retain) SBIconListModel * dock; 
@property (setter=_setTodayList:,nonatomic,retain) SBIconListModel * todayList; 
@property (setter=_setFavoriteTodayList:,nonatomic,retain) SBIconListModel * favoriteTodayList; 
@property (setter=_setIgnoredList:,nonatomic,retain) SBIconListModel * ignoredList; 
@property (assign,nonatomic,__weak) id<SBRootFolderDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) SBHIconModel * model;                                                    //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) BOOL supportsBadging; 
@property (nonatomic,readonly) BOOL supportsDock; 
@property (nonatomic,readonly) BOOL supportsTodayList;                                                       //@synthesize supportsTodayList=_supportsTodayList - In the implementation block
@property (nonatomic,readonly) BOOL supportsIgnoredList; 
@property (nonatomic,readonly) BOOL containsWidgetIconExcludingTodayList; 
@property (nonatomic,readonly) BOOL containsVisibleWidgetIconExcludingTodayList; 
+(BOOL)isRootFolderClass;
-(SBIconListModel *)dock;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(BOOL)supportsDock;
-(id)nodeIdentifier;
-(BOOL)supportsTodayPage;
-(id)icons;
-(void)_setDock:(id)arg1 ;
-(void)_setFavoriteTodayList:(id)arg1 ;
-(SBIconListModel *)todayList;
-(BOOL)containsVisibleWidgetIconExcludingTodayList;
-(BOOL)isIconAtIndexPathInFavoriteTodayList:(id)arg1 ;
-(BOOL)supportsTodayList;
-(unsigned long long)_specialIndexOfList:(id)arg1 ;
-(void)_setIgnoredList:(id)arg1 ;
-(unsigned long long)visibleIndexOfList:(id)arg1 ;
-(unsigned long long)indexOfList:(id)arg1 ;
-(BOOL)containsWidgetIconExcludingTodayList;
-(SBHIconModel *)model;
-(BOOL)isIconAtIndexPathInIgnoredList:(id)arg1 ;
-(void)removeList:(id)arg1 ;
-(void)enumerateExtraListsUsingBlock:(/*^block*/id)arg1 ;
-(void)setModel:(SBHIconModel *)arg1 ;
-(unsigned long long)hiddenIndexOfList:(id)arg1 ;
-(BOOL)isValidListIndex:(unsigned long long)arg1 ;
-(BOOL)isIconAtIndexPathInDock:(id)arg1 ;
-(BOOL)canAddIconCount:(unsigned long long)arg1 startingAtList:(id)arg2 ;
-(void)setDelegate:(id<SBRootFolderDelegate>)arg1 ;
-(SBIconListModel *)ignoredList;
-(id)folderContainingIndexPath:(id)arg1 relativeIndexPath:(id*)arg2 ;
-(id)listAtIndex:(unsigned long long)arg1 ;
-(id<SBRootFolderDelegate>)delegate;
-(BOOL)supportsIgnoredList;
-(BOOL)_compactsFirstList;
-(void)_setTodayList:(id)arg1 ;
-(void)_didExplicitlyRemoveHiddenLists:(id)arg1 ;
-(BOOL)isRootFolder;
-(BOOL)supportsBadging;
-(BOOL)isIconAtIndexPathInDock:(id)arg1 includingDockFolders:(BOOL)arg2 ;
-(SBIconListModel *)favoriteTodayList;
-(BOOL)isIconAtIndexPathInTodayList:(id)arg1 ;
-(BOOL)canRemoveIcons;
-(BOOL)canBounceIcon:(id)arg1 ;
-(BOOL)canEditDisplayName;
@end
