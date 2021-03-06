/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HardwareDiagnostics/HardwareDiagnostics-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableDictionary, NSDate, NSDictionary, NSError, NSArray;

@interface HDReport : NSObject <NSSecureCoding, NSCopying> {

	NSMutableArray* _results;
	NSMutableDictionary* _files;
	NSDate* _startTime;
	NSDate* _endTime;
	NSDictionary* _auxiliaryData;
	NSError* _error;
	long long _status;

}

@property (nonatomic,copy) NSDate * startTime;                        //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy) NSDate * endTime;                          //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) NSArray * results; 
@property (nonatomic,readonly) NSDictionary * files; 
@property (nonatomic,copy) NSDictionary * auxiliaryData;              //@synthesize auxiliaryData=_auxiliaryData - In the implementation block
@property (nonatomic,readonly) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) long long status;                      //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)endTime;
-(NSArray *)results;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)files;
-(void)addResult:(id)arg1 ;
-(long long)status;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSError *)error;
-(id)init;
-(void)setEndTime:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)addFile:(id)arg1 forName:(id)arg2 ;
-(NSDictionary *)auxiliaryData;
-(void)setAuxiliaryData:(NSDictionary *)arg1 ;
-(void)failedForError:(id)arg1 ;
-(BOOL)attemptToSetPassed;
@end

