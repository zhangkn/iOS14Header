/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLChangeStorage.h>

@class CPLEngineStore;

@interface CPLUnacknowledgedChangeStorage : CPLChangeStorage {

	CPLEngineStore* _store;

}

@property (nonatomic,readonly) CPLEngineStore * store;              //@synthesize store=_store - In the implementation block
-(id)initWithStore:(id)arg1 ;
-(CPLEngineStore *)store;
-(id)changeWithScopedIdentifier:(id)arg1 ;
-(id)changesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(id)storageDescription;
@end

