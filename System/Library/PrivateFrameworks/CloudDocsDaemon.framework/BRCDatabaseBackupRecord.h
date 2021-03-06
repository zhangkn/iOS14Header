/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface BRCDatabaseBackupRecord : NSObject {

	BOOL _isDirectory;
	unsigned _genCount;
	NSString* _relativePath;
	NSNumber* _fileID;
	NSNumber* _docID;

}

@property (nonatomic,retain) NSString * relativePath;              //@synthesize relativePath=_relativePath - In the implementation block
@property (nonatomic,retain) NSNumber * fileID;                    //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,retain) NSNumber * docID;                     //@synthesize docID=_docID - In the implementation block
@property (assign,nonatomic) unsigned genCount;                    //@synthesize genCount=_genCount - In the implementation block
@property (assign,nonatomic) BOOL isDirectory;                     //@synthesize isDirectory=_isDirectory - In the implementation block
-(NSNumber *)fileID;
-(NSNumber *)docID;
-(BOOL)isDirectory;
-(NSString *)relativePath;
-(void)setRelativePath:(NSString *)arg1 ;
-(void)setIsDirectory:(BOOL)arg1 ;
-(id)description;
-(void)setFileID:(NSNumber *)arg1 ;
-(id)initWithRelativePath:(id)arg1 fileID:(id)arg2 docID:(id)arg3 genCount:(unsigned)arg4 isDirectory:(BOOL)arg5 ;
-(unsigned)genCount;
-(id)initWithPQLResultSet:(id)arg1 ;
-(void)setDocID:(NSNumber *)arg1 ;
-(void)setGenCount:(unsigned)arg1 ;
@end

