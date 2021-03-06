/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSCache;

@interface _MPLazySectionedCollectionStorage : NSObject {

	vector<long, std::__1::allocator<long> >* _cachedNumberOfItemsInSections;
	long long _cachedNumberOfSections;
	BOOL _hasValidCachedNumberOfSections;
	NSCache* _itemsCache;
	map<long, MPIdentifierSet *, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, MPIdentifierSet *> > >* _itemIdentifierSetMap;
	NSCache* _sectionsCache;
	map<long, MPIdentifierSet *, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, MPIdentifierSet *> > >* _sectionIdentifierSetMap;

}
@end

