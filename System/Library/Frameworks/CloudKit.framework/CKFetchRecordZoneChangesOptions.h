/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKServerChangeToken, NSArray;

@interface CKFetchRecordZoneChangesOptions : NSObject <NSSecureCoding, NSCopying> {

	BOOL _fetchNewestChangesFirst;
	BOOL _fetchChangesMadeByThisDevice;
	CKServerChangeToken* _previousServerChangeToken;
	unsigned long long _resultsLimit;
	NSArray* _desiredKeys;

}

@property (assign,nonatomic) BOOL fetchNewestChangesFirst;                               //@synthesize fetchNewestChangesFirst=_fetchNewestChangesFirst - In the implementation block
@property (assign,nonatomic) BOOL fetchChangesMadeByThisDevice;                          //@synthesize fetchChangesMadeByThisDevice=_fetchChangesMadeByThisDevice - In the implementation block
@property (nonatomic,copy) CKServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                            //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                        //@synthesize desiredKeys=_desiredKeys - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(id)zoneConfiguration;
-(void)setFetchNewestChangesFirst:(BOOL)arg1 ;
-(BOOL)fetchNewestChangesFirst;
-(BOOL)fetchChangesMadeByThisDevice;
-(id)initWithZoneConfiguration:(id)arg1 ;
-(void)setFetchChangesMadeByThisDevice:(BOOL)arg1 ;
-(NSArray *)desiredKeys;
-(id)init;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CKServerChangeToken *)previousServerChangeToken;
-(unsigned long long)resultsLimit;
@end
