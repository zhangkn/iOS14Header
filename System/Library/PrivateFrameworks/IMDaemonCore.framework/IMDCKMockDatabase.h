/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabase.h>

@class NSDictionary;

@interface IMDCKMockDatabase : CKDatabase {

	NSDictionary* _identifierToZoneMap;

}

@property (nonatomic,readonly) NSDictionary * identifierToZoneMap;              //@synthesize identifierToZoneMap=_identifierToZoneMap - In the implementation block
-(void)addOperation:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_initWithContainer:(id)arg1 scope:(long long)arg2 ;
-(id)_zoneManager;
-(id)_zoneIdentifierForOperation:(id)arg1 ;
-(NSDictionary *)identifierToZoneMap;
@end

