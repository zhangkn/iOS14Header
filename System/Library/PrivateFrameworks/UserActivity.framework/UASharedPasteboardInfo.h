/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserActivity/UserActivity-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSFileHandle, NSArray, NSString, NSDictionary;

@interface UASharedPasteboardInfo : NSObject <NSSecureCoding, NSCopying> {

	NSFileHandle* _dataFile;
	long long _dataSize;
	NSArray* _items;
	NSString* _sharedDataPath;
	NSDictionary* _sandboxExtensions;

}

@property (retain) NSFileHandle * dataFile;                     //@synthesize dataFile=_dataFile - In the implementation block
@property (assign) long long dataSize;                          //@synthesize dataSize=_dataSize - In the implementation block
@property (copy) NSArray * items;                               //@synthesize items=_items - In the implementation block
@property (copy) NSString * sharedDataPath;                     //@synthesize sharedDataPath=_sharedDataPath - In the implementation block
@property (copy) NSDictionary * sandboxExtensions;              //@synthesize sandboxExtensions=_sandboxExtensions - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)items;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSandboxExtensions:(NSDictionary *)arg1 ;
-(long long)dataSize;
-(NSFileHandle *)dataFile;
-(void)setItems:(NSArray *)arg1 ;
-(NSDictionary *)sandboxExtensions;
-(void)setDataFile:(NSFileHandle *)arg1 ;
-(void)setDataSize:(long long)arg1 ;
-(void)setSharedDataPath:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)sharedDataPath;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end
