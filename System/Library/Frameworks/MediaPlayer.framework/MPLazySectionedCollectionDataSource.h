/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPLazySectionedCollectionDataSource <NSObject>
@optional
-(id)identifiersForSectionAtIndex:(long long)arg1;
-(BOOL)hasSameContentAsDataSource:(id)arg1;
-(id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
-(NSRange*)optionalSectionIndexTitlesRange;
-(id)identifiersForItemAtIndexPath:(id)arg1;
-(long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)arg1;
-(id)sectionIndexTitles;

@required
-(id)sectionAtIndex:(unsigned long long)arg1;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
-(unsigned long long)numberOfSections;
-(id)itemAtIndexPath:(id)arg1;

@end
