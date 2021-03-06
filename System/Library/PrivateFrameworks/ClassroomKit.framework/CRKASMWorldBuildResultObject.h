/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKASMRoster;
@class NSArray;

@interface CRKASMWorldBuildResultObject : NSObject {

	id<CRKASMRoster> _roster;
	NSArray* _manageableLocations;

}

@property (nonatomic,readonly) id<CRKASMRoster> roster;                         //@synthesize roster=_roster - In the implementation block
@property (nonatomic,copy,readonly) NSArray * manageableLocations;              //@synthesize manageableLocations=_manageableLocations - In the implementation block
-(id<CRKASMRoster>)roster;
-(id)init;
-(id)initWithRoster:(id)arg1 manageableLocations:(id)arg2 ;
-(NSArray *)manageableLocations;
@end

