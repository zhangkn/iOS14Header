/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ML3ClientImportSessionConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _allowAccountMerging;
	int _sourceType;
	NSString* _libraryPath;
	unsigned long long _operationCount;

}

@property (nonatomic,copy) NSString * libraryPath;                           //@synthesize libraryPath=_libraryPath - In the implementation block
@property (assign,nonatomic) int sourceType;                                 //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic) unsigned long long operationCount;              //@synthesize operationCount=_operationCount - In the implementation block
@property (assign,nonatomic) BOOL allowAccountMerging;                       //@synthesize allowAccountMerging=_allowAccountMerging - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSourceType:(int)arg1 ;
-(int)sourceType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)libraryPath;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)operationCount;
-(BOOL)allowAccountMerging;
-(void)setLibraryPath:(NSString *)arg1 ;
-(void)setOperationCount:(unsigned long long)arg1 ;
-(void)setAllowAccountMerging:(BOOL)arg1 ;
@end

