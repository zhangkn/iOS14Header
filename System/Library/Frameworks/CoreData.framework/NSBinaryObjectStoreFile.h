/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary;

@interface NSBinaryObjectStoreFile : NSObject {

	int _databaseVersion;
	NSDictionary* _fullMetadata;
	unsigned long long _primaryKeyGeneration;
	NSMutableDictionary* _mapData;
	NSDictionary* _storeOptions;

}
-(id)mapData;
-(void)dealloc;
-(id)fullMetadata;
-(void)setMapData:(id)arg1 ;
-(BOOL)readMetadataFromFile:(id)arg1 securely:(BOOL)arg2 error:(id*)arg3 ;
-(void)setFullMetadata:(id)arg1 ;
-(void)setDatabaseVersion:(int)arg1 ;
-(BOOL)writeMetadataToFile:(id)arg1 error:(id*)arg2 ;
-(void)setPrimaryKeyGeneration:(unsigned long long)arg1 ;
-(int)databaseVersion;
-(unsigned long long)primaryKeyGeneration;
-(BOOL)_writeMetadataData:(id)arg1 andMapDataData:(id)arg2 toFile:(id)arg3 error:(id*)arg4 ;
-(BOOL)readFromFile:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeToFile:(id)arg1 error:(id*)arg2 ;
@end

