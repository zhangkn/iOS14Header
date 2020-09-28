/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:48 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDITesterCertHomeKitTestSubmission : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _accessoryManufacturer;
	NSString* _accessoryName;
	NSString* _testName;
	NSString* _testUUID;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryManufacturer; 
@property (nonatomic,retain) NSString * accessoryManufacturer;              //@synthesize accessoryManufacturer=_accessoryManufacturer - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryName; 
@property (nonatomic,retain) NSString * accessoryName;                      //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,readonly) BOOL hasTestUUID; 
@property (nonatomic,retain) NSString * testUUID;                           //@synthesize testUUID=_testUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasTestName; 
@property (nonatomic,retain) NSString * testName;                           //@synthesize testName=_testName - In the implementation block
-(void)setHasTimestamp:(BOOL)arg1 ;
-(NSString *)testName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setTestName:(NSString *)arg1 ;
-(void)dealloc;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned long long)hash;
-(NSString *)accessoryName;
-(id)description;
-(void)setAccessoryName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setAccessoryManufacturer:(NSString *)arg1 ;
-(NSString *)accessoryManufacturer;
-(void)setTestUUID:(NSString *)arg1 ;
-(BOOL)hasTestUUID;
-(BOOL)hasTestName;
-(NSString *)testUUID;
-(BOOL)hasAccessoryName;
-(BOOL)hasAccessoryManufacturer;
@end
