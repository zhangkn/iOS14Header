/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLPhotoLibraryBundle;

@interface PLPhotoLibraryBundlePriorityTuple : NSObject {

	PLPhotoLibraryBundle* _bundle;
	unsigned long long _priority;

}

@property (nonatomic,readonly) PLPhotoLibraryBundle * bundle;              //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                //@synthesize priority=_priority - In the implementation block
-(PLPhotoLibraryBundle *)bundle;
-(id)initWithBundle:(id)arg1 priority:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)priority;
-(id)description;
@end

