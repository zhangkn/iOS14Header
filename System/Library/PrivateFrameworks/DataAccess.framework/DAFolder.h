/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DAFolder : NSObject {

	BOOL _isDefault;
	BOOL _hasRemoteChanges;
	NSString* _folderName;
	NSString* _folderID;
	NSString* _parentFolderID;
	long long _dataclass;

}

@property (assign,nonatomic) BOOL hasRemoteChanges;                //@synthesize hasRemoteChanges=_hasRemoteChanges - In the implementation block
@property (nonatomic,copy) NSString * folderName;                  //@synthesize folderName=_folderName - In the implementation block
@property (nonatomic,copy) NSString * folderID;                    //@synthesize folderID=_folderID - In the implementation block
@property (nonatomic,copy) NSString * parentFolderID;              //@synthesize parentFolderID=_parentFolderID - In the implementation block
@property (assign,nonatomic) long long dataclass;                  //@synthesize dataclass=_dataclass - In the implementation block
@property (assign,nonatomic) BOOL isDefault;                       //@synthesize isDefault=_isDefault - In the implementation block
-(NSString *)folderName;
-(NSString *)parentFolderID;
-(void)setFolderID:(NSString *)arg1 ;
-(void)setFolderName:(NSString *)arg1 ;
-(BOOL)isDefault;
-(BOOL)isEqual:(id)arg1 ;
-(id)parentMailboxID;
-(unsigned long long)hash;
-(void)setIsDefault:(BOOL)arg1 ;
-(void)setDataclass:(long long)arg1 ;
-(long long)dataclass;
-(void)setParentFolderID:(NSString *)arg1 ;
-(BOOL)hasRemoteChanges;
-(void)setHasRemoteChanges:(BOOL)arg1 ;
-(NSString *)folderID;
-(id)description;
-(id)mailboxID;
@end

