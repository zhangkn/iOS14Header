/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSURL, PLPhotoLibraryPathManager;

@interface PLAppPrivateData : NSObject {

	NSMutableDictionary* _backingDictionary;
	NSURL* _libraryURL;
	PLPhotoLibraryPathManager* _pathManager;

}

@property (retain) NSMutableDictionary * backingDictionary;              //@synthesize backingDictionary=_backingDictionary - In the implementation block
@property (retain) NSURL * libraryURL;                                   //@synthesize libraryURL=_libraryURL - In the implementation block
@property (retain) PLPhotoLibraryPathManager * pathManager;              //@synthesize pathManager=_pathManager - In the implementation block
+(id)appPrivateDataForLibraryURL:(id)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
-(NSURL *)libraryURL;
-(PLPhotoLibraryPathManager *)pathManager;
-(id)dictionaryWithValuesForKeys:(id)arg1 ;
-(id)initWithLibraryURL:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)setBackingDictionary:(NSMutableDictionary *)arg1 ;
-(id)debugDescription;
-(void)setValuesForKeysWithDictionary:(id)arg1 ;
-(void)setLibraryURL:(NSURL *)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)allKeys;
-(id)_dictionaryStorageURL;
-(void)_saveToFilesystem;
-(void)_readFromFilesystem;
-(id)_appPrivateDataFolderURL;
-(void)_recursiveCreateSubDictionariesIfMissing:(id)arg1 index:(unsigned long long)arg2 parentDictionary:(id)arg3 ;
-(void)setPathManager:(PLPhotoLibraryPathManager *)arg1 ;
-(NSMutableDictionary *)backingDictionary;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
@end
