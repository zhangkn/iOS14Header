/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface ML3QueryResultSet_BackingStore : NSObject {

	vector<long long, std::__1::allocator<long long> >* _persistentIDs;
	vector<unsigned char, std::__1::allocator<unsigned char> > _sections;

}

@property (nonatomic,readonly) unsigned long long count; 
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(long long)persistentIDAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)reverseEnumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)containsPersistentIDs:(const unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >*)arg1 ;
-(void)reverseEnumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(id)backingStoreByRemovingPersistentIDs:(const unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >*)arg1 ;
@end
