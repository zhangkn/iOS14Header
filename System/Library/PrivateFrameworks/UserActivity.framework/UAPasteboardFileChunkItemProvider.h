/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UAPasteboardItemProviding.h>

@class NSUUID, NSString, NSFileHandle, NSNumber;

@interface UAPasteboardFileChunkItemProvider : NSObject <UAPasteboardItemProviding> {

	NSString* _type;
	NSUUID* _uuid;
	NSFileHandle* _dataFile;
	NSNumber* _offsetInFile;
	long long _chunkSize;

}

@property (retain) NSFileHandle * dataFile;                         //@synthesize dataFile=_dataFile - In the implementation block
@property (retain) NSNumber * offsetInFile;                         //@synthesize offsetInFile=_offsetInFile - In the implementation block
@property (assign) long long chunkSize;                             //@synthesize chunkSize=_chunkSize - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                           //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)offsetInFile;
-(NSFileHandle *)dataFile;
-(long long)chunkSize;
-(NSString *)type;
-(void)setDataFile:(NSFileHandle *)arg1 ;
-(void)setOffsetInFile:(NSNumber *)arg1 ;
-(void)setChunkSize:(long long)arg1 ;
-(void)getDataWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithType:(id)arg1 fileHandle:(id)arg2 offsetInFile:(id)arg3 size:(long long)arg4 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(void)setType:(NSString *)arg1 ;
@end

