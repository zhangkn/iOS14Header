/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MBBackgroundRestoreInfo : NSObject <NSSecureCoding, NSCopying> {

	int dataClassesRemaining;
	unsigned long long bytesRemaining;
	NSArray* failedDomains;
	int _dataClassesRemaining;
	unsigned long long _bytesRemaining;
	NSArray* _failedDomains;

}

@property (assign) int dataClassesRemaining;                       //@synthesize dataClassesRemaining=_dataClassesRemaining - In the implementation block
@property (assign) unsigned long long bytesRemaining;              //@synthesize bytesRemaining=_bytesRemaining - In the implementation block
@property (retain) NSArray * failedDomains;                        //@synthesize failedDomains=_failedDomains - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setBytesRemaining:(unsigned long long)arg1 ;
-(void)setFailedDomains:(NSArray *)arg1 ;
-(void)setDataClassesRemaining:(int)arg1 ;
-(unsigned long long)bytesRemaining;
-(int)dataClassesRemaining;
-(NSArray *)failedDomains;
@end

