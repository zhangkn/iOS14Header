/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>

@class NSURL, NSString, NSNumber;

@interface EKAttachment : EKObject

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * localRelativePath; 
@property (nonatomic,readonly) NSURL * localURL; 
@property (nonatomic,readonly) BOOL isBinary; 
@property (nonatomic,readonly) NSString * fileName; 
@property (nonatomic,readonly) NSString * fileFormat; 
@property (nonatomic,readonly) NSNumber * fileSize; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSURL * URLForPendingFileCopy; 
+(id)knownSingleValueKeysForComparison;
+(id)knownIdentityKeysForComparison;
+(Class)frozenClass;
+(id)createTempDestinationURLWithExtension:(id)arg1 ;
+(id)_copyFileAtURLToTemporaryDirectory:(id)arg1 ;
-(NSNumber *)fileSize;
-(id)semanticIdentifier;
-(NSString *)fileName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)localURL;
-(NSString *)UUID;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(id)externalID;
-(void)setExternalID:(id)arg1 ;
-(BOOL)isBinary;
-(id)initWithFilepath:(id)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(long long)compareFileNames:(id)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
-(NSString *)fileFormat;
-(id)fileNameRaw;
-(void)setFileFormat:(NSString *)arg1 ;
-(void)setFileNameRaw:(id)arg1 ;
-(void)setIsBinary:(BOOL)arg1 ;
-(NSString *)localRelativePath;
-(void)setLocalRelativePath:(NSString *)arg1 ;
-(id)XPropertiesData;
-(void)setXPropertiesData:(id)arg1 ;
-(NSURL *)URLForPendingFileCopy;
-(void)setURLForPendingFileCopy:(NSURL *)arg1 ;
-(id)description;
@end
